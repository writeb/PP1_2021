//  set <int,greater<int> > - set, но в порядке убывания
#include <iostream>
#include <set>
using namespace std;

int main(){
    set <int, greater<int> > s1;
    int n, x;
    cin>>n;
    for (int i=0; i<n; i++){
        cin>>x;
        s1.insert(x);
    }
    
    set <int> :: iterator it;
    for (it=s1.begin(); it!=s1.end(); it++){
        cout<<*it<<" ";
    }

    return 0;
}