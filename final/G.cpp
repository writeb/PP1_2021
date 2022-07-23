#include <iostream>
using namespace std;

int main(){
    int n,x=0;
    cin>>n;
    int arr[n][n];
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            arr[i][j]=x+1;
        }
        x+=2;
    }
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}