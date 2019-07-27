
//corresponding arrival and departure are not interrelated;


int fun(vector<int> &arr,vector<int> &dep){
	
	
	int n =arr.size();
	
	sort(arr.begin(),arr.end());
	sort(dep.begin(),dep.end());
	
	int max_platform =0;
	int temp =0;
	int i=0,j=0;
	while(i<n and j<n){
		if(arr[i] <= dep[j]){
			temp++;
			i++;
			if(temp > max_platform)max_platform = temp;
		}
		else {
			j++;
			temp--;
		}
	}
	return max_platform;
}


int fun(vector<int> &arr,vector<int> &dep){
	
	
	int n =arr.size();
	unordered_map<int,char> mp;
	for(int i=0;i<n;i++){
		mp.insert({arr[i],'a'});
		mp.insert({dep[i],'d'});
	}
	int max_platform=0;
	int temp =0;
	for(auto it = mp.begin();it!= mp.end();it++){
		if(it->second == 'a'){
			temp++;
			if(temp > max_platform)max_platform = temp;
		}
		else
		temp--;
		
		//mp.erase(mp.begin());
	}
	return max_platform;
}
		
	
	

