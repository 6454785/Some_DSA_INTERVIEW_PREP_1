#include<bits/stdc++.h>
using namespace std;

int pivotFinding(int arr[],int n){
int s=0;
int e=n-1;
int mid= s + (e-s)/2;
while(s<e){
    if(arr[mid]>=arr[0]){
        s=mid+1;
    }
    else{
        e=mid;
    }
    mid=s+(e-s)/2;
}
return e;
}

int main(){
    int arr[5]={2,8,10,17,1};
    cout<<"finding the pivot element in the given array: "<<pivotFinding(arr,5);
    
}