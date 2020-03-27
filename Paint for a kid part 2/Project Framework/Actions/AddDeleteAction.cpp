#include "AddDeleteAction.h"
#include "..\ApplicationManager.h"

#include "..\GUI\input.h"
#include "..\GUI\Output.h"

AddDeleteAction::AddDeleteAction(ApplicationManager * pApp):Action(pApp)
{}

void AddDeleteAction::ReadActionParameters(){
}


void AddDeleteAction::Execute(){
	ReadActionParameters();
	pManager->getSelectedOne()->SetSelected(false);
	pManager->getSelectedOne()->ChngDrawClr(UI.BkGrndColor);
	pManager->UpdateInterface();
	pManager->setToNUll(pManager->getSelectedOne());
	pManager->noNUll();
}