//This program demonstrates using random numbers when a
// "seed" is provided for the random number generator.
#include<iostream>
#include<cstdlib> // Header file needed to use srand and rand
#include<vector>
using namespace std;

/*
Given a positive integern, 
generate a random permutation of the set{1,2,3,...,n}.
*/

void exchange(int *p,int i,int j){
    int mid=p[i];
    p[i]=p[j];
    p[j]=mid;
}
int * range(int start,int length){
    int *p=new int[length];
    for(int i=0;i<length;i++){
        p[i]=i+start;
	}
    return p;
}

void print(int *p,int length){
    printf("\nprint:");
    for(int i=0;i<length;i++){
        printf("%d,",p[i]);
    }
    printf("\n");
}

void randomPermutation(int *p,int length){
    int seed=10;
    int randIdx=0;

    srand(seed);

    for(int i=length-1;i>=1;i--){
        randIdx = rand() % (i+1);
        exchange(p,i,randIdx);
    }
}

/*
void check(int*p,int start,int length){
    randomPermutation(p,length);
    print(p,length);
}

int main()
{
    int *p=NULL;
    int start=0;
    int length=10;

    p=range(start,length);
    print(p,length);
    check(p,start,length);
    check(p,start,length);
    check(p,start,length);
    check(p,start,length);
    check(p,start,length);

    return 0;
}
*/