#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item currentItem, item;
	if(std::cin>>currentItem){
		int count = 1;
		while(std::cin>>item){
			if(currentItem.isbn() == item.isbn()){
				count++;
			}else{
				std::cout<<currentItem.isbn()<<"have "
					<<count<<" count!"<<std::endl;
				count = 1;
				currentItem = item;
			}
		}
		 std::cout<<currentItem.isbn()<<"have "
                 	<<count<<" count!"<<std::endl;
	}
	return 0;
}
