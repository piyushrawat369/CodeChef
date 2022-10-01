#include <iostream>
using namespace std;

int main() {
 int t;
 cin>>t;
 while (t--)
 {
     int a,b,x;
     cin>>a>>b>>x;
     
     if ((abs(a-b))%(2*x)==0)
     {
         cout<<"yes"<<endl;
     }
     else 
     {
         cout<<"no"<<endl;
     }
     
 }
     
     return 0;
}
 
