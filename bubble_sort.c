#include<stdio.h>
int printarray(int *A,int n){
    for(int i=0;i<n;i++){
       printf("%d \t", A[i]);
    }
    printf("/n");
}

void bubbleSort(int *A,int n)
{
    int temp;
    int isSorted=0;
    for(int i=0;i<n-1;i++){
          printf(" \n working on the pass  %d \n ",i+1);
          for(int j=0;j<n-1-i;j++){
            if(A[j]>A[j+1]){
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
          }
    }
}


int main(){
    int A[10]={10,23,43,65,32,43,12,66,98,456};
    int n=10;

    printarray(A,n);
    bubbleSort(A,n);
    printarray(A,n);
  return 0;
}