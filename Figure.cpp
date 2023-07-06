#include "Figure.h"

Figure::Figure(Geometry::FigureType FIG_TYPE, int size_x, int size_y)
{
	Set_size(size_x, size_y);

	switch (FIG_TYPE)
	{
	case Geometry::SLASH:
		makeSlash();
		break;
	case Geometry::R_SLASH:
		makeRSlash();
		break;
	case Geometry::TRIANGLE:
		makeTriangle();
		break;
	case Geometry::ISOSCELES_TRIIANGLE:
		makeISOSCELES_TRIIANGLE();
		break;
	case Geometry::RECTANGLE:
		makeRECTANGLE();
		break;
	case Geometry::R_I_RECTANGLE:
		makeRIRectangle();
		break;
	case Geometry::RHOMB:
		makeRHOMB();
		break;
	default:
		break;
	}
}

void Figure::Print_figure()
{
	std::cout << std::endl << std::endl << this->TypeFigure << std::endl << std::endl;

	for (auto item : this->picture)
	{
		std::cout << item;
	}
}

void Figure::Set_size(int size_x, int size_y)
{
	this->size_x = size_x;
	this->size_y = size_y;
}

void Figure::Print_size()
{
	std::cout << "size_x = " << this->size_x << "\tsize_y = " << this->size_y;
}

void Figure::makeSlash()
{
	this->TypeFigure = "Slash";
	picture.clear();
	std::string result;

	for (int i = 0; i < size_y; ++i) {
		result.clear();
		result += "\t";
		for (int j = 0; j < size_x; ++j) {
			if (i == j)
				result += "*";
			else
				result += " ";
		}

		result += "\n";
		picture.push_back(result);
	}

}

void Figure::makeTriangle()
{
	this->TypeFigure = "Triangle";

	picture.clear();

	std::string result;
	
	for (int i = 0; i < size_y; ++i){

		result.clear();
		result += "\t";

		for (int j = 0; j < i; ++j){
			result += "*";
		}

		result += "\n";
		picture.push_back(result);
	}
}

void Figure::makeRSlash()
{
	this->TypeFigure = "RSlash";
	picture.clear();
	std::string result;

	for (int i = size_y; i > 0 ; --i) {
		result.clear();
		result += "\t";
		for (int j = 0; j < size_x; ++j) {
			if (i == j)
				result += "*";
			else
				result += " ";
		}

		result += "\n";
		picture.push_back(result);
	}
}

void Figure::makeISOSCELES_TRIIANGLE(bool isComposite)
{
	this->TypeFigure = "ISOSCELES_TRIIANGLE";

	if(!isComposite)
		picture.clear();

	std::string result;
	int a = 0;

	for (int i = size_y; i > 0 ; --i) {
		result.clear();
		result += "\t";
		for (int j = 0; j < i; ++j) {
			result += " ";
		}
		for (int i = 0; i <= a * 2; ++i) {
			result += "*";
		}
		++a;
		result += "\n";
		picture.push_back(result);
	}
}

void Figure::makeRECTANGLE()
{
	this->TypeFigure = "RECTANGLE";

	picture.clear();

	std::string result;

	for (int i = 0; i < size_y; ++i) {

		result.clear();
		result += "\t";

		for (int j = 0; j < size_x; ++j) {
			result += "*";
		}

		result += "\n";
		picture.push_back(result);
	}
}

void Figure::makeRHOMB()
{
	this->TypeFigure = "RHOMB";

	makeISOSCELES_TRIIANGLE(true);
	makeRIRectangle(true);

}

void Figure::makeRIRectangle(bool isComposite)
{
	this->TypeFigure = "R_I_Rectangle";
	if(!isComposite)
		picture.clear();

	std::string result;
	int a = size_y;
	for (int i = 0; i <= size_y; ++i) {
		result.clear();
		result += "\t";
		for (int j = 0; j < i; ++j) {
			result += " ";
		}
		for (int i = 0; i <= a * 2; ++i) {
			result += "*";
		}
		--a;
		result += "\n";
		picture.push_back(result);
	}
}
