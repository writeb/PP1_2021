#include <iostream>
using namespace std;

int main(){
    int k,n,w;
    cin>>k>>n>>w;
    
    int cost;
    w = w * (w+1)/2;
    cost = k*w-n;
    if (cost<= 0)
        cost = 0;
    cout<<cost<<endl;

    return 0;
}