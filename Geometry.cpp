#pragma once
#include "Geometry.h"

Geometry::Geometry()
{
}

std::string Geometry::GetType()
{
    return TypeFigure;
}

void Geometry::PrintType()
{
    std::cout << TypeFigure;
}
