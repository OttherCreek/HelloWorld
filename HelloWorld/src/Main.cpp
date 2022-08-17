#include <iostream>

class Log
{
public:		//public variables
	const int LogLevelError = 0;
	const int LogLevelWarning = 1;
	const int LogLevelInfo = 2;
private:
	int m_LogLevel=LogLevelInfo;
public:		//public functions
	void SetLevel(int level)
	{
		m_LogLevel = level;
	}

	void Error(const char* message)
	{
		if(m_LogLevel>=LogLevelError)
			std::cout << "[ERROR]: " << message << std::endl;
	}
	
	void Warn(const char* message)
	{
		if(m_LogLevel>=LogLevelWarning)
			std::cout << "[WARNING]: "<< message << std::endl;
	}

	void Info(const char* message)
	{
		if(m_LogLevel>=LogLevelInfo)
			std::cout << "[INFO]: " << message << std::endl;
	}
};

struct Entity
{
	static int x, y;

	static void Print()
	{
		std::cout << x << ", " << y << std::endl;
	}
};

int Entity::x;
int Entity::y;

int main()
{
	Log log;
	log.SetLevel(log.LogLevelInfo);
	log.Warn("Hello");
	log.Info("Hello");
	log.Error("Hello");

	Entity e;
	e.x = 2;
	e.y = 3;

	Entity e1;
	e1.x = 5;
	e1.y = 6;

	Entity::Print();
	Entity::Print();

	std::cin.get();
}