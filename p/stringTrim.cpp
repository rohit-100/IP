#include<bits/stdc++.h>
using namespace std;

int main(){
	string s = "    dkfjh j     ";
	s.erase(0,s.find_first_not_of(" \n\t\r"));
	cout<<s<<endl;
	s.erase(s.find_last_not_of(" \n\t\r"));
	cout<<s<<endl;
}
