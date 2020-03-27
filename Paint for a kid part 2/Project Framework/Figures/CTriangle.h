#ifndef CTRI_H
#define CTRI_H

#include "CFigure.h"

class CTriangle : public CFigure
{
private:
	Point Corner1;	
	Point Corner2;
	Point Corner3;
public:
	CTriangle(Point ,Point , Point, GfxInfo FigureGfxInfo );
	virtual void Draw(Output* pOut) const;
	virtual bool Enclose(double , double) const;
	virtual string printInfo() ;
	virtual void MoveMe(Point whereTogo);
	virtual CTriangle* copy(CFigure*) const;
};

#endif


