// swap()
#include <iostream>
#include <map>
using namespace std;

int main(){
    multimap <int,int> mm1;
    mm1.insert(make_pair(1,10));
    mm1.insert(make_pair(5,50));
    mm1.insert(make_pair(7,70));
    mm1.insert(make_pair(2,20));
    mm1.insert(make_pair(7,10));
    multimap <int,int> mm2;
    mm2.insert(make_pair(2,90));
    mm2.insert(make_pair(3,40));

    multimap <int,int> :: iterator it;
    for (it=mm1.begin(); it!=mm1.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }cout<<endl;
    for (it=mm2.begin(); it!=mm2.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }cout<<endl;
    mm1.swap(mm2);
    cout<<"after swapping:\n";
    for (it=mm1.begin(); it!=mm1.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }cout<<endl;
    for (it=mm2.begin(); it!=mm2.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }

    return 0;
}