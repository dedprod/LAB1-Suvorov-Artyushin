#include <iostream>
using namespace std;
int main(){
    int num;
    int a;
    int sum = 0;
    std::cout << "Введите число" << std::endl;
    std::cin >> num;
    if ((((num/1000) > -10)&((num/1000) < 0)) ||(((num/1000) > 0)&((num/1000) < 10))){
        a=num;
        if (a>0){
        while (a>0){
            sum= sum + a%10;
            a=a/10;
        }
        }
        else{
            while (a<0){
            sum= sum + a%10;
            a=a/10;
        }
        }
        std::cout <<"Cумма равна: " << sum << std::endl;
    }
    else{
        std::cout <<"Число введено неправильно, перезапустите программу." << std::endl;
    }
     return 0;
}