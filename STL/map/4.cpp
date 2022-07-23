// unordered_map - используется когда:
// Вам нужно вести подсчет некоторых данных (например, строки), и порядок не требуется.
// Вам нужен доступ к одному элементу, т.е. без обхода.
#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    unordered_map <int,int> um1;
    um1.insert(make_pair(1,10));
    um1.insert(make_pair(2,20));
    um1.insert(make_pair(5,50));
    um1.insert(make_pair(3,30));
    um1.insert(make_pair(4,40));
    

    unordered_map <int,int> :: iterator it;
    for (it=um1.begin(); it!=um1.end(); it++){
        cout<<it->first<<" "<<it->second<<endl;
    }


    return 0;
}