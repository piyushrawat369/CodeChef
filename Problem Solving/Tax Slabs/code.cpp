#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
	cin>>t;
	while(t--){
	    int n, P,S;
	    cin>>n;
	    int D=250000;
	    if(n<=250000){ 
	        P=n;cout<<P<<endl;
	    }
	    else if(n<=500000 && n>250000){
	        S=(n-250000)*0.05;
	        P=n-S;
	        cout<<P<<endl;
	    }
	    else if(n<=750000 && n>500000){ 
	        S=(n-500000)*0.10;
	        P=n-S-(D*0.05);
	        cout<<P<<endl;
	    }
	    else if(n<=1000000 && n>750000){ 
	        S=(n-750000)*0.15;
	        P=n-S-(D*0.15);
	        cout<<P<<endl;
	    }
	    else if(n<=1250000 && n>1000000){ 
	        S=(n-1000000)*0.20;
	        P=n-S-(D*0.30);
	        cout<<P<<endl;
	    }
	     else if(n<=1500000 && n>1250000){ 
	         S=(n-1250000)*0.25;
	         P=n-S-(D*0.50);
	         cout<<P<<endl;
	     }
	     else if(n>1500000){
	         S=(n-1500000)*0.30;
	         P=n-S-(D*0.75);
	         cout<<P<<endl;
	     }
	}
	return 0;
}
