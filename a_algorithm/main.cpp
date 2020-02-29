#include<iostream>
#include<vector>

#include"getMax.cpp"
#include"bubbleSort.cpp"
#include"insertionSort.cpp"
#include"linerSearch.cpp"
#include"binarySearch.cpp"

using namespace std;

int main(){
	return 0;
}

void runBinarySearch(){
	vector<int>a{1,2,3,6,7,8,9,11,12,13,14,15};
	cout<< binarySearch(a,9)<<endl;
	cout<< binarySearch(a,1)<<endl;
	cout<< binarySearch(a,10)<<endl;
}

void runLinerSearch(){
	vector<int>a{1,2,9};
	cout<< linerSearch(a,9)<<endl;
	cout<< linerSearch(a,1)<<endl;
	cout<< linerSearch(a,3)<<endl;
}

void runGetMax(){
	vector<int> a{1,2,3,7,8,9,4,5,6};
	vector<int> b;
	cout << getMax( a ) << endl;
	cout << getMax( b ) << endl;
}

void runBubbleSort(){
	vector<int> a{1,2,3,7,8,9,4,5,6};
	bubbleSort( a );
	for(int i=0;i<a.size();i++){
		cout<<a[i]<<",";
	}
	cout<<endl;
}

void runInsertionSort(){
	vector<int> a{1,2,3,7,8,9,4,5,6};
	insertionSort( a );
	for(int i=0;i<a.size();i++){
		cout<<a[i]<<",";
	}
	cout<<endl;
	vector<int> b{9,8,7,6,5,4,3,2,1};
	insertionSort( b );
	for(int i=0;i<b.size();i++){
		cout<<b[i]<<",";
	}
	cout<<endl;
	
}
