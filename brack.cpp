#include <iostream>
#include <stack>
#include <vector>

using namespace std;

bool isBalanced(string s)
{
    int i;
    char c;
    int n = s.length();

    stack<char> t;

    for (i = 0; i < n; i++)
    {
        c = s.at(i);

        if (t.empty())
        {
            t.push(c);
        }
        else if (t.top() == '(' && c == ')' || t.top() == '{' && c == '}' || t.top() == '[' && c == ']')
        {
            t.pop();
        }
        else
            t.push(c);
    }

    if (t.empty())
        return true;
    else
        return false;
}

int main()
{
    int n;
    cin>>n;
    string s[n];
    vector <string> str;
    bool b;
    for (int i = 0; i < n; i++){
        cin>>s[i];
        b = isBalanced(s[i]);
        if (b){
            str.push_back("YES");
        }
        else{
            str.push_back("NO");
        }
    }
    for (int i=0; i<n; i++){
        cout<<str[i]<<"\n";
    }
   


    return 0;
}