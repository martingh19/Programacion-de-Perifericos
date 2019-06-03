// MathFuncsLib.cpp : Define las funciones de la biblioteca estática.
//
#include "pch.h"
#include "framework.h"
#include "MathFuncsLib.h"
#include <stdexcept>

// TODO: Ejemplo de una función de biblioteca
void fnMathFuncsLib()
{
}
using namespace std;

namespace MathFuncs
{
	double MyMathFuncs::Add(double a, double b)
	{
		return a + b;
	}

	double MyMathFuncs::Subtract(double a, double b)
	{
		return a - b;
	}

	double MyMathFuncs::Multiply(double a, double b)
	{
		return a * b;
	}

	double MyMathFuncs::Divide(double a, double b)
	{
		return a / b;
	}
}