#include<bits/stdc++.h>
using namespace std;

int BinarySearch(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    int mid=(s+e)/2;
    while(s<=e){
        if(arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
        mid=(s+e)/2;
        
    }
    return -1;

}
int main(){
    int even[5]={2,4,6,8,10};
    int odd[5]={1,3,5,7,9};
    int value=BinarySearch(even,5,10);
    cout<<"In which index does 10 lies :  "<<value<<endl;
    int value2=BinarySearch(odd,5,18);
    cout<<"In which index does 18 lies :  "<<value2<<endl;

}
