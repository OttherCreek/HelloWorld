#include <iostream>
#include <string>

class Entity;
void printEntity(const Entity&);

class Entity {
public:
	int x, y;

	Entity(int x, int y) {
		this->x = x;
		this->y = y;

		Entity& e = *this;

		printEntity(*this);
	}

	int getX() const {
		const Entity& e = *this;
	}
};

void printEntity(const Entity& e) {
	std::cout << e.x << ", " << e.y << std::endl;
}

int main()
{
	Entity e(2, 3);

	std::cin.get();
}