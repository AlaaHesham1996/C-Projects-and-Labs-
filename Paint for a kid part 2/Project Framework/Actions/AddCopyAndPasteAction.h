#ifndef ADD_COPY_AND_PASTE_ACTION_H
#define ADD_COPY_AND_PASTE_ACTION_H
#include "Action.h"
#include "../Figures/CFigure.h"


class AddCopyAndPasteAction : public Action {
private:
	Point cliked;
	CFigure* origion;
	CFigure* aCopy;

	
public:
	AddCopyAndPasteAction(ApplicationManager *pApp);
	virtual void ReadActionParameters();
	virtual void Execute() ;
};


#endif