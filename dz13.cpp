#include <cstdlib>
#include <iostream>
#include <ctime>
 
int main() 
{
    srand(time(nullptr)); 
    int r = rand();
    
    std::cout << "Вам даны два числа: ";
    
    int x = 0;
    int y = 0;
    
    for (int n=0; n != 1; ++n) {
        x = 10;
        while(x > 9) 
            x = 1 + std::rand()/((RAND_MAX + 1u)/9);  
        std::cout << x << ' ';
    }
    for (int n=0; n != 1; ++n) {
        y = 10;
        while(y > 9) 
            y = 1 + std::rand()/((RAND_MAX + 1u)/9);  
        std::cout << y << ' ' << std::endl;
    }
    
    std::cout << "Напишите их произведение ";
    int p = 0;
    std::cin >> p;
    
    if (p == x*y){
        std::cout << "Верно";
    }
    else{
        std::cout << "Неверно";
    }
    
    return 0;
    
}