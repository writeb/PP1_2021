#include <iostream>
using namespace std;

bool res (int x){
        if (x==1){
            return true;
        }
        else if (x%2 != 0 || x==0){
            return false;
        }
        return res (x/2);
    }

int main(){
   int x;
   cin>>x;
   if (res(x)==1){
       cout<<"YES";
   }
   else{
       cout<<"NO";
   }

    return 0;
}