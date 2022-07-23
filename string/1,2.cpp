#include <iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    string rev = string(s.rbegin(), s.rend());
    cout<<rev;


    return 0;
}