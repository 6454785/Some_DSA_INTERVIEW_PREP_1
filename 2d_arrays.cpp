#include<bits/stdc++.h>
using namespace std;

bool  IsPresent(int arr[][3],int target,int i,int j){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]==target)
               return 1;
        }
    }
    return 0;
}


int main(){
    cout<<"enter the value which is to be searched :"<<endl;
    int target;
    cin>>target;
    int arr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
      for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    

    if(IsPresent(arr,target,3,3)){
        cout<<"haan he "<<endl;
    }
    else{
        cout<<"nhi he yrr"<<endl;
    }

}