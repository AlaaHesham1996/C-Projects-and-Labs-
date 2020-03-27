#ifndef ADD_Circ_ACTION_H
#define ADD_Circ_ACTION_H

#include "Action.h"

class AddCircAction: public Action
{
private:
	Point P1; //Rectangle Corners
	int radius;
	GfxInfo CircGfxInfo;
public:
	AddCircAction(ApplicationManager *pApp);

	//Reads rectangle parameters
	virtual void ReadActionParameters();
	
	//Add rectangle to the ApplicationManager
	virtual void Execute() ;
	
};


#endif