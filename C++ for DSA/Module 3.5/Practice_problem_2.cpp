#include <bits/stdc++.h>
using namespace std;

class Cricketer{
  
  public:
  
  int jersey_no;
  char country[100];
  
};

int main() 
{
    Cricketer* dhoni = new Cricketer;
    dhoni->jersey_no = 7;
    char temp[100] = "India";
    strcpy(dhoni->country, temp);
    
    // cout<<dhoni->jersey_no<<" "<<dhoni->country<<endl;
    
    Cricketer* kohli = new Cricketer;
    
    kohli->jersey_no=dhoni->jersey_no;
    strcpy(kohli->country, dhoni->country);
    
    //delete dhoni;
    
    cout<<kohli->jersey_no<<" "<<kohli->country<<endl;
    //cout<<dhoni->jersey_no<<" "<<dhoni->country<<endl;
    
    return 0;
}