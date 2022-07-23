// Program to remove uppercase, lowercase
//special, numeric, and non-numeric characters 
#include <iostream>
#include <regex>
using namespace std;

string removingUpperCase(string s){
    const regex pattern ("[A-Z]");
    return regex_replace (s, pattern, "");
}
string removingLowerCase(string s){
    const regex pattern ("[a-z]");
    return regex_replace (s, pattern, "");
}
string removingSpecial(string s){
    const regex pattern ("[^A-Za-z0-9]");
    return regex_replace (s, pattern, "");
}
string removingNumeric(string s){
    const regex pattern ("[0-9]");
    return regex_replace (s, pattern, "");
}
string removingNonNumeric(string s){
    const regex pattern ("[^0-9]");
    return regex_replace (s, pattern, "");
}

int main(){
    string s;
    getline (cin, s);
    //cout<<removingUpperCase(s)<<endl;;
    //cout<<removingLowerCase(s)<<endl;
    //cout<<removingSpecial(s)<<endl;
    //cout<<removingNumeric(s)<<endl;
    //cout<<removingNonNumeric(s);

    return 0;
}