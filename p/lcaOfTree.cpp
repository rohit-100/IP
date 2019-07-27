

               





#include<bits/stdc++.h>
using namespace std;
vector<vector<int> > tree;

int lca(int v,int p,int a,int b){
	if(v==a or v==b)return v;
	if(tree[v].size()==1)return -1;
	set<int>st;
	for(int vv:tree[v])if(vv!=p){
		int temp = lca(vv,v,a,b);
		st.insert(temp);
	}
	if(st.size()==1 and *st.begin()==-1)return -1;
	else if(st.size()==2 and *st.begin()==-1)return *--st.end();
	else return v;
}
	




int main(){

	int n;
	cin>>n;
	
	tree.resize(n+1);
	int m;
	cin>>m;
	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		tree[x].push_back(y);
		tree[y].push_back(x);
	}
	cout<<lca(1,-1,1,3);
	
}
