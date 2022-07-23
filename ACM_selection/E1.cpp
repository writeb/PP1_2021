#include <iostream>
using namespace std;
bool check_sort(int a[], int n) {
  for(int i = 1; i < n; i++) {
    if(a[i] < a[i - 1]) {
      if(a[i - 1] - a[i] == 1) swap(a[i - 1], a[i]);
      else return false;
    }
  }
  return true;
}

int main() {
  int q;
  cin >> q;
  for(int t = 0; t < q; t++) {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    if(check_sort(a, n)) {
      cout << "Yes" << endl;
    }else {
      cout << "No" << endl;
    }
  }
  return 0;
}