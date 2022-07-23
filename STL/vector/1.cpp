// Заполнение 2D вектора
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int> > vec (n, vector<int>(m,3));
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}