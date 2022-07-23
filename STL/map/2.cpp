#include <iostream>
#include <map>
using namespace std;

int main(){
    map <string,int> m1;
    m1.insert(make_pair("hello",1));
    m1.insert(make_pair("bye",2));
    
    map <string,int> :: iterator it;
    for (it=m1.begin(); it!=m1.end(); it++){
        cout<<it->first<<" "<<it->second<<endl;
    }

    map <string,int> m2(m1.begin(),m1.end());       // assigning the elements from m1 to m2
    for (it=m2.begin(); it!=m2.end(); it++){
        cout<<it->first<<" "<<it->second<<endl;
    }

    return 0;
}