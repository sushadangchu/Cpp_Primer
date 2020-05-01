//
// Created by ldl on 2020/5/2.
//
#include <iostream>
#include "Sales_data.h"

int main() {
    Sales_data book;
    double price = 0;
    std::cin >> book.bookNo >> book.units_sold >> price;
    book.revenue = book.units_sold * price;
    std::cout << book.bookNo << " " << book.units_sold << " " << book.revenue << std::endl;
    return 0;
}