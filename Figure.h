#pragma once
#include "Geometry.h"
class Figure : public Geometry
{
public:

	Figure(Geometry::FigureType FIG_TYPE, int size_x, int size_y);
	
	void Print_figure();
	void Print_size();

	/*
	ISOSCELES_TRIIANGLE,
		RECTANGLE,
		CIRCULE,
		RHOMB
		*/
private:

	int size_x = 8, size_y = 8;
	std::list<std::string> picture;

	void makeSlash();
	void makeTriangle();
	void makeRSlash();
	void makeISOSCELES_TRIIANGLE(bool isComposite = false);
	void makeRECTANGLE();
	void makeRHOMB();
	void makeRIRectangle(bool isComposite = false);



	void Set_size(int size_x, int size_y);
};

