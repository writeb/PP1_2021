// simple example of map
#include <iostream>
#include <map>
using namespace std;

int main(){
    map <string,float> m1;
    m1["rau"]=4.0;                                          //два вида
    m1.insert(make_pair("min",3.5));                        //ввода 

    map <string,float> :: iterator it;
    for (it=m1.begin(); it!=m1.end(); it++){
        //cout<<it->first<<" "<<it->second<<endl;           //  два вида
        cout<<(*it).first<<" "<<(*it).second<<endl;         //  вывода
    }

    return 0;
}