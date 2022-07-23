//for_each()
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print(int x){
    cout<<2*x<<" ";
}

int main(){
    vector <int> v;
    int n,x;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        v.push_back(x);
    }
    for_each(v.begin(), v.end(), print);

    return 0;
}