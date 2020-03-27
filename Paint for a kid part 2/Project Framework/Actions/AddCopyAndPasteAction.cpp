#include "AddCopyAndPasteAction.h"
#include "..\ApplicationManager.h"

#include "..\GUI\input.h"
#include "..\GUI\Output.h"
#include <iostream>

AddCopyAndPasteAction::AddCopyAndPasteAction(ApplicationManager * pApp):Action(pApp)
{}

void AddCopyAndPasteAction::ReadActionParameters(){
	Output* pOut = pManager->GetOutput();
	Input* pIn = pManager->GetInput();
	pOut->PrintMessage("choose where to paste the figure");
	pIn->GetPointClicked(cliked.x,cliked.y);
	origion=pManager->getSelectedOne();
}

void AddCopyAndPasteAction::Execute(){
	Output* pOut = pManager->GetOutput();
	ReadActionParameters();
	if (origion==NULL){
		pOut->PrintMessage("You must select a figure");
	}else{
		/**aCopy =*origion;
		//cout<<aCopy<< endl;
		//cout<<origion<< endl;
		pManager->AddFigure(aCopy);
		aCopy->ChngDrawClr(UI.BkGrndColor);
		aCopy->SetSelected(false);
		pManager->UpdateInterface();
		aCopy->MoveMe(cliked);
		aCopy->ChngDrawClr(UI.DrawColor);
		aCopy->SetSelected(true);*/
		aCopy=origion->copy(origion);
		pManager->AddFigure(aCopy);
		aCopy->ChngDrawClr(UI.BkGrndColor);
		aCopy->SetSelected(false);
		pManager->UpdateInterface();
		aCopy->MoveMe(cliked);
		aCopy->ChngDrawClr(UI.DrawColor);
		aCopy->SetSelected(true);
		
	}
}