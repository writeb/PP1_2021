// multiset - такой же контейнер как set, только дубликаты не убирает
#include <iostream>
#include <set>
using namespace std;

int main(){
    multiset <int> ms;
    int n;
    cin>>n;
    for (int i=0; i<n; i++){
        ms.insert(i+1);
    }

    multiset <int> :: iterator it;
    for (it=ms.begin(); it!=ms.end(); it++){
        cout<<*it<<" ";
    }


    return 0;
}