#pragma once

#include <algorithm>
#include <array>
#include <cstdint>
#include <iostream>
#include <map>
#include <memory>
#include <stdexcept>
#include <string>
#include <tuple>
#include <unordered_map>
#include <vector>

#include "key/detail.include_symbols.hxx"

namespace WonderRabbitProject {
  namespace key {
    struct key_helper_t final {
      using name_to_code_table_t = std::unordered_map<std::string, const uint16_t>;
      using code_to_name_table_t = std::unordered_multimap<uint16_t, const std::string>;
      using name_to_usb_hid_usage_id_table_t = std::unordered_map<std::string, const int>;
      using usb_hid_usage_id_to_name_table_t = std::unordered_multimap<int, const std::string>;
      using iterator_t = name_to_code_table_t::iterator;
      using const_iterator_t = name_to_code_table_t::const_iterator;
      static const key_helper_t& instance() {
        static key_helper_t helper_instance;
        return helper_instance;
      }

      uint16_t code(const std::string& name) const { return name_to_code_table.at(name); }

      std::string name(const uint16_t code) const {
        return code_to_name_table.equal_range(code).first->second;
      }

      std::vector<std::string> names(const uint16_t code) const {
        const auto range = code_to_name_table.equal_range(code);
        std::vector<std::string> vector;
        std::transform(range.first, range.second, std::back_inserter(vector),
                       [](decltype(*range.first)& key_name) { return key_name.second; });
        std::sort(std::begin(vector), std::end(vector));
        return vector;
      }

      int usb_hid_usage_id_from_name(const std::string& name) {
        return name_to_usb_hid_usage_id_table.at(name);
      }

      std::string name_from_usb_hid_usage_id(const int code) const {
        return usb_hid_usage_id_to_name_table.equal_range(code).first->second;
      }

      std::vector<std::string> names_from_usb_hid_usage_id(const int code) const {
        const auto range = usb_hid_usage_id_to_name_table.equal_range(code);
        std::vector<std::string> vector;
        std::transform(range.first, range.second, std::back_inserter(vector),
                       [](decltype(*range.first)& key_name) { return key_name.second; });
        std::sort(std::begin(vector), std::end(vector));
        return vector;
      }

      bool is_valid(const uint16_t code) const {
        return (code >= 0) && (code_to_name_table.contains(code));
      }

      iterator_t begin() { return name_to_code_table.begin(); }
      iterator_t end() { return name_to_code_table.end(); }
      const_iterator_t cbegin() const { return name_to_code_table.cbegin(); }
      const_iterator_t cend() const { return name_to_code_table.cend(); }

      std::map<std::string, const int> data_sorted_by_name() const {
        return {cbegin(), cend()};
      }

      std::vector<std::pair<int, std::string>> data_sorted_by_code() const {
        using return_element_t = std::pair<int, std::string>;
        using return_t = std::vector<return_element_t>;

        auto by_name = data_sorted_by_name();
        using by_name_element_t = decltype(by_name)::value_type;
        return_t vector;

        std::transform(
            std::begin(by_name), std::end(by_name), std::back_inserter(vector),
            [](const by_name_element_t& p) { return return_element_t(p.second, p.first); });

        std::stable_sort(
            std::begin(vector), std::end(vector),
            [](const return_element_t& a, const return_element_t& b) { return a.first < b.first; });

        return vector;
      }

    private:
      key_helper_t(const key_helper_t&) = delete;
      key_helper_t(key_helper_t&&) = delete;
      void operator=(const key_helper_t&) = delete;
      void operator=(key_helper_t&&) = delete;

      key_helper_t() {
        {
#include "key/detail.keys.hxx"

          for (const auto& t : keys) {
            name_to_code_table.emplace(std::get<0>(t), std::get<1>(t));
            code_to_name_table.emplace(std::get<1>(t), std::get<0>(t));
          }
        }
        {
          using keys_element_t = std::tuple<const char* const, const int>;

#include "key/detail.keys.USB_HID_Usage_ID.hxx"

          for (const auto& t : keys) {
            name_to_usb_hid_usage_id_table.emplace(std::get<0>(t), std::get<1>(t));
            usb_hid_usage_id_to_name_table.emplace(std::get<1>(t), std::get<0>(t));
          }
        }
      }
      name_to_code_table_t name_to_code_table;
      code_to_name_table_t code_to_name_table;
      name_to_usb_hid_usage_id_table_t name_to_usb_hid_usage_id_table;
      usb_hid_usage_id_to_name_table_t usb_hid_usage_id_to_name_table;
    } __attribute__((aligned(128)));
  }  // namespace key
}  // namespace WonderRabbitProject

#ifndef WRP_NO_KEY_WRITER
#  include "key/writer.hxx"
#endif
