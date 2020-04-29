#include <iostream>

int main() {
    int i = 100, sum = 0;
    for (int i = 0; i != 10; ++i) {
        sum += i;
    }
    int *p;
    p =nullptr;
    std::cout << "Hello, World! " << i << sum << std::endl;
    return 0;
}
