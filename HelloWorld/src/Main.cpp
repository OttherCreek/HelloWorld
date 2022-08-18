#include <iostream>
#include <string>

class Entity
{
public:
	virtual std::string getName() = 0; //pure virtual function that needs to be overwritten in the subclass (acts like an interface) 
	
};

class Player : public Entity
{
private:
	std::string m_Name;
public:
	Player(const std::string& name)
		: m_Name(name){}

	std::string getName() override	//override indicates that this method overrides a method in the base class
	{
		return m_Name;
	}
};

void PrintName(Entity* ent)
{
	std::cout << ent->getName() << std::endl;
}

int main()
{
	Entity* e = new Player("");	//class can only be instantiated if it implements the pure virtual function (in this case getName())
	PrintName(e);
	//output is "Entity"

	Player* p = new Player("Otti");
	PrintName(p);
	//expected output is "Otti" but it is only "Otti" when 'getName()' in the Entity-class is marked with the 'virtual' keyword and then overwritten in the derived child class

	std::cin.get();
}