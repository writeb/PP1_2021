// stack - работает по принципу LIFO (последним пришел - первым ушел), т.е. элементы 
// добавлются в конец контейнера и удалются оттуда же (из конца)

// stack::top() : Function returns top element of the stack.

#include <iostream>
#include <stack>
using namespace std;

void print (stack<int> st){
    while (!st.empty()){                    // while (!st.empty()){
        cout<<st.top()<<" ";                //    int c = st.top();         два вида вывода
        st.pop();                           //    cout<<c<<" ";
    }                                       //    st.pop();
}                                           // }

int main(){
    stack <int> st;
    int n,x;
    cin>>n;
    for (int i=0; i<n; i++){
        cin>>x;
        st.push(x);
    }
    print(st);
    cout<<endl;
    st.pop();                       // удаляет верхний элемент 
    print(st);

    return 0;
}