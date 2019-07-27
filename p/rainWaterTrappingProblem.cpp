/*

	logic ::
		for each element find the largest on left and right 
		for each find the min of left and right and add it to ans;
*/


#include<bits/stdc++.h>
using namespace std;


int water(vector<int> &arr){

	int n = arr.size();
	vector<int>left(n,0),right(n,0);
	
	left[0]=arr[0];
	for(int i=1;i<n;i++)left[i]=max(left[i-1],arr[i]);
	
	right[n-1]=arr[n-1];
	for(int i=n-2;i>=0;i--)right[i]=max(right[i+1],arr[i]);
	
	int ans=0;
	for(int i=0;i<n;i++)ans+=min(left[i],right[i])-arr[i];
	return ans;
}

int main(){

	int n;
	cin>>n;
	vector<int>arr(n);
	for(int i=0;i<n;i++)cin>>arr[i];
	cout<<water(arr);
}
