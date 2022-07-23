// Converting string to number
#include <iostream>
using namespace std;

int main(){
    string str="55", str2="44";
    

    int myint = stoi(str);
    int myint2 = stoi(str2);

    cout << myint+myint2 << endl;
 
    return 0;
}