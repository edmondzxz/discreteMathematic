#include<vector>

void bubbleSort(vector<int>&vec){
	int len = vec.size();
	int val = 0;
	for(int i=0;i<len;i++){
		for(int j=0;j<(len-i-1);j++){
			if( vec[j] > vec[j+1] ){
				val = vec[j];
				vec[j] = vec[j+1];
				vec[j+1] = val;
			}
		}
	}
}
