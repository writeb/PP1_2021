#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    while (i != 101)
    {
        if (i % 15 == 0){
            cout<<"FizzBuzz\n";
        }
        else if (i % 5 == 0){
            cout<<"Buzz\n";
        }
        else if (i % 3 == 0){
            cout<<"Fizz\n";
        }
        else{
            cout<<i<<"\n";
        }
        i++;
    }


    return 0;
}