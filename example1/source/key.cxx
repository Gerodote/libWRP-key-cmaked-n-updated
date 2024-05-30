#include <WonderRabbitProject/key.hxx>

namespace {
  using namespace WonderRabbitProject::key;
  void usage() {
    std::cout << "=== libWRP-key / print list of defined key ==="
                 "\n"
                 "\n"
                 "  usage 1: `key`            ... print list of defined key"
                 "\n"
                 "  usage 2: `key <key name>` ... <key name> test"
                 "\n"
                 "             ex.) key Space"
                 "\n"
                 "\n";

    const auto& key_helper = key_helper_t::instance();

    const auto data = key_helper.data_sorted_by_code();
    for (const auto& [code, name] : data) {
      std::cout << "  " << code << "(" << name << ")"
                << (key_helper.is_valid(code) ? "" : " [invalid]") << std::endl;
    }
  }

  void test(const std::string& key_name) {
    std::cout << "=== libWRP-key / test key name(" << key_name
              << ") ==="
                 "\n"
                 "\n";

    const auto& key_helper = key_helper_t::instance();
    const auto code = key_helper.code(key_name);

    std::cout << "  name :" << code << " --> " << key_helper.name(code) << std::endl;

    std::cout << "  names:" << code << " -->";
    for (const auto& name : key_helper.names(code)) {
      std::cout << " " << name;
    }
    std::cout << std::endl;
  }
}  // namespace

int main(const int n, const char* const* const vs) { (n < 2) ? usage() : test(vs[1]); }
