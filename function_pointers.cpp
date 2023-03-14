#include<iostream>
using namespace std;
void  harsh(int *p){
    cout<<p<<endl;

}

void update (int *p){
    p=p+1;
    cout<<p<<endl;
}

int sum(int *arr,int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}

int main(){
    int value=6;
    int *p=&value;

    harsh(p);

    update(p);

    int arr[]={12,43,67,4,32,5,6};
   cout<<"the sum is :"<< sum(arr+3,4)<<endl;


    return 0;
}