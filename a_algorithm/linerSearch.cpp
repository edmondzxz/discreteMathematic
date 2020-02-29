#include<vector>

bool linerSearch(vector<int>vec,int target){
	for(int i=0;i<vec.size();i++){
		if(target == vec[i]){
			return true;
		}
	}
	return false;
}
