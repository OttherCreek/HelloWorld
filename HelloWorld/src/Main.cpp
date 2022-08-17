#include <iostream>

#define LOG(x) std::cout << x << std::endl

class Player		//class: all member variables are private by default
{
	int x, y;
	int speed;

public:
	void Move(int xa,int ya)
	{
		x += xa * speed;
		y += ya * speed;
	}
};

struct Vec2			//struct: all member variables are public by default
{
	int x = NULL;
	int y = NULL;

	Vec2(int x, int y)
	{
		this->x = x;
		this->y = y;
	}

	void Add(const Vec2& other)
	{
		x += other.x;
		y += other.y;
	}

	void ToString()
	{
		std::cout << "x = " << x << " | y = " << y << std::endl;
	}
};

int main()
{
	Player player;
	player.Move(1,-1);

	Vec2 vector = Vec2(2,5);
	Vec2 vectorOther = Vec2(3, 1);

	vector.Add(vectorOther);

	vector.ToString();


	std::cin.get();
}