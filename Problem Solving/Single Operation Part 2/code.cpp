#include <iostream>
using namespace std;

int main() {
	int x;
	cin>>x;
	while(x--){
	    int a, ans = 0;
	    cin>>a;
	    string b;
	    cin>>b;
	    for(int i=0; i<a; i++){
	        ans++;
	        if(b[i+1] == '1'){
	            break;
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
