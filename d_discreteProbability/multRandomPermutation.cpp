#include"randomPermutation.cpp"
#include"inversion.cpp"

/*
Given positive integers n and m, 
generate m random per-mutations of the first n positive integers. 
Find the number of inversions in each permutation and 
determine the average number of these inversions
return the average number of these inversions
*/

// assume n>=2,m>=1, no input check
int**multRandomPermutation(int n,int m){
    int**r=new int*[m];
    int*p=NULL;

    int seed=10;
    int randIdx=0;

    srand(seed);

    for(int j=0;j<m;j++){
        p=range(1,n);
        for(int i=n-1;i>=1;i--){
            randIdx = rand() % (i+1);
            exchange(p,i,randIdx);
        }
        //print(p,n);
        r[j]=p;
    }
    return r;
}

//输出m个数组的平均逆序对
//n为数组的长度
double averageInversion(int**r,int n,int m){
    int inversionInTotal = 0;
    for(int i=0;i<m;i++){
        inversionInTotal+=inversion(r[i],n);
    }
    return inversionInTotal/m;
}

//统计 multRandomPermutation 输出的每个数组arr中arr[idx]的分布
int *cacu(int**r,int n,int m,int idx){
    int *p=new int[n+1];
    int val=0;
    for(int i=0;i<m;i++){
        val=r[i][idx];
        p[val]++;
    }
    print(p,n+1);
    return p;
}

int main(){
    int n=50,m=100,idx=1;
    int **r=multRandomPermutation(n,m);
    printf("%f\n",averageInversion(r,n,m));
    return 0;
}