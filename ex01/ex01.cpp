#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  int mx = -1, mxi = -1;
  for (int i = 0; i<n; i=i+1){
    int h;
    cin>>h;
    if (h>mx) {
      mx=h;
      mxi = i;
    }
  }
  cout << mxi << '\n';
 
}
