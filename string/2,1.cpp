// remove uppercase and numeric characters from string
#include <iostream>
#include <regex>
using namespace std;

string removing(string str){
    const regex pattern ("[A-Z]");
    return regex_replace (str, pattern, "");
}
string removing2(string str){
    const regex pattern2 ("[0-9]");
    return regex_replace (str, pattern2, "");
}
int main(){
    string str;
    getline (cin, str);
    cout<<removing2(removing(str))<<endl;

    return 0;
}