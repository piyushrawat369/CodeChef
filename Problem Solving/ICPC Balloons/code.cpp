#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int n, m = 0, sum = 0;
	    cin>>n;
	    int arr[n];
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	    }
	    for(int i=0; i<n; i++){
	        m++;
	        if(arr[i] <= 7){
	            sum++;
	            if(sum == 7)
	                break;
	        }
	    }
	    cout<<m<<endl;
	}
	return 0;
}
