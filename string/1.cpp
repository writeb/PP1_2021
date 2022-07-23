// How to reverse string (1)
#include <iostream>
using namespace std;

void reverseStr(string& s){
    int n=s.length();
    for (int i=0; i<n/2; i++){
        swap(s[i], s[n-i-1]);
    }
}

int main(){
    string s;
    getline (cin, s);
    reverseStr(s);
    cout<<s<<endl;
    


    return 0;
}