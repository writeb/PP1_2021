#include <iostream>
#include <queue>
using namespace std;

int main(){
    queue <int> q;
    int n,x;
    cin>>n;
    for (int i=0; i<n; i++){
        cin>>x;
        q.push(x);
    }

    cout<<q.size()<<endl;       // выводит размер очереди
    cout<<q.front()<<endl;      // выводит передний элемент
    cout<<q.back()<<endl;       // выводит последний элемент
    q.pop();                    // удаляет первый элемент (по принципу FIFO)
    while (!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }    

    return 0;
}