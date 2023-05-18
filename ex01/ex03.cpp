#include <bits/stdc++.h>
using namespace std;

  int main(){
    int n;
    cin >> n;
    vector<int>a(n);
    for (int i = 0; i < n; i = i+1){
      cin >> a[i];
    }

    for (int i = 1; i <= n; i = i+1){
      if(a[i] % 2 == 0){
        cout << a[i] << " ";
    }
    cout << '\n';
  }
}
