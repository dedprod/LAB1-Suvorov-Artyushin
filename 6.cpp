#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double x = 0;
    double y = 0;
    double r = 0;
    double ang = 0;
    std::cout << "Введите угол в радианах" << std::endl;
    std::cin >> ang;
    std::cout << "Введите радиус" << std::endl;
    std::cin >> r;
    x= r * cos(ang);
    y= r * sin(ang);
    if ((ang >= 0)&(ang <= 360) & (r>0)){
        std::cout << "Координаты равны:("<< x << "," << y << ")"<< std::endl; 
    }
    else {
        std::cout << "Введены некоректные данные" << std::endl;
    }
    return 0;
}