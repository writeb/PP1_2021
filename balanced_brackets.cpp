#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack <int> st;
    string str;
    cin>>str;
    bool res = true;
    for (int i=0; i<str.size(); i++){
        if (str[i] == '(' || str[i] == '[' || str[i] == '{'){
            st.push(str[i]);
        }
        else if (str[i] == ')' || str[i] == ']' || str[i] == '}'){
            if (!st.empty()){
                st.pop();
            }
            else {
                res = false;
                break;
            }
        }
    }   
    if (res == false || !st.empty()){
        cout<<"NO"<<"\n";
    }
    else {
        cout<<"YES"<<"\n";
    }


    return 0;
}