#pragma once

#ifdef DLL1_EXPORTS
#define DLL1_API __declspec(dllexport)
#else
#define DLL1_API __declspec(dllimport)
#endif

extern "C" {
    DLL1_API double CalculateArea(double width, double height);
    DLL1_API double CalculatePerimeter(double width, double height);
    DLL1_API void DescribeRectangle(double width, double height);
    DLL1_API void SetColor(const char* color);
    DLL1_API void IsFilled(BOOL filled);
}