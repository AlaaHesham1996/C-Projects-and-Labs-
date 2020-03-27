#include "ApplicationManager.h"
#include "Actions\AddRectAction.h"
#include "Actions\AddCircAction.h"
#include "Actions\AddTriAction.h"
#include "Actions\AddSelectAction.h"
#include "Actions\AddMoveAction.h"
#include "Actions\AddChangeColorAction.h"
#include "Actions\AddCopyAndPasteAction.h"
#include "Actions\AddDeleteAction.h"



//Constructor
ApplicationManager::ApplicationManager()
{
	//Create Input and output
	pOut = new Output;
	pIn = pOut->CreateInput();
	
	FigCount = 0;
		
	//Create an array of figure pointers and set them to NULL		
	for(int i=0; i<MaxFigCount; i++)
		FigList[i] = NULL;	
}

//==================================================================================//
//								Actions Related Functions							//
//==================================================================================//
ActionType ApplicationManager::GetUserAction() const
{
	//Ask the input to get the action from the user.
	return pIn->GetUserAction();		
}
////////////////////////////////////////////////////////////////////////////////////
//Creates an action and executes it
void ApplicationManager::ExecuteAction(ActionType ActType) 
{
	Action* pAct = NULL;
	
	//According to Action Type, create the corresponding action object
	switch (ActType)
	{
		//draw a rectangle
		case DRAW_RECT:
			pAct = new AddRectAction(this);
			//pOut->PrintMessage("You Want to draw a rectangle");
			break;
		// draw a circle
		case DRAW_CIRC:
			pAct = new AddCircAction(this);
			//pOut->PrintMessage("You Want to draw a circle");
			break;
		//draw a triangle
		case DRAW_TRI:
			pAct = new AddTriAction(this);
			//pOut->PrintMessage("You Want to draw a triangle");
			break;
		case CHNG_DRAW_CLR:
			pAct = new AddChangeColorAction(this);
			//pOut->PrintMessage("You Want to change the color of drawing");
			break;
		case CHNG_FILL_CLR:
			pOut->PrintMessage("You Want to change the filling color");
			break;
		case CHNG_BK_CLR:
			pOut->PrintMessage("You Want to change the background color");
			break;
		case DEL:
			pAct = new AddDeleteAction(this);
			//pOut->PrintMessage("You Want to delete an item. Watch Out!");
			break;
		case MOVE:
			pAct = new AddMoveAction(this);
			break;
		case RESIZE :
			pAct = new AddCopyAndPasteAction(this);
			//pOut->PrintMessage("You Want to resize an item");
			break;
		case ROTATE:
			pOut->PrintMessage("You Want to rotate an item");
			break;
		case SEND_BACK :
			pOut->PrintMessage("You Want to unselect an item");
			break;
		case BRNG_FRNT:
			pAct= new AddSelectAction(this);
			//pOut->PrintMessage("You Want to select an item");
			break;
		case SAVE:
			pOut->PrintMessage("You Want to save an item");
			break;
		case LOAD:
			pOut->PrintMessage("You Want to load an item");
			break;
		case TO_PLAY:
			pOut->CreatePlayToolBar();
			break;
		case TO_DRAW:
			pOut->CreateDrawToolBar();
			break;
		case PICK_AND_Hide:
			pOut->PrintMessage("You want to pick & hide.");
			break;
		case DRAW:
			pOut->PrintMessage("You want to draw.");
			break;


		case DRAW_LINE:
			///create AddLineAction here
			break;
		

		case EXIT:
			///create ExitAction here
			
			break;
		
		case STATUS:	//a click on the status bar ==> no action
			return;
	}
	
	//Execute the created action
	if(pAct != NULL)
	{
		pAct->Execute();//Execute
		delete pAct;	//Action is not needed any more ==> delete it
		pAct = NULL;
	}
}
//==================================================================================//
//						Figures Management Functions								//
//==================================================================================//

//Add a figure to the list of figures
void ApplicationManager::AddFigure(CFigure* pFig)
{
	if(FigCount < MaxFigCount )
		FigList[FigCount++] = pFig;	
}
int ApplicationManager::getNumOfFigures(){

	return FigCount;
}

////////////////////////////////////////////////////////////////////////////////////
CFigure *ApplicationManager::GetFigure(int x, int y) const
{
	//If a figure is found return a pointer to it.
	//if this point (x,y) does not belong to any figure return NULL
	for (int i = 0; i < FigCount; i++){
		if(FigList[i]->Enclose(x,y)){
			return FigList[i];
		}
	}


	///Add your code here to search for a figure given a point x,y	

	return NULL;
}

CFigure* ApplicationManager::getLastAdded() {

	return FigList[ApplicationManager::getNumOfFigures()-1];
}


void ApplicationManager::setSelectedOne(CFigure* SelectedOne){
	this->SelectedOne= SelectedOne;
}

CFigure* ApplicationManager::getSelectedOne(){
	return SelectedOne;
}




/*void ApplicationManager::DeleteFigure(int x, int y) const{
	for (int i = 0; i < FigCount; i++){
		if(FigList[i]->Enclose(x,y)){
			delete FigList[i]; 
		}
	}

}*/

void ApplicationManager::noNUll(){
	for(int i=0; i <FigCount;i++){
		if(FigList[i]==NULL){
			Cover(i);
			break;
		}
	}

}


void ApplicationManager::Cover(int index){

	for(int i=index;i<FigCount;i++){
		FigList[i]=FigList[i+1];
	}
	FigList[FigCount-1]= NULL;
	FigCount--;
}


void ApplicationManager::setToNUll(CFigure* theOne){
	for(int i =0;i<FigCount;i++){
		if(FigList[i]=theOne){
			delete FigList[i];
			FigList[i]= NULL;
		}
	}
}


//==================================================================================//
//							Interface Management Functions							//
//==================================================================================//

//Draw all figures on the user interface
void ApplicationManager::UpdateInterface() const
{	
	for(int i=0; i<FigCount; i++){
		if(FigList[i]!=NULL)
		FigList[i]->Draw(pOut);	
	}//Call Draw function (virtual member fn)
}
////////////////////////////////////////////////////////////////////////////////////
//Return a pointer to the input
Input *ApplicationManager::GetInput() const
{	return pIn; }
//Return a pointer to the output
Output *ApplicationManager::GetOutput() const
{	return pOut; }
////////////////////////////////////////////////////////////////////////////////////
//Destructor
ApplicationManager::~ApplicationManager()
{
	for(int i=0; i<FigCount; i++)
		delete FigList[i];
	delete pIn;
	delete pOut;
	
}
