#include <bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin>>x;
    while(x--){
        int a;
        cin>>a;
        string b;
        cin>>b;
        int ans = 0;
        for(int i=0; i<a; i++){
            ans++;
            if(b[i+1] == '0')
                break;
        }
        cout<<ans<<endl;
    }
    
	return 0;
}
