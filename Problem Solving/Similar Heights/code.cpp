#include <bits/stdc++.h>
using namespace std;

int similar(vector<int> &h){
    map<int, int> m;
    for(int i=0; i<h.size(); i++){
        m[h[i]]++;
    }
    int max1 = *max_element(h.begin(), h.end());
    vector<int> v,w;
    int count = 0;
    for(auto it = m.begin(); it != m.end(); ++it){
        if(it->second == 1){
            count ++;
            v.push_back(it->first);
        }
        else{
            w.push_back(it->second);
        }
    }
    if(count != 1){
        return (count+1)/2;
    }
    else{
        count++;
        if(max1 == v[0]){
            int max2 = *max_element(w.begin(), w.end());
            if(max2 <= 2){
                return max2;
            }
        }
        
    }
    return 1;
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> arr(n);
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	    }
	    cout<<similar(arr)<<endl;
	    
	}
	return 0;
}
