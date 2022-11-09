#include <iostream>
 
int main () {
    
    std::cout << "Введите первую сторону первого прямоугольника a " << std::endl;
    int a = 0;
    std::cin >> a;
    
    std::cout << "Введите вторую сторону первого прямоугольника b " << std::endl;
    int b = 0;
    std::cin >> b;
    
    std::cout << "Введите первую сторону второго прямоугольника c " << std::endl;
    int c = 0;
    std::cin >> c;
    
    std::cout << "Введите вторую сторону второго прямоугольника d " << std::endl;
    int d = 0;
    std::cin >> d;
    
    if (((a <= c) & (b <= d)) || ((a <= d) & (b <= c))){
        std::cout << "Да, может";
    }else{
        std::cout << "Нет, не может";
    }
}