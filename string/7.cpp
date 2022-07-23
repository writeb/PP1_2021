// substr() - выводит часть из стринга, которую ты указал
#include <iostream>
using namespace std;

int main(){
    string str;
    cin>>str;
    string s=str.substr(2,2);
    cout<<s<<endl;

    return 0;
}