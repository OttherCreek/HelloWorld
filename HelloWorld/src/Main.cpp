#include <iostream>
#include <string>

class Printable
{
public:
	virtual std::string getClassName() = 0;
};

class Entity : public Printable
{
public:
	virtual std::string getName()	//virtual indicates that this method can be overriden in a derived child class
	{
		return "Entity";
	}
	std::string getClassName() override { return "Entity"; }
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
	std::string getClassName() override { return "Player"; }
};

void print(Printable* obj)
{
	std::cout << obj->getClassName() << std::endl;
}

void PrintName(Entity* ent)
{
	std::cout << ent->getName() << std::endl;
}

int main()
{
	Entity* e = new Entity();
	PrintName(e);
	//output is "Entity"

	Player* p = new Player("Otti");
	PrintName(p);
	//expected output is "Otti" but it is only "Otti" when 'getName()' in the Entity-class is marked with the 'virtual' keyword and then overriden in the derived child class

	print(e);
	print(p);

	std::cin.get();
}