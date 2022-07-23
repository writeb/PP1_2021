#include <iostream>
using namespace std;

template <typename T>
T number(T num1, T num2){
    return num1+num2;
}

int main(){
    cout<<number(2,4);



    return 0;
}
// template - позволяет поставить любой тип данных исходя из аргументов