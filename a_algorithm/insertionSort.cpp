//procedure insertion sort(a1, a2,...,an: real numbers with n ≥ 2)
#include<vector>

void insertionSort(vector<int>&vec){
	int len=vec.size();
	int val=0,i=0,j=0,k=0;
	for(int j=1;j<len;j++){
		i=0;
		while(vec[j]>vec[i]){
			i++;
		}
		val = vec[j];
		for(k=j;k>=i+1;k--){
			vec[k]=vec[k-1];
		}
		vec[i] = val;
	}
}
