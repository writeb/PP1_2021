#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n,cnt=0;
    cin>>n;
    char arr[n];

    for (char i=0; i<n; i++){
        cin>>arr[i];
    }
    for (char i=0; i<n; i++){
        if (arr[i]==arr[i+1]){
            cnt++;
        }
    }
    cout<<cnt<<endl;


    return 0;
}