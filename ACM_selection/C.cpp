#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,x,cnt = 0;
    cin>>n;
    
    vector <int> intr;
    intr.push_back(0);
    for(int i = 1; i <= n; i++){
        cin>>x;
        intr.push_back(x);
    }
    if(intr.back() != 90){
        intr.push_back(90);
    }
    bool play = true;
    for(int i = 1; i < intr.size() ; i++){
        if(play){
            int boring = (intr[i] - 1) - intr[i - 1];
            if(boring >= 15){
                cnt+=15;
                play = false;
            }
            else{
                cnt+=boring + 1; 
            }
        }
    }
    cout<<cnt;
    
    return 0;
}