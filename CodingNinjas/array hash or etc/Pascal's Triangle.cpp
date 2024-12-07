/*
    https://www.naukri.com/code360/problems/pascal-s-triangle_1089580?leftPanelTabValue=PROBLEM
*/

#include <bits/stdc++.h>

vector<vector<long long int>> printPascal(int n) 
{
  vector<vector<long long int>> v;

  for(int i=1; i<=n; i++){
    vector<long long int>arr;
    long long int ans = 1;
    arr.push_back(ans);
    for(int j=1; j<i; j++){
      ans *= i-j;
      ans /= j;
      arr.push_back(ans);
    }
    v.push_back(arr);
  }

  return v;
}
