#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
       int n;
       cin>>n;
       
       string s;
       cin>>s;
       
       if(n == 1 || n == 2){
           cout<<"1"<<endl;
           continue;
       }
       
       int count = 0;
       for(int i=0; i<n-2; i++){
           if(s[i] == 48 && s[i+1] == 49){
               count++;
           }
       }
       if(s[0] == 49){
           count++;
       }
       if(s[n-2] == 48){
           count++;
       }
       cout<<count<<endl;
    }
	
	return 0;
}
