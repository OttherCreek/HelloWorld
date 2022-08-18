#include <iostream>
#include <string>

class Entity {
private:		//only Entity class (or friends) can access those variables; derived classes don't have access as well
	int x, y;
	void print() {}
protected:
	int xp, yp;	//Entity class and all subclasses along hierarchy can access those variables
public:
	Entity() {
		x = 0;
		print();
	}
};

class Player :public Entity {
public:
	Player() {
		xp = 2;
	}
};

int main()
{
	Entity e;
	std::cin.get();
}