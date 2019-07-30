

//Given an array arr[], the task is to make all the array elements equal with the given operation. In a single operation, any element of the array can be either multiplied by 2 or by 3. If its possible to make all the array elements equal with the given operation then print Yes else print No.

// LOGIC :------ divide all elements by 2 and 3 till possible and check whether all are equal or not 



#include<bits/stdc++.h>
using namespace std;


bool fun(vector<int> &arr){

	int n=arr.size();
	bool res = true;
	for(int i=0;i<n;i++){
		while(arr[i]%2==0)arr[i]/=2;
		while(arr[i]%3==0)arr[i]/=3;
		if(i!=0 and arr[i-1]!=arr[i])return false;
	}
	return true;
}

int main(){
	vector<int> arr={3,2,6,18};
	cout<<fun(arr);
}
