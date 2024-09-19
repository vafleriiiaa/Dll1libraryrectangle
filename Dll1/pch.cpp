// pch.h: это предварительно скомпилированный заголовочный файл.
// Файлы, перечисленные ниже, будут предварительно откомпилированы, что улучшит производительность сборки и работу IntelliSense.
// Изменения в этих файлах вызовут пересборку всего проекта.
// Не добавляйте сюда часто изменяющиеся файлы, так как это нивелирует выгоду от производительности.
#include "pch.h"
#ifndef PCH_H
#define PCH_H

// Добавьте сюда заголовочные файлы для предварительной компиляции
#include <windows.h>



extern "C" __declspec(dllexport) double CalculateArea(double width, double height);
extern "C" __declspec(dllexport) double CalculatePerimeter(double width, double height);
extern "C" __declspec(dllexport) void DescribeRectangle(double width, double height);
extern "C" __declspec(dllexport) void SetColor(const char* color);
extern "C" __declspec(dllexport) void IsFilled(BOOL filled);

#endif //PCH_H
