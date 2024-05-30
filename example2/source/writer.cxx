#include <WonderRabbitProject/key.hxx>
#include <chrono>
#include <iostream>
#include <thread>

int main() {
  const auto& writer = WonderRabbitProject::key::writer_t::instance();

  for (auto n = 3; n != 0; --n) {
    std::cout << n << "\n";
    std::this_thread::sleep_for(std::chrono::seconds(1));
  }

  writer("a");
  writer("b");
  writer("c");
  writer("space");
  writer("d");
  writer("e");
  writer("f");
}
