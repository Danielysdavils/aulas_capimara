#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, a, b;
  int soma =  a + b;
  cin >> n >> a >> b;
  vector<int>vO;

  for (int i = 0; i < n; i = i + 1){
    int op;
    cin >> op;
    vO.push_back(op);
  }
  
  cout << vO << '\n'; 

  for (int i = 1; i <= vO.size(); ++i){
      if (vO[i] == soma){
      	cout << i << '\n';
      }
  }
}
