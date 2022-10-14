#include <iostream>
#include <cmath>

int main()
{
	double x, y;
	std::cin >> x;
	/*
    y = fabs(4 * x - 1);
    if (x < 0)
        y += pow(x, 7) - 2 * x;
    if (0 <= x && x < 3)
        y += atan((exp(x) + 1) / 8);
    if (x >= 3)
        y += pow(x, 4) + exp(x * x + 3);
    std::cout << y;
    */
    /*
    y = fabs(4 * x - 1);
    if (x < 0)
        y += pow(x, 7) - 2 * x;
    else if (0 <= x && x < 3)
        y += atan((exp(x) + 1) / 8);
    else if (x >= 3)
        y += pow(x, 4) + exp(x * x + 3);
    std::cout << y;
    */
    return 0;
}