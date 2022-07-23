// difference of 2 arrays
#include <iostream>
using namespace std;

void read(int n, int a[]){
    for (int i=0; i<n; i++){
        cin>>a[i];
    }
}
void print(int n, int a[]){
    for (int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
}
void diff(int n, int a[], int b[], int c[]){
    for (int i=0; i<n; i++){
        c[i]=abs(a[i]-b[i]);
    }
}

int main(){
    int n;
    cin>>n;
    int a[n], b[n], c[n];
    read(n,a);
    read(n,b);
    diff(n,a,b,c);
    print(n,c);

    return 0;
}