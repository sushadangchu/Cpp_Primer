#include <iostream>

int main(){
	int v1 =0,v2=0,tmp=0;
	std::cout<<"enter two number:"<<std::endl;
	std::cin>>v1>>v2;
	if(v1 > v2){
		tmp = v1;
		v1 = v2;
		v2 = tmp;
	}
	while(v1<=v2){
		std::cout<<v1<<" ";
		++v1;
	}
	return 0;
}
