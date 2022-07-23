// Проверка на наличие дубликатов
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    int s = sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr + s);

    bool d=false;
    for (int i=0; i<n-1; i++){
        if (arr[i]==arr[i+1]){
            d=true;
            break;
        }
    }
    if (d==true){
        cout<<"There are duplicates";
    }
    else if (d==false){
        cout<<"There are NO duplicates";
    }

    return 0;
}