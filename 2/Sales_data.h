//
// Created by ldl on 2020/5/2.
//

#ifndef C___PRIMER_SALES_DATA_H
#define C___PRIMER_SALES_DATA_H
#include <string>
struct Sales_data {
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};
#endif //C___PRIMER_SALES_DATA_H
