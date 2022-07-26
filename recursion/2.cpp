// factorial
#include <iostream>
using namespace std;

int factorial(int n){
    if (n>1){
        return n * factorial(n-1);
    }
    else{
        return 1;
    }
}

int main()
{
    int n;
    cout<<"Enter the positive number\n";
    cin>>n;
    cout<<"Factorial of "<<n<<" - is "<<factorial(n)<<"\n";



    return 0;
}