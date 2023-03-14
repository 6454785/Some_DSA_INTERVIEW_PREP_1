#include <bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
   
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    cout << "reverse of the array : " << endl;
     for (int i = 0; i <= size-1; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
}

void printArray(int arr[], int size)
{
    cout << "printing the array : " << endl;
    for (int i = 0; i <= size-1; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
}

int main()
{
    int arr[] = {12, 1, 4, 5, 7, 8, 9};
    printArray(arr, 7);
    reverseArray(arr, 7);
    
     return 0;
}
