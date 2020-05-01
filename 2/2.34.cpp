//
// Created by ldl on 2020/5/1.
//
#include <iostream>

int main() {
    int i = 0, &r = i;
    auto a = r;
    const int ci = i, &cr = ci;
    auto b = ci;
    auto c = cr;
    auto d = &i;
    auto e = &ci;
    auto &g = ci;
    std::cout << a;
    a = 42;
    std::cout << " " << a << std::endl;
    std::cout << b;
    b = 42;
    std::cout << " " << b << std::endl;
    std::cout << c;
    c = 42;
    std::cout << " " << c << std::endl;
    std::cout << d;
//    d = 42;
//    std::cout << " " << d << std::endl;
//    std::cout << e;
//    e = 42;
//    std::cout << " " << e << std::endl;
//    std::cout << g;
//    g = 42;
//    std::cout << " " << g << std::endl;
}
