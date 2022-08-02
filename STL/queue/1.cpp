// queue - контейнер, который работает по принципу FIFO(первым пришел - первым ушел) 
//т.е - элементы вставляются сзади(конец) и удаляются спереди

// size(), front(), back()

#include <iostream>
#include <queue>
using namespace std;

int main(){
    queue <int> q1;
    int n,x;
    cin>>n;
    for (int i=0; i<n; i++){
        cin>>x;
        q1.push(x);
    }

    while (!q1.empty()){
        //cout<<q1.front()<<" ";      // можно так вывести
        int c=q1.front();
        cout<<c<<" ";                 // можно и так 
        q1.pop();
    }

    
    return 0;
}