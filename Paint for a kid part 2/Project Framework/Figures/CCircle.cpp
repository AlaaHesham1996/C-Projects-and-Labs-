#include "CCircle.h"
#include <string>

CCircle::CCircle(Point P1 , int P2, GfxInfo FigureGfxInfo ):CFigure(FigureGfxInfo){
	center =P1;
	radius = P2;
}

void CCircle::Draw(Output* pOut ) const{
	pOut->DrawCirc(center,radius,FigGfxInfo, Selected);
}


bool CCircle::Enclose(double x, double y) const{
	 if(radius>= (sqrt(pow((x-center.x),2)+pow((y-center.y),2)))){
		 return true;
	 }
	 return false;

}

string CCircle :: printInfo() {
	string Info="";
	int id = ID;
	double xCord= center.x;
	double yCord=center.y;
	double rad=radius;
	
	Info+="figure Id is ";
	Info+= id;
	Info+= "center cordniates is: x is ";
	Info+=xCord;
	Info+= " y is ";
	Info+= yCord;
	Info+=" radius is ";
	Info+=rad;
	return Info;

}


void CCircle::MoveMe(Point whereTogo){
	center = whereTogo;
}


CCircle* CCircle::copy(CFigure* fig) const{
	CCircle* arg= (CCircle*) fig;
	CCircle* temp = new CCircle(arg->center,arg->radius,arg->FigGfxInfo);
	return temp;
}




