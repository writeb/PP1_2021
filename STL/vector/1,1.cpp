// Заполнение 2D вектора
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <vector<int> > vec;
    int n, m,x;
    cin>>n>>m;
    for (int i=0; i<n; i++){
        vector <int> v;
        for (int j=0; j<m; j++){
            cin>>x;
            v.push_back(x);
        }
        vec.push_back(v);
    }
    cout<<endl;
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}