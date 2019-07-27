#include<bits/stdc++.h>
using namespace std;

void Impliment_find_last_not_of(){
	string str="fkdfkjkf   \t\n";
	
	string whitespace(" \n\t\v\b");
	
	size_t found = str.find_last_not_of(whitespace);
	if(found != string::npos){
		str.erase(found+1);
	}
	else
	str.clear();
	
	
	cout<<str<<endl;
}


void Impliment_find_first_of(){
		string  s="shfhafdhfkdlfjpoaffhdfnkahffkdflk;jdoifdhehruee";
	
	size_t found = s.find_first_of("aeiou");
	while(found != string::npos){
		s[found]='*';
		found = s.find_first_of("aeiou",found+1);
	}
	cout<<s<<endl;
}
void Impliment_erase(){
	
	/*	
 string& erase (size_t pos = 0, size_t len = npos);
iterator erase (const_iterator p);
iterator erase (const_iterator first, const_iterator last);
*/
	
	
	string str("i am rohit");
	
	str.erase(3); //clear [3,len);
	str.erase(2,3);  //[ind,len]
	str.erase(str.begin(),str.end());
	cout<<str<<endl;

}

void Impliment_copy(){
//	size_t copy (char* s, size_t len, size_t pos = 0) const;

	string str("i am rohit kumar saw");
	
	char ss[6];
	str.copy(ss,6,0);
	cout<<ss<<endl;
	
}




int main(){
	
	//Impliment_find_last_not_of();
	//Impliment_erase();
	Impliment_copy();
	
}


