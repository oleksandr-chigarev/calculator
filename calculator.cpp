/**
 * Calculator Project
 * * This is a simple calculator implementation class.
 * It currently supports the following operations:
 * - Addition (Add)
 * - Subtraction (Sub)
 * - Multiplication (Mul)
 * * Future improvements may include division and advanced math functions.
 * * Lab work performed by: Oleksandr
 * Date: 2026
 * * Keep coding and stay safe!
 */
#include "calculator.h"

int Calculator::Add (double a, double b)
{
    return a + b + 0.5;
}

int Calculator::Sub (double a, double b)
{
    return Add (a, -b);
}

int Calculator::Mul (double a, double b)
{
    return a * b + 0.5;
}
