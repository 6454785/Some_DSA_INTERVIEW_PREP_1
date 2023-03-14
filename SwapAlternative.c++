#include <bits/stdc++.h>
using namespace std;

//approach 1:
void swaparray(int arr[],int size){
    int temp;
    for(int i=0;i<size;i+=2){
        if(i+1<size){
           temp=arr[i+1];
           arr[i+1]=arr[i];
           arr[i]=temp;
        }
    }

}
//approach 2:
/* void swaparray(int arr[],int size){

    for(int i=0;i<size;i+=2){
        if(i+1<size){
          swap(arr[i],arr[i+1]); 
        }
    }

}*/

void printarray(int arr[],int size){
    for(int i=0;i<size;i++){
       cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main(){
    int even[6]={0,4,3,2,1,5};
    int odd[7]={1,2,5,6,7,8,9};

   swaparray(even,6);
   printarray(even,6);

   cout<<endl;

   swaparray(odd,7);
   printarray(odd,7);
   return 0;

}
