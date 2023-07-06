#pragma once
#include <iostream>
#include <list>
#include <string>

class Geometry
{
public:
	Geometry();

	std::string GetType();
	void PrintType();
	
	enum FigureType
	{
		SLASH,
		R_SLASH,
		TRIANGLE,
		ISOSCELES_TRIIANGLE,
		R_I_RECTANGLE,
		RECTANGLE,
		RHOMB
	};

protected:
	std::string TypeFigure;

private:

};

