#include<cstdlib>
#include<iostream>

int inversion(int*p,int length){
    int result=0,i=0,j=0;
    for(i=0;i<length-1;i++){
        for(j=i+1;j<length;j++){
            if( p[i] > p[j] ){
                result++;
            }
        }
    }
    return result;
}

