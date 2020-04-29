//
// Created by ldl on 2020/4/30.
//
#include <iostream>

int main()
{
    int i = 0, *p = nullptr;
    //更改指针的值
    p = &i;
    //更改所指对象的值
    *p = 100;
    std::cout << i;
}

