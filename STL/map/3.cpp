#include <iostream>
#include <map>
using namespace std;

int main(){
    map <int,int> m1;
    m1.insert(make_pair(1,10));
    m1.insert(make_pair(2,20));
    m1.insert(make_pair(3,30));
    m1.insert(make_pair(4,40));
    m1.insert(make_pair(5,50));

    //m1.erase(m1.begin(),m1.find(3));        // remove elements less than key = 3
    m1.erase(4);                              // remove elements key = 4
    map <int,int> :: iterator it;
    for (it=m1.begin(); it!=m1.end(); it++){
        cout<<it->first<<" "<<it->second<<endl;
    }

    return 0;
}