#include<cstdlib>
#include<iostream>
#include<random>

using namespace std;
/*
Estimate the probability that two integers selected at random  
are  relatively  prime  by  testing  a  large  number  of 
randomly selected pairs of integers
*/

// assume a>=1,b>=1
int gcd(int a,int b){
    int mid=0;
    while(a>0){
        mid=a;
        a=b%a;
        b=mid;
    }
    return b;
}

int getRandom()
{
    random_device rd("/dev/random");                              
    //cout<<"Minimum:"<<rd.min()<<endl;
    //cout<<"Maximum:"<<rd.max()<<endl;
    //cout<<"Entropy:"<<rd.entropy()<<endl;
    //cout<<"Random:"<<rd()<<endl;
    return rd();
}

int absPlus(int a){
    a = a<0 ? -a : a;
    return a+1;
}

bool randomRelativelyPrime(){
    int a=absPlus(getRandom());
    int b=absPlus(getRandom());
    int g=gcd(a,b);
    // cout << "a:" << a ;
    // cout << " , b:" << b ;
    // cout << " , gcd " << g << endl;
    return g==1;
}

// assume repeat >=1
double possible(int repeat){
    double res=0;
    for(int i=0;i<repeat;i++){
        //res+=randomRelativelyPrime();
        if(randomRelativelyPrime()){
            res++;
        }
    }
    return (double)res/(double)repeat;
}

int main(){
    cout << possible(100000) << endl;
    // first try : 0.61064  
    // second try : 0.61032
    // third try : 0.60995
    return 0;
}