#include <cstdlib>
#include <fstream>
#include <environment.h>

using namespace std;

Environment::Environment()
{
	ifstream init;
	short i = 0;
	
	init.open("C:/Users/Romain/Documents/Robotique/simulateur/Debug/resources/field.txt");
	if (!init)
		exit(EXIT_FAILURE);

	while (!init.eof())
	{
		if (init.get() != '\n')
		{
			init >> field[i];

			i++;
			init.seekg(0, ios::right);
		}
	}

	init.close();
}

Environment::~Environment()
{

}
