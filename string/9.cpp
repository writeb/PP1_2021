// append() - добавляет в конец стринга новый стринг
#include <iostream>
using namespace std;

int main(){
    string str1, str2;
    getline (cin, str1);
    getline (cin, str2);
    cout<<str1.append(str2);



    return 0;
}