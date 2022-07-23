#include <iostream>
#include <map>
#include <iterator>
using namespace std;

int main(){
    multimap <int,int> mm1;
    mm1.insert(make_pair(3,30));
    mm1.insert(make_pair(3,30));
    mm1.insert(make_pair(3,20));
    mm1.insert(make_pair(5,50));
    mm1.insert(make_pair(4,40));
    multimap <int,int> :: iterator it;
    for (it=mm1.begin(); it!=mm1.end(); it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
    cout<<endl<<"assigning example:"<<endl;
    multimap <int,int> mm2 (mm1.begin(), mm1.end());        // assigning elements from mm1 to mm2
    for (it=mm2.begin(); it!=mm2.end(); it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
    cout<<endl<<"erase example:"<<endl;                 
    mm2.erase(mm2.begin(), mm2.find(4));                    // erase elements less than key = 4
    for (it=mm2.begin(); it!=mm2.end(); it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
    cout<<endl;
    mm2.erase(5);
    for (it=mm2.begin(); it!=mm2.end(); it++){              // remove all elements with key = 5
        cout<<it->first<<" "<<it->second<<endl;
    }
    

    return 0;
}