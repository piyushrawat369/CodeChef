#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n, v1, v2, vx, ans;
	string element;
	vector<string> v;
	vector<int> standard;
	cin>>n;
	
	while(n--){
	   int a;
	   cin>>a;
	   
	   ans = 0;
	   standard = {};
	   v = {};
	   
	   for(int i=0; i<a; i++){
	       cin>>element;
	       v.push_back(element);
	   }
	   for(int i=0; i<10; i++){
	       v1 = v[0][i] - 48;
	       standard.push_back(v1);
	   }
	   
	   if(a == 1){
	       for(int i=0; i<10; i++){
	           if(standard[i] == 1){
	               ans++;
	           }
	       }
	   }
	   for(int i=1; i<a; i++){
	       for(int j=0; j<10; j++){
	           v2 = v[i][j] - 48;
	           vx = standard[j]^v2;
	           standard[j] = vx;
	           
	           if(i == a-1){
	               if(standard[j] == 1){
	                   ans++;
	               }
	           }
	       }
	   }
	   cout<<ans<<endl;;
	}
	return 0;
}
