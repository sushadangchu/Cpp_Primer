//
// Created by ldl on 2020/5/2.
//
#include <iostream>
#include "Sales_data.h"

int main()
{
    Sales_data total;
    double price = 0;

    if (std::cin >> total.bookNo) {
        std::cin >> total.units_sold >> price;
        total.revenue = price * total.units_sold;
        Sales_data trans;
        while (std::cin >> trans.bookNo) {
            std::cin >> trans.units_sold >> price;
            trans.revenue = price * trans.units_sold;
            if (total.bookNo == trans.bookNo) {
                total.units_sold += trans.units_sold;
                total.revenue += trans.revenue;
            }
            else {
                std::cout << total.bookNo << " " << total.units_sold << " " << total.revenue << std::endl;
                total = trans;
            }
        }
        std::cout << total.bookNo << " " << total.units_sold << " " << total.revenue << std::endl;
    } else {
        std::cerr << "No data?!" << std::endl;
        return -1;
    }

    return 0;
}