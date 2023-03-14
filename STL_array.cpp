#include<iostream>
#include<array>
#include<vector>
#include<queue>

using namespace std;

int main(){

/*
        ******************************STL array **************************************
    int arr[3]={2,5,6};
    array<int,4>a={5,8,6,9};

    int size=a.size();
    cout<<"find the first element of array  "<< a.front()<<endl;
    cout<<"find the last element of array  "<< a.back()<<endl;
    cout<<"find the value whose index is given "<<a.at(2)<<endl;
    cout<<"if array is empty then specify 0 otherwise 1 "<<a.empty()<<endl;

 */   
 //      *********************STL vector ***************************************

/*

 vector <int >a;
   cout<<"capacity->"<<a.capacity()<<endl;  
   a.push_back(1);
   cout<<endl;
    a.push_back(5);
   cout<<endl;
    a.push_back(7);
   cout<<endl;
    a.push_back(2);
   cout<<endl;
   cout<<"capacity->"<<a.capacity()<<endl; 
   cout<<"size->"<<a.size()<<endl; 
   cout<<"first element->"<<a.front()<<endl; 
   cout<<"last element->"<<a.back()<<endl; 
  //  for loop 
   for(int i:a){
    cout<<i<<" ";
   }
   cout<<endl;

     vector<int> t(4,3);   //t(4 is size here ,  3 is initialised in each indices  )
  /*for(int i=0;i<4;i++){
  cout<<t[i]<<" ";}*/
 /*  
  for(int i:t){
   
    cout<<i<<" ";
  }
  cout<<endl;

   t.pop_back();
                                        
    for(int i:t){
   
    cout<<i<<" ";
  }

  */

//                   *************************priority queue **********************************************


//max heap  
priority_queue<int> maxi ;

//min heap

priority_queue<int ,vector<int >,greater<int >>mini ;

maxi.push(2);
maxi.push(4);
maxi.push(6);
maxi.push(0);
int n=maxi.size();
for(int i=0;i<n;i++){
   cout<<maxi.top()<<" ";
   maxi.pop();
}
cout<<endl;

mini.push(2);
mini.push(4);
mini.push(6);
mini.push(0);
int m=mini.size();
for(int i=0;i<m;i++){
   cout<<mini.top()<<" ";
   mini.pop();
}
























    
}