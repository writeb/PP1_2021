/* 
set - убирает дубликаты и ставит числа в возр. порядке
int length=s.size(); //Gives the size of the set

s.insert(x); //Inserts an integer x into the set s.

s.erase(val); //Erases an integer val from the set s.

// Finding an element
set<int>::iterator itr=s.find(val); //Gives the iterator to the element val 
if it is found otherwise returns s.end() .
Ex: set<int>::iterator itr=s.find(100); //If 100 is not present then it==s.end().
*/
#include <iostream>
#include <set>
using namespace std;

int main(){
    set <int> s;
    int n, x;
    cin>>n;
    for (int i=0; i<n; i++){
        cin>>x;
        s.insert(x);
    }
    set <int> :: iterator it;
    for (it=s.begin(); it!=s.end(); it++){
        cout<<*it<<" ";
    }
    
    return 0;
}