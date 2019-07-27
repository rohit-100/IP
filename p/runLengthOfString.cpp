#include<bits/stdc++.h>

using namespace std;

int main(){
		

	string str;
	cin>>str;
	
	string ans="";
	for(int i=0;i<str.length();){
		int j=i;
		while(j<str.length() and str[i]==str[j])j++;
		ans.push_back(str[i]);
		ans+=to_string(j-i);
		i=j;
	}
	cout<<ans<<endl;
}
