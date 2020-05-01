//
// Created by ldl on 2020/5/2.
//
#include <iostream>
#include "Sales_data.h"

int main() {
    Sales_data book1, book2;
    double price = 0;
    std::cin >> book1.bookNo >> book1.units_sold >> price;
    book1.revenue = price * book1.units_sold;
    std::cin >> book2.bookNo >> book2.units_sold >> price;
    book2.revenue = price * book2.units_sold;
    std::cout << book1.bookNo << " " << book1.units_sold + book2.units_sold << " " << book1.revenue + book2.revenue << std::endl;
    return 0;
}