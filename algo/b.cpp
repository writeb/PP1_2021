//rotate()
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector <int> v;
    int n,x;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        v.push_back(x);
    }
    rotate(v.begin(), v.begin() + 2,v.end());
    for (int i = 0; i < n; i++)
    {
        cout<<v[i]<<" ";
    }
    



    return 0;
}