#include <bits/stdc++.h>
using namespace std;

int main() {
	long long t;
	cin>>t;
	while(t--){
	    long long D,d,p,q, sum = 0;
	    cin>>D>>d>>p>>q;
	    long long arr[D];
	    long long s = d*q;
	    long long n = D/d;
	    long long m = D%d;
	    long long o = p*d;
	    long long a = n*(2*o + (n-1)*s)/2;
        long long b = (m*p + m*q*n);
        
	    cout<<a+b<<endl;
	    
	    
	}
	return 0;
}
