// insert() - добавляет стринг в стринг, после определенного индекса 
#include <iostream>
using namespace std;

void insertD(string str, string str2){
    str.insert(6, str2);
    cout<<str<<" ";
}

int main(){
    string str;
    getline(cin, str);
    string str2;
    getline(cin,str2);
    insertD(str,str2);



    return 0;
}