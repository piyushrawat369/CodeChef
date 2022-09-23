#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string n;
	    cin>>n;
	    int count = 0;
	    for(int i=0; i<n.length(); i++){
	        if(n[i] == '0'){
	            count++;
	        }
	    }
	    int s = n.length() - count;
	    if(s == 1 || count == 1){
	        cout<<"Yes"<<endl;
	    }
	    else{
	        cout<<"No"<<endl;
	    }
	    
	}
	return 0;
}
