#include <iostream>

int main()
{
std::cout << "Введите количество секунд ";
double s = 0;
std::cin >> s;

int m = s/60;
int h = s/3600;

std::cout << "Целых часов " << h <<std::endl;
std::cout << "Целых минут " << m;

}


    