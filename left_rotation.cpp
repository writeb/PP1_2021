// Given an array of N elements and the
// task is to print the elements of an array
// after left rotating array elements by d positions.
#include <iostream>
using namespace std;

int main()
{
    int n, d;
    cin>>n>>d;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    for (int i = 0;i < n; i++){
        cout<<arr[(i + d) % n]<<" ";
    }



    return 0;
}