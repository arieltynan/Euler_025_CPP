// Euler_025_CPP.cpp : This file contains the 'main' function. Program execution begins and ends there.
// 1000 Digit Fibonnaci Number

// Math was used to solve this problem
// Equation: 999log(10) = nlog(golden ratio)

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	double ans = ceil(999 * log(10) / (log(1.61803398875)) + 1);
		cout << ans << endl;
}
