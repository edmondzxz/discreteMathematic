#include<vector>

using namespace std;

int getMax( vector<int> vec ){
	if( vec.size() == 0){
		return -1;
	}
	int val = vec[0];
	for(int i=0;i<vec.size();i++){
		if( vec[i] > val ){
			val = vec[i];
		}
	}
	return val;
}
