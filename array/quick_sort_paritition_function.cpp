
//Sort an array of 0s, 1s and 2s


#include<bits/stdc++.h>
using namespace std;

void partition(vector<int> &arr,int piv){
	
	int low = 0;
	int high =0;
	while(high < arr.size()){
			if(arr[high]<= piv){
				swap(arr[high],arr[low]);
				low++;
				high++;
			}
			else high++;
	}
}	
	
	


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
//	int n;
//	cin>>n;
	vector<int>arr;
//	for(int i=0;i<n;i++)cin>>arr[i];
	string str;
	getline(cin,str);
	stringstream ss(str);
	int val;
	while(ss >> val)arr.push_back(val);
	
	
	partition(arr,1);
	partition(arr,0);
	
	
	
	
	for( int val:arr)cout<<val<<" ";
	cout<<endl;
}




// ONE MORE WAY 


int mid=0,low=0,high=n-1;
    while(mid<=high)
    {
        if(arr[mid]==0)
        {
            if(arr[low]!=arr[mid])
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid]==1)
        {
            mid++;
        }
        else if(arr[mid]==2)
        {
            if(arr[mid]!=arr[high])
            swap(arr[mid],arr[high]);
            high--;
        }
        
    }
