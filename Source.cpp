#pragma once
#include "Figure.h"



int main()
{
	std::setlocale(LC_ALL, "ru");
	std::cout << "Введите код фигуры (от 0 до 6):\n0 - черта\n1 - обратная черта\n2 - треугольник";
	std::cout << "\n3 - Равнобедренный треугольник\n4 - перевернутый равнобедренный треугольник\n5 - прямоугольник\n6 - ромб\n";
	int a = 0; 
	std::cin >> a;

	Geometry::FigureType ft;
	switch (a)
	{
	case 0:
		ft = Geometry::SLASH;
		break;
	case 1:
		ft = Geometry::R_SLASH;
		break;
	case 2:
		ft = Geometry::TRIANGLE;
		break;
	case 3:
		ft = Geometry::ISOSCELES_TRIIANGLE;
		break;
	case 4:
		ft = Geometry::R_I_RECTANGLE;
		break;
	case 5:
		ft = Geometry::RECTANGLE;
		break;
	case 6:
		ft = Geometry::RHOMB;
		break;
	default:
		std::cout << "Ошибка ввода";
		break;
	}
	
	

	Figure fg(ft,8,8); //Создаем фигуру нужной геометрии

	fg.Print_size();
	fg.Print_figure();



	return 0;
}