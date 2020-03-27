#include "AddSelectAction.h"
#include "..\ApplicationManager.h"

#include "..\GUI\input.h"
#include "..\GUI\Output.h"

AddSelectAction::AddSelectAction(ApplicationManager * pApp):Action(pApp)
{}

void AddSelectAction ::ReadActionParameters(){

	Output* pOut = pManager->GetOutput();
	Input* pIn = pManager->GetInput();
	pOut->PrintMessage(" Click inside the figure" );
	pIn->GetPointClicked(cliked.x,cliked.y);
}

void AddSelectAction ::Execute(){
	ReadActionParameters();
	Output* pOut = pManager->GetOutput();
	pManager->setSelectedOne(pManager->GetFigure(cliked.x,cliked.y));
	if(pManager->getSelectedOne() == NULL ){
		pOut->PrintMessage(" You must click inside a figur");
	}else{
		if(pManager->getSelectedOne()->IsSelected()){
			pOut->PrintMessage("It is unselected,dude");
			pManager->getSelectedOne()->SetSelected(false);
			pManager->setSelectedOne(NULL);
			
		}else{
			string message = pManager->getSelectedOne()->printInfo();
			pManager->getSelectedOne()->SetSelected(true);
			pOut->PrintMessage(message);
		}
	}

}

