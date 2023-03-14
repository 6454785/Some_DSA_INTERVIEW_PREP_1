#include<bits/stdc++.h>
using namespace std;

void printarray(int arr[],int n){
    cout<<"printing the given array : "<<endl;
      for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
      }
      cout<<endl;
}
void sort01(int arr[],int n){
      int left = 0 , right = n-1;
      while(left < right){
        while(arr[left]==0 && left < right){
            left++;
        }

        while(arr[right]==1 && left < right){
            right--;
        }

        if(left<right){
            swap(arr[left],arr[right]);
            left++;
            right--;
        }

      }

     cout<<"sorting the array :"<<endl;
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
     }
      
}

int main(){
    int arr[9]={0,1,1,0,0,1,1,1,0};
    
    
    printarray(arr,9);
    sort01(arr,9);

    return 0;

}