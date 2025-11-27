#include<bits/stdc++.h>
using namespace std;

int* fun()
{
  //int a[5]; static array
  int *a = new int; // dynamic array
  
  for(int i=0; i<5; i++)
  {
    cin >> a[i];
  }
  
  return a;
}

int main()
{
  int *a = fun();
  
  for(int i=0; i<5; i++)
  {
    cout << a[i] << " ";
  }
  
  return 0;
}