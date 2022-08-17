#include <iostream>

#define LOG(x) std::cout << x << std::endl

void Increment(int& value)
{
	value++;
}

int main()
{
	int a = 5;
	int* ref = &a;	//pointer always holds a memory address
	*ref = 2;		//dereferencing the pointer (access the value that is written at the specific address)	

	LOG(a);

	Increment(a);

	LOG(a);

	std::cin.get();
}