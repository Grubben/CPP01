#pragma once
#include <string>

// typedef void (Harl::*infunc)(void);

class Harl
{
private:
	void					debug(void);
	void					info(void);
	void					warning(void);
	void					error(void);
	void	(*funcs[4])(void);//	funcs[4];
	// infunc	funcs[4];


public:
	Harl(void);
	~Harl();

	void	complain(std::string level);
};
