#include<vector>

bool binarySearch(vector<int>vec,int target){
	int start = 0;
	int end = vec.size();
	int middle = (start+end)/2;
	while( start < end ){
		if( vec[middle]==target){
			return true;
		}
		if( target > vec[middle]){
			start=middle+1;
		}
		else{
			end=middle-1;
		}
		middle = (start+end)/2;
	}
	return false;
}
