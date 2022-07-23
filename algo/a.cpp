//count_if()
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isEven (int a){
    return a%2==0;
}

int main(){
    vector <int> v;
    int n,x;
    cin>>n;
    for (int i=0; i<n; i++){
        cin>>x;
        v.push_back(x);
    }
    int c = count_if(v.begin(), v.end(), isEven);
    cout<<c<<endl;


    return 0;
}