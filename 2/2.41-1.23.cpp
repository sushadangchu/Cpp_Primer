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
    Sales_data book1, book2;
    double price = 0;
    std::cin >> book1.bookNo >> book1.units_sold >> price;
    book1.revenue = price * book1.units_sold;
    unsigned count = 1;
    while(std::cin >> book2.bookNo) {
        std::cin >> book2.units_sold >> price;
        book2.revenue = price * book2.units_sold;
        if(book1.bookNo == book2.bookNo) {
            ++count;
        } else {
            std::cout << book1.bookNo << " " << count << std::endl;
            count = 1;
            book1 = book2;
        }
    }
    std::cout << book2.bookNo << " " << count << std::endl;
    return 0;
}