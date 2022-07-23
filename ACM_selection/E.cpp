#include <iostream>
using namespace std;

bool check (int arr[], int n){
    for (int i=0; i<n; i++){ 
        if (arr[i] > arr[i+1]){ 
            if (arr[i] - arr[i+1]==1)
                swap(arr[i], arr[i+1]);
            else return false;
        } 
    }
    return true;
}

int main(){
    int q;
    cin>>q;
    for (int i=0; i<q; i++){
        int n;
        cin>>n;
        int arr[n];
        for (int i=0; i<n; i++){
            cin>>arr[i];   
        }
        if (check(arr,n)){
            cout << "YES"<<endl;
        } 
        else{
            cout << "NO"<<endl;
        }
    }      
    return 0;
}