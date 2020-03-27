#ifndef ADD_DELETE_ACTION_H
#define ADD_DELETE_ACTION_H
#include "Action.h"
#include "../Figures/CFigure.h"

class AddDeleteAction : public Action {
private:
	//CFigure* toBeDeleted;
public:
	AddDeleteAction (ApplicationManager *pApp);
	virtual void ReadActionParameters();
	virtual void Execute() ;
};

#endif