#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> a, b;
  for (int i = 0; i < n; i = i+1){
    int ai, bi;
    cin >> ai >> bi;
    a.push_back(ai);
    b.push_back(bi);
  }

  for (int i = 0; i < n; i = i+1){
   cout << a[i] + b[i] << '\n';
  }
}


