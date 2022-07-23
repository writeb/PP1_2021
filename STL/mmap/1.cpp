// Мультикарта похожа на карту , но у нескольких элементов могут быть одинаковые ключи. 
// Кроме того, в этом случае НЕ требуется, чтобы пара ключ-значение и сопоставленное значение были уникальными. 
// Одна важная вещь, которую следует отметить в отношении multimap, 
// заключается в том, что multimap всегда хранит все ключи в отсортированном порядке.
#include <iostream>
#include <map>
using namespace std;

int main(){
    multimap <int,int> mm1;
    mm1.insert(make_pair(3,30));
    mm1.insert(make_pair(3,30));
    mm1.insert(make_pair(3,20));
    mm1.insert(make_pair(5,50));
    mm1.insert(make_pair(4,40));
    

    multimap <int,int> :: iterator it;
    for (it=mm1.begin(); it!=mm1.end(); it++){
        pair <int,int> res = *it;
        cout<<res.first<<" "<<res.second<<endl;             // два вида вывода
        //cout<<it->first<<" "<<it->second<<endl;
    }
    cout<<mm1.size()<<endl;
    return 0;
}