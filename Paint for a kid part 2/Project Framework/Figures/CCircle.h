#ifndef CCIRC_H
#define CCIRC_H

#include "CFigure.h"

class CCircle : public CFigure
{
private:
	Point center;	
	int radius;
public:
	CCircle(Point , int, GfxInfo FigureGfxInfo );
	virtual void Draw(Output* pOut) const;
	
	virtual bool Enclose(double x ,double y) const;
	virtual string printInfo() ;
	virtual void MoveMe(Point whereTogo);
	virtual CCircle* copy(CFigure*) const;
};

#endif