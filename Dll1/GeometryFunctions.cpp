// GeometryFunctions.cpp : Содержит определения экспортируемых функций.
#include "pch.h"
#include "GeometryFunctions.h"
#include <stdio.h>

extern "C" DLL1_API double CalculateArea(double width, double height) {
    return width * height;
}

extern "C" DLL1_API double CalculatePerimeter(double width, double height) {
    return 2 * (width + height);
}

extern "C" DLL1_API void DescribeRectangle(double width, double height) {
    char buffer[100];
    sprintf_s(buffer, sizeof(buffer), "This is a rectangle with width %.2f and height %.2f", width, height);
    printf("%s\n", buffer);
}

extern "C" DLL1_API void SetColor(const char* color) {
    char buffer[50];
    sprintf_s(buffer, sizeof(buffer), "The rectangle color is set to %s", color);
    printf("%s\n", buffer);
}

extern "C" DLL1_API void IsFilled(BOOL filled) {
    printf("Is the rectangle filled? %s\n", filled ? "Yes" : "No");
}
