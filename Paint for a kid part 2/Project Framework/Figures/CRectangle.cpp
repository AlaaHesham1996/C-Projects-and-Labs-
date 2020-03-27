#include "CRectangle.h"

CRectangle::CRectangle(Point P1, Point P2, GfxInfo FigureGfxInfo):CFigure(FigureGfxInfo)
{
	Corner1 = P1;
	Corner2 = P2;
}
	

void CRectangle::Draw(Output* pOut) const
{
	//Call Output::DrawRect to draw a rectangle on the screen	
	pOut->DrawRect(Corner1, Corner2, FigGfxInfo, Selected);
}
bool CRectangle:: Enclose(double x , double y) const{
	Point Corner3 , Corner4;
	Corner3.x=Corner2.x;
	Corner3.y=Corner1.y;
	Corner4.x=Corner1.x;
	Corner4.y=Corner2.y;
	if(Corner1.x>x && Corner3.x<x && Corner1.y<y&&Corner4.y >y){
		return true;
	}else if(Corner1.x<x && Corner3.x>x && Corner1.y>y&&Corner4.y <y){
		return true;
	}
	
	return false;
}

string CRectangle:: printInfo() {
	string Info;
	return Info;
}

void CRectangle::MoveMe(Point whereTogo){
	Point second;
	second.x= Corner1.x-Corner2.x;
	second.y= Corner1.y-Corner2.y;
	Corner1 = whereTogo;
	Corner2.x= whereTogo.x+second.x;
	Corner2.y= whereTogo.y+second.y;
}


CRectangle* CRectangle::copy(CFigure* fig) const{
	CRectangle* arg= (CRectangle*) fig;
	CRectangle* temp= new CRectangle(arg->Corner1,arg->Corner2,arg->FigGfxInfo);
	return temp;

}


