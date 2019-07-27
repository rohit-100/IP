
//https://practice.geeksforgeeks.org/problems/subarray-with-given-sum/0


#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
	    int n,s;
	    cin>>n>>s;
	    vector<int>arr(n+1,0);
	    for(int i=1;i<=n;i++){
	        if(i==1){
	            cin>>arr[i];
	            continue;
	        }
	        cin>>arr[i];
	        arr[i]+=arr[i-1];
	    }
	    int low=1;
	    int high=1;
	    int sum=arr[1];
	    bool flag = false;
	    while(high <=n ){
	        sum=arr[high]-arr[low-1];
	        if(sum<s)high++;
	        else if(sum>s)low++;
	        else{
	            cout<<low<<" "<<high<<endl;
	            flag = true;
	            break;
	        }
	    }
	    if(!flag){
	        cout<<"-1\n";
	    }
	    
	}
	return 0;
}
