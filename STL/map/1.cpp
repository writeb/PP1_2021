/*
Maps are associative containers that store elements formed by a combination of a key value and a mapped value, 
following a specific order.The mainly used member functions of maps are:
std::map <key_type, data_type>

int length=m.size(); //Gives the size of the map.

m.insert(make_pair("hello",9)); //Here the pair is inserted into the map where the key 
is "hello" and the value associated with it is 9

m.erase(val); //Erases the pair from the map where the key_type is val.

map<string,int>::iterator itr=m.find(val); 
//Gives the iterator to the element val if it is found otherwise returns m.end() .
Ex: map<string,int>::iterator itr=m.find("Maps"); //If Maps is not present as the key value then itr==m.end().

To get the value stored of the key "MAPS" we can do m["MAPS"] or we can get the iterator using the find 
function and then by itr->second we can access the value.
*/

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