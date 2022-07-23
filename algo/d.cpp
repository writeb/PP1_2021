// next_permutation()
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print(int x){
    cout<<x<<" ";
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
    
    cout<<endl;
    while (next_permutation(v.begin(), v.end())){
        for_each (v.begin(), v.end(), print);
        cout<<endl;
    }

    return 0;
}