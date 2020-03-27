#ifndef ADD_Change_Color_ACTION_H
#define ADD_Change_Color_ACTION_H

#include "Action.h"
#include <iostream>
using namespace std;
class AddChangeColorAction :public  Action
{
private:
	Point d,f;
	GfxInfo CircGfxInfo ;
public:
	AddChangeColorAction(ApplicationManager *pApp);
	virtual void ReadActionParameters();
	virtual void Execute() ;
	

};
#endif