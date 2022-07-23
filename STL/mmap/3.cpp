// find(), size()
#include <iostream>
#include <map>
using namespace std;

int main(){
    multimap <int,int> mm;
    mm.insert(make_pair(1,10));
    mm.insert(make_pair(5,50));
    mm.insert(make_pair(2,20));
    mm.insert(make_pair(4,40));
    mm.insert(make_pair(3,30));

    multimap <int,int> :: iterator it;
    for(it=mm.begin(); it!=mm.end(); it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
    cout<<endl;
    for (it=mm.find(5); it!=mm.end(); it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
    cout<<"size of mmap: ";
    cout<<mm.size();


    return 0;
}