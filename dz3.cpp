#include <iostream>
#include <cmath>

int main()
{
std::cout << "Введите первый катет a ";
double a = 0;
std::cin >> a;

std::cout << "Введите второй катет b ";
double b = 0;
std::cin >> b;

double s = 0.5*a*b;

double c = 0;
c = sqrt(pow(a,2)+pow(b,2));

if ((a > 0) & (b > 0)) {
    std::cout << "Площадь площадь прямоугольного треугольника " << s <<std::endl;
    std::cout << "Гипотенуза " << c;
}else {
    std::cout << "Введены неверные данные";
}
return 0;
}
    