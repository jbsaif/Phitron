#include <bits/stdc++.h>
using namespace std;

int main()
{
  // int ar[3]; Static Array
  
  int *ar = new int [3];// Dynamic Array
  
  for(int i=0;i<3;i++)
  {
    cin>>ar[i];
  }
  
  for(int i=0; i<3; i++)
  {
    cout << ar[i] << " ";
  }
  
  return 0;
}