#include <iostream>
#include <cmath>

int main()
{
std::cout << "Уравнение вида: ax^2+bx+c=0 " <<std::endl;
std::cout << "Веедите коэффициент а ";
double a = 0;
std::cin >> a;

std::cout << "Веедите коэффициент b ";
double b = 0;
std::cin >> b;

std::cout << "Веедите коэффициент c ";
double c = 0;
std::cin >> c;

double D = pow(b,2) - 4*a*c;

if (D >= 0) {
    double x1 = ((-b + sqrt(D))/2*a);
    double x2 = ((-b - sqrt(D))/2*a);
    if ((a != 0) & (b != 0)) {
            if (D == 0){
                std::cout << "Корень уравнения: " << x2;
            }else {
            std::cout << "Первый корень: " << x1 << std::endl;
            std::cout << "Второй корень: " << x2;
        }
        }else {
        std::cout << "Введены неверные данные";
    }
}else {
        std::cout << "Введены неверные данные";
        return 0;
    }
}


    