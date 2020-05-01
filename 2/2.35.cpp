//
// Created by ldl on 2020/5/1.
//
/*
 * const int i = 42;
 * auto j = i;                  auto = int
 * const auto &k = i;           auto = int
 * auto *p = &i;                auto = const int
 * const auto j2 = i, &k2 = i;  auto = int
 */
#include <iostream>

int main() {
    const int i = 42;
    auto j = i;
    const auto &k = i; //const可加可不加
    auto *p = &i;
    const auto j2 = i, &k2 = i;
    return 0;
}
