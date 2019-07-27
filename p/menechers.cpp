#include<bits/stdc++.h>
using namespace std;

string getNewString(string str){
	string res="";
	res.push_back('$');
	for(int i=0;i<str.length();i++){
		res.push_back(str[i]);
		res.push_back('$');
	}
	return res;
}



int main(){

	string str;
	cin>>str;
	string B=str;
	str=getNewString(str);
	
	const int n=str.length();
	
	
	int c=0;
	int r =0;
	vector<int>p(n,0);
	
	for(int i=1;i<n-1;i++){
		
		
		int iM=  c-(i-c);
		
		
		if(r>i)p[i]=min(r-i,p[iM]);
		
		while(i-p[i]-1 >=0 and i+p[i]+1<n and str[i-p[i]-1]==str[i+p[i]+1])p[i]++;
		
		if(i+p[i] > r){
			c = i;
			r = i+p[i];
		}
	}
//	cout<<str<<endl;
//	for(int i=0;i<n;i++)cout<<p[i]<<" ";
//	cout<<endl;
//	
	int max=-1;
	int ind=-1;
	for(int i=0;i<n;i++){
		if(p[i]>max){
			max = p[i];
			ind = i;
		}
	}
	cout<<B.substr((ind-max)/2,max)<<endl;
}
		
		
			
