#include "AddCircAction.h"
#include "..\Figures\CCircle.h"
#include "..\ApplicationManager.h"

#include "..\GUI\input.h"
#include "..\GUI\Output.h"

AddCircAction :: AddCircAction(ApplicationManager *pApp):Action(pApp){}

void AddCircAction :: ReadActionParameters(){
	Point P3;
	Output* pOut = pManager->GetOutput();
	Input* pIn = pManager->GetInput();

	pOut->PrintMessage("New Circle: Click at the center");
	pIn->GetPointClicked(P1.x, P1.y);
	pOut->PrintMessage("New Circle: Click at any point in the circumference");
	pIn->GetPointClicked(P3.x, P3.y);
	radius = sqrt(pow((P3.x-P1.x),2)+pow((P3.y-P1.y),2));
	CircGfxInfo.isFilled = false;	//default is not filled
	//get drawing, filling colors and pen width from the interface
	CircGfxInfo.DrawClr = pOut->getCrntDrawColor();
	CircGfxInfo.FillClr = pOut->getCrntFillColor();
	CircGfxInfo.BorderWdth = pOut->getCrntPenWidth();

	pOut->ClearStatusBar();
}

void AddCircAction::Execute() 
{
	
	ReadActionParameters();
	

	CCircle *R=new CCircle(P1,radius,CircGfxInfo);


	pManager->AddFigure(R);
}
