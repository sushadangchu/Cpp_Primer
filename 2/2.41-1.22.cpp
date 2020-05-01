//
// Created by ldl on 2020/5/1.
//
#include <iostream>
#include <string>

struct Sales_data {
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

int main() {
    Sales_data book;
    unsigned totalSold = 0;
    double totalRevenue = 0, price = 0;
    while(std::cin >> book.bookNo) {
        std::cin >> book.units_sold >> price;
        totalSold += book.units_sold;
        book.revenue = price * book.units_sold;
        totalRevenue += book.revenue;
    }
    std::cout << book.bookNo << " " << totalSold << " " << totalRevenue << std::endl;
    return 0;
}