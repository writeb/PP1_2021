// simple programm demonstrating function
#include <iostream>
using namespace std;

int max (int a, int b){
    if (a>b)
    return a;
    else
    return b;
}

int main(){
    int a, b;
    cin>>a>>b;

    cout<<max(a,b)<<endl;



    return 0;
}