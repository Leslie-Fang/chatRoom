#include <string>
#include <iostream>
#include "add.hpp"
namespace test{
	void output(std::string input){
		std::cout<<input<<std::endl;
	}
	int add(int a,int b){
		return a*2+b;
	}
}