#include "AddChangeColorAction.h"
#include "..\ApplicationManager.h"
#include "..\Figures\CFigure.h"

#include "..\GUI\input.h"
#include "..\GUI\Output.h"
AddChangeColorAction :: AddChangeColorAction(ApplicationManager *pApp):Action(pApp){}

void AddChangeColorAction ::ReadActionParameters(){  
		string ballet= "images\\MenuItems\\ballet.jpg";
		string trick="images\\MenuItems\\Untitled.jpg";
		/*string width1="images\\MenuItems\\width1.jpg";
		string width2="images\\MenuItems\\width2.jpg";
		string width3="images\\MenuItems\\width3.jpg";
		string width4="images\\MenuItems\\width4.jpg";*/
		Output* pOut = pManager->GetOutput();
	    Input* pIn = pManager->GetInput();
		pOut->getpWind()->DrawImage(ballet,0,55,300,300);
		/*pOut->getpWind()->DrawImage(width1,0,330,15,40);
		pOut->getpWind()->DrawImage(width2,20,330,15,40);
		pOut->getpWind()->DrawImage(width3,40,330,15,40);
		pOut->getpWind()->DrawImage(width4,60,330,15,40);*/
		pOut->PrintMessage("click on the color you want to be the drawing color");
		pIn->GetPointClicked(d.x,d.y);
	    pOut->PrintMessage("click on the color you want to be the filling color");
		pIn->GetPointClicked(f.x,f.y);
		 
		if (pManager->getNumOfFigures()!=0){
				if(pManager->getSelectedOne()==NULL){
					UI.DrawColor=pOut->getpWind()->GetColor(d.x,d.y);
					UI.FillColor=pOut->getpWind()->GetColor(f.x,f.y);
				}else{
					pManager->getSelectedOne()->ChngDrawClr(pOut->getpWind()->GetColor(d.x,d.y));
					pManager->getSelectedOne()->ChngFillClr(pOut->getpWind()->GetColor(f.x,f.y));
				}
		
		}else{
			UI.DrawColor=pOut->getpWind()->GetColor(d.x,d.y);
			UI.FillColor=pOut->getpWind()->GetColor(f.x,f.y);

	}

	pOut->getpWind()->DrawImage(trick,0,55,300,300);
}

void AddChangeColorAction::Execute() {
	ReadActionParameters();
	
}

