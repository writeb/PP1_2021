// swap()
#include <iostream>
using namespace std;

int main(){
    pair <string,int> p1 = make_pair("hi",55);
    pair <string,int> p2 = make_pair("bye",45);
    cout<<"До изменений: "<<p1.first<<" "<<p1.second<<endl<<p2.first<<" "<<p2.second<<endl;
    p1.swap(p2);
    cout<<"После изменений: "<<p1.first<<" "<<p1.second<<endl<<p2.first<<" "<<p2.second<<endl;
    return 0;
}