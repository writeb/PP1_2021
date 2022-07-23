#include <iostream>
using namespace std;

int main()
{
    int n;
    string s[n];
    cin>>n;
    for (int i = 0; i < n; i++){
        cin>>s[i];
    }
    int res = 0;
    for (char c = 'a'; c <= 'z'; c++){
        bool b = 1;
        for (int i = 0; b && i < n; i++){
            b = 0;
            for(int j = 0 ; j < s[i].size() ; j++)
            if(s[i][j] == c)
                b = 1;
        }
        if (b){
            res++;
        }
    }
    cout<<res;
    return 0;
}