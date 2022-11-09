#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double PI=3.1415926;
    double r = 0;
    double s;
    std::cout << "Введите радиус" << std::endl;
    std::cin >> r;
    if (r > 0 ) {
    s= r*PI*r;
    std::cout <<"Площадь без округлений: " << s << std::endl;
    std::cout <<"Площадь c округлением: " << pow(round(s),2)<< std::endl;
    }
    else
    {
        std::cout <<"Радиус введен неправильно, перезапустите программу." << std::endl ;
    }
    return 0;
}