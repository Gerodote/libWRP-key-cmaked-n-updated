#include <algorithm>
#include <cassert>
#include <cstddef>
#include <cstdint>
#include <iterator>
#include <string>

#include "FuzzedDataProvider.hpp"
#include "leetcode/example_my_example.hpp"

// Splits [data,data+size) into a vector of strings using a "magic" Separator.
std::vector<std::vector<uint8_t>> SplitInput(const uint8_t *Data, size_t Size,
                                             const uint8_t *Separator, size_t SeparatorSize) {
  std::vector<std::vector<uint8_t>> Res;
  assert(SeparatorSize > 0);
  auto Beg = Data;
  auto End = Data + Size;
  // Using memmem here. std::search may be harder for libFuzzer today.
  while (const uint8_t *Pos = (const uint8_t *)memmem(Beg, End - Beg, Separator, SeparatorSize)) {
    Res.push_back({Beg, Pos});
    Beg = Pos + SeparatorSize;
  }
  if (Beg < End) Res.push_back({Beg, End});
  return Res;
}

extern "C" int LLVMFuzzerTestOneInput(const uint8_t *Data, size_t Size) {
  // if (Size > 1000) {
  //   return 0;
  // }
  //
  // const uint8_t Separator[] = {0xDE, 0xAD, 0xBE, 0xEF};
  // std::vector<std::vector<uint8_t>> values = SplitInput(Data, Size, Separator, sizeof(Separator));
  // std::vector<std::string> strs;
  // strs.resize(std::size(values));
  // std::transform(values.cbegin(), values.cend(), strs.begin(), [](const auto &vec_uints_8) {
  //   return std::string(vec_uints_8.cbegin(), vec_uints_8.cend());
  // });
  //
  // Solution semifunctor;
  // std::string encoded = semifunctor.encode(strs);
  // std::vector<std::string> decoded = semifunctor.decode(encoded);
  // 
  // if(decoded != strs) {
  //   return -1;
  // }

  return 0;  // Values other than 0 and -1 are reserved for future use.
}
