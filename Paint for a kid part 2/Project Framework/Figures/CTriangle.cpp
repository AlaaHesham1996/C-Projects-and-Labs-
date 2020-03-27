#include "CTriangle.h"

CTriangle::CTriangle(Point P1, Point P2,Point P3, GfxInfo FigureGfxInfo):CFigure(FigureGfxInfo)
{
	Corner1 = P1;
	Corner2 = P2;
	Corner3 = P3;
}
	

void CTriangle::Draw(Output* pOut) const
{
	//Call Output::DrawRect to draw a rectangle on the screen	
	pOut->DrawTri(Corner1,Corner2,Corner3,FigGfxInfo, Selected);
}
bool CTriangle:: Enclose(double x, double y) const{
	double triangleArea =abs( (Corner1.x*(Corner2.y-Corner3.y)+Corner2.x*(Corner3.y-Corner1.y)+Corner3.x*(Corner1.y-Corner2.y))/2.0);
	double area1 =abs((x*(Corner2.y-Corner3.y)+Corner2.x*(Corner3.y-y)+Corner3.x*(y-Corner2.y))/2.0);
	double area2=abs((Corner1.x*(y-Corner3.y)+x*(Corner3.y-Corner1.y)+Corner3.x*(Corner1.y-y))/2.0);
	double area3=abs( (Corner1.x*(Corner2.y-y)+Corner2.x*(y-Corner1.y)+x*(Corner1.y-Corner2.y))/2.0);
	if(triangleArea==(area1 +area2+area3)){
		return true;
	}
	return false;
}

string CTriangle:: printInfo() {
	string Info="";
	return Info;
}

void CTriangle::MoveMe(Point whereTogo){
	Point diff1,diff2;
	diff1.x= Corner2.x -Corner1.x;
	diff1.y= Corner2.y -Corner1.y;
	diff2.x= Corner3.x -Corner1.x;
	diff2.y= Corner3.y -Corner1.y;
	Corner1 = whereTogo;
	Corner2.x = Corner1.x+diff1.x;
	Corner2.y = Corner1.y+diff1.y;
	Corner3.x = Corner1.x+diff2.x;
	Corner3.y = Corner1.y+diff2.y;

}


CTriangle* CTriangle::copy(CFigure* fig) const{
	CTriangle* arg=( CTriangle*) fig;
	CTriangle* temp= new CTriangle(arg->Corner1,arg->Corner2,arg->Corner3,arg->FigGfxInfo);
	return temp;

}
