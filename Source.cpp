#pragma once
#include "Figure.h"



int main()
{
	std::setlocale(LC_ALL, "ru");
	std::cout << "������� ��� ������ (�� 0 �� 6):\n0 - �����\n1 - �������� �����\n2 - �����������";
	std::cout << "\n3 - �������������� �����������\n4 - ������������ �������������� �����������\n5 - �������������\n6 - ����\n";
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
		std::cout << "������ �����";
		break;
	}
	
	

	Figure fg(ft,8,8); //������� ������ ������ ���������

	fg.Print_size();
	fg.Print_figure();



	return 0;
}