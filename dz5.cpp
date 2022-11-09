#include <iostream>
#include <cmath>

int main()
{
std::cout << "Введите координату X ";
double x = 0;
std::cin >> x;

std::cout << "Введите координату Y ";
double y = 0;
std::cin >> y;

double r = sqrt(pow(x,2)+pow(y,2));

double f = cos(x/r);

std::cout << "Полярные координаты: (" << r << ","<< f << ")";
return 0;
}
    