#ifndef ADD_Move_ACTION_H
#define ADD_Move_ACTION_H
#include "Action.h"
#include "../Figures/CFigure.h"


class AddMoveAction : public Action {
private:
	Point cliked;
	
	
public:
	AddMoveAction(ApplicationManager *pApp);
	virtual void ReadActionParameters();
	virtual void Execute() ;
};


#endif