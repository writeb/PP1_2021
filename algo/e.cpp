// prev_permutation()
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
    
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    cout<<endl;
    while (prev_permutation(v.begin(), v.end())){
        for_each (v.begin(), v.end(), print);
        cout<<endl;
    }

    return 0;
}