#ifndef ENVIRONMENT_H
#define ENVIRONMENT_H

#include <map>

class Environment
{
public:
	Environment();
	~Environment();

private:
	std::map<short, short> field;
};

#endif
