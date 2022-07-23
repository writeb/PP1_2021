#include <iostream>
using namespace std;

int main(){
    int x,y,z;
    cin>>x>>y>>z;
    bool check = false;
    if (x+y<=z || x+z<=y || z+y<=x){
        check = false;
    }
    else {
        check = true;
    }

    if (check==true){
        cout<<"Valid";
    }
    else if (check==false){
        cout<<"Invalid";
    }
    return 0;
}