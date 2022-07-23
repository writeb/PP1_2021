// ways to copy vector
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,x;
    cin>>n;
    vector <int> vec1;
    vector <int> vec2;

    for (int i=0; i<n; i++){
        cin>>x;
        vec1.push_back(x);
    }
    /*for (int i=0; i<n; i++){
        vec2.push_back(vec1[i]);
    }*/
    vec2=vec1;
    for (int i=0; i<n; i++){
        cout<<vec1[i]<<" ";
    }
    cout<<endl;
    for (int i=0; i<n; i++){
        cout<<vec2[i]<<" ";
    }

    




    return 0;
}