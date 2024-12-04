#include "library.h"

#include <chrono>
#include <iostream>
#include <mutex>

void hello() {
    auto n = std::chrono::system_clock::now();
    std::chrono::zoned_time current(std::chrono::get_tzdb().current_zone(), n);
    std::chrono::zoned_time ny(std::chrono::get_tzdb().locate_zone("America/New_York"), n);

    std::cout << std::format("n {}\n current {}\n ny {}\n", n, current, ny);

    static std::once_flag f{};

    std::call_once(f, []() {
        std::cout << "called once";
    });
}
