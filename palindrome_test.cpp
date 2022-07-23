// palindrome test
#include <iostream>
using namespace std;

//inline
bool test(string text){
    string reverse="";
    for (int i=text.size()-1; i>=0; i--){
        reverse += text[i];
    }
    if (reverse == text){
        return true;
    }
    return false;
}

int main()
{
    string t;
    cin>>t;
    cout<<test(t)<<"\n";

    return 0;
}