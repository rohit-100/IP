//Given an array of distinct integers. The task is to count all the triplets such that sum of two elements equals the third element


#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int>arr(n);
	    for(int i=0;i<n;i++)cin>>arr[i];
	    sort(arr.begin(),arr.end());
	    int ans=0;
	    for(int i=0;i<n-2;i++){
	        int j=i+1;
	        int k=i+2;
	        while(k<n){
	            if(arr[i]+arr[j]<arr[k])j++;
	            else if(arr[i]+arr[j]>arr[k])k++;
	            else {
	                ans++;
	                j++;
	                k++;
	            }
	        }
	    }
	    ans?cout<<ans<<endl:cout<<"-1\n";
	}
	
	
	
	
	return 0;
}
