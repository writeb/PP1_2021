// unordered_set - set in unsorted order
#include <iostream>
#include <unordered_set>
using namespace std;

int main(){
    unordered_set <int> set1;
    int n,x;
    cin>>n;
    for (int i=0; i<n; i++){
        cin>>x;
        set1.insert(x);
    }
    unordered_set <int> :: iterator it;
    for (it=set1.begin(); it!= set1.end(); it++){
        cout<<*it<<" ";
    }

    return 0;
}