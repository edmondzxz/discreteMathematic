#include<vector>
#include<iostream>
using namespace std;

// no input check, assume n >= r >= 1
// find all r-combinations of n integers(1,2,3 .. ,n)
// for example, output of combination(2,3) is:
//  1,2
//  1,3
//  2,3
void combination(int n,int r){
    cout << "combination:"<<n<<","<<r<<endl;
    vector<int>comb(r+1);
    int i,idx,startVal,counter=0;

    // init vector comb, 1,2, ... ,r
    for(i=1;i<=r;i++){
        comb[i] = i;
    }

    for(counter=1;;counter++){
        // print vector comb to termial
        for(i=1;i<=r;i++){
            cout << comb[i] << ",";
        } cout << endl;

        idx=r;
        for(;idx>0;idx--){
            if(comb[idx] != (idx+n-r)){
                break;
            }
        }
        startVal = comb[idx];
        if(idx==0){
            break;
        }
        for(i=idx;i<=n;i++){
            comb[i]=startVal+i-idx+1;
        }
    }
    cout << "counter:"<<counter<<endl;
}

int main(){
    combination(5,2);
    combination(1,1);
    combination(5,5);
    combination(5,4);
    return 0;
}