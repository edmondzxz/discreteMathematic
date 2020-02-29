#include<iostream>
#include<bitset>
#include<string>
using namespace std;

// find the next bit string after the input string 
// without transforming bin data to dec data
// for example:
// "0000" next is "0001"
// "0100" next is "0101"
// "0111" next is "1000"
// "1111" next is "0000"
string nextBitString(string inputStr){
    bitset<64>bits(inputStr);
    int i=bits.size()-1;
    for(i=0;i<=bits.size()-1;i++){
        //cout << i << " : " << bits[i] << endl;
        if(bits[i]==0){
            break;
        }
    }
    bits[i]=1;
    for(int j=0;j<i;j++){
        bits[j]=0;
    }
    //cout << bits.to_string() << endl;
    return bits.to_string();
}

// find the next bit string after the input string 
// first transform bin to dec
// then get the next bit string
string nextBitString2(string inputStr){
    bitset<64>bits(inputStr);
    unsigned long val = bits.to_ulong();
    val++;
    bitset<64>nextBits(val);
    return nextBits.to_string();
}

int main(){
    string str1("11011");
    string str2("11011");
    for(int i=0;i<1000;i++){
        if(str1 != str2){
            cout << "i:" << i << ","  ;
            cout << ", str1:" << str1 ; 
            cout << ", str2:" << str2 ;
            cout << ", wrong" << endl ;
        }
        str1=nextBitString(str1);
        str2=nextBitString2(str2);
    }
    cout << "ok" << endl;
    return 0;
}