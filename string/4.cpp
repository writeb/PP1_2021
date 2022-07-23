// erase() - удаляет из стринга часть, которую ты указал
#include <iostream>
using namespace std;

int main(){
    string str;
    cin>>str;

    str.erase(3,2); 
    
    cout<<str<<endl;

    return 0;
}