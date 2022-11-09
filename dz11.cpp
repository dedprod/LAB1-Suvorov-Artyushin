#include <iostream>

int main()
{
std::cout << "Введите стоимость покупки ";
double s1 = 0;
std::cin >> s1;

if (s1 > 1000){
    double s2 = s1*0.9;
    std::cout << "Стоимость с учетом скидки: " << s2;
}else{
    std::cout << "Скидка не предоставляется ";
}
}


    