#ifndef ADD_Select_ACTION_H
#define ADD_Select_ACTION_H

#include "Action.h"
#include "../Figures/CFigure.h"

class AddSelectAction : public Action {
private:
	Point cliked;
	

public:
	AddSelectAction(ApplicationManager *pApp);
	virtual void ReadActionParameters();
	virtual void Execute() ;

};

#endif