#include "AddMoveAction.h"
#include "..\ApplicationManager.h"

#include "..\GUI\input.h"
#include "..\GUI\Output.h"

AddMoveAction::AddMoveAction(ApplicationManager * pApp):Action(pApp)
{}


void AddMoveAction::ReadActionParameters(){
	Output* pOut = pManager->GetOutput();
	Input* pIn = pManager->GetInput();
	pOut->PrintMessage("choose where to move the figure");
	pIn->GetPointClicked(cliked.x,cliked.y);

}

void AddMoveAction::Execute(){
	Output* pOut = pManager->GetOutput();
	ReadActionParameters();
	if (pManager->getSelectedOne()==NULL){
		pOut->PrintMessage("You must select a figure");
	}else{
		pManager->getSelectedOne()->ChngDrawClr(UI.BkGrndColor);
		pManager->getSelectedOne()->SetSelected(false);
		pManager->UpdateInterface();
		pManager->getSelectedOne()->MoveMe(cliked);
		pManager->getSelectedOne()->ChngDrawClr(UI.DrawColor);
		pManager->getSelectedOne()->SetSelected(true);
		
	}
	
	

	
}


