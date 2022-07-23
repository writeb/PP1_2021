// priority_queue - первый элемент очереди является наибольшим из всех элементов в очереди, 
// а элементы расположены в убываеющем порядке (отсюда мы можем видеть, 
// что каждый элемент очереди имеет приоритет {фиксированный). приказ}).
#include <iostream>
#include <queue>
using namespace std;

int main(){
    priority_queue <int> pq;
    int n,x;
    cin>>n;
    for (int i=0; i<n; i++){
        cin>>x;
        pq.push(x);
    }

    while (!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    
    
    return 0;
}