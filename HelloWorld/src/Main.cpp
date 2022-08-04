#include <iostream>

#define LOG(x) std::cout << x << std::endl

int main()
{
	int var = 8;
	int* ptr; //declare pointer
	ptr = &var; //get address of var by '&'
	*ptr = 10; //access the value, that ptr points to
	LOG(var);
	std::cin.get();
}