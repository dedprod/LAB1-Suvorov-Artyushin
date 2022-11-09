#include <cstdlib>
#include <iostream>
#include <ctime>
 
int main() 
{
 
    int D0;   
    int D1;  
    int D2;   

    
    srand(time(nullptr)); 
    int r = rand();
    
    int x = 0;
    
    for (int n=0; n != 1; ++n) {
        x = 1000;
        while(x > 999) 
            x = 100 + std::rand()/((RAND_MAX + 100u)/999);  
        std::cout << x << ' ' <<std::endl;
    }
    
     D0 = x % 10;
     D1 = (x % 100) / 10;
     D2 = (x % 1000) / 100;
     
     std::cout << "Введите любое число " << std::endl;
     int b = 0;
     std::cin >> b;
     
     if (b == D2 * D1 *  D0){
         std::cout << "Ваше число равно произведению цифр заданного числа " << x << std::endl;
     }
     
     if (b < D2 * D1 *  D0){
         std::cout << "Ваше число меньше произведения цифр заданного числа " << x << std::endl;
     }
     
      if (b > D2 * D1 *  D0){
         std::cout << "Ваше число больше произведения цифр заданного числа " << x << std::endl;
     }
     
 
  std::cout << "Произведение цифр " << D2 << "*" << D1 << "*" << D0 << " = ";
  std::cout << D2 * D1 *  D0;
    
}
