#include <bits/stdc++.h> 
using namespace std;

long long int findSquart(long long int n){
     int s=0;
     int e=n;
     long long int mid= s+ (e-s)/2;
     long long int ans=-1;
     if(n<2){
         return n;
     }
     while(s<=e){
         long long int square=mid*mid;
         if(square==n){
             return mid;
         }
        
         if(square<n){
            ans=mid;
             s=mid+1;
         } 
         else {
           e = mid - 1;
         }
         mid=s+(e-s)/2;
       
     }
     return ans;
}

double morePricision(int n,int pricision,int tempvar){
    double fractor=1;
    double ans=tempvar;
    for(int i=0 ; i<pricision ; i++){
     fractor=(fractor/10);
     for(double j=ans ; j*j<n ; j=j+fractor){
        ans=j;
     }
    }
    return ans;
     
}

int main(){
    int n;
    cout<<"find the square root of the number  : ";
    cin>>n;

    int tempvar=findSquart(n);
    cout<<"so the answer is :"<<morePricision(n,3,tempvar)<<endl;
    return 0;

    

}