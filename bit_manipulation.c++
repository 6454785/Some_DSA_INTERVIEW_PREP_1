#include<bits/stdc++.h>
using namespace std;
bool givenNumberIsPowerOfTwo(int n){
        if(n==0){
            return 0;

        }

        return (ceil(log2(n))==floor(log2(n)));
}

//driver code

int main(){
    
    givenNumberIsPowerOfTwo(31)? cout<<"yes"<<endl : cout<<"no"<<endl;
    givenNumberIsPowerOfTwo(32)? cout<<"yes"<<endl : cout<<"no"<<endl;

    return 0;
}


    

