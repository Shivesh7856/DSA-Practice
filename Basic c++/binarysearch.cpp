#include <iostream> 
using namespace std; 
int binarySearch(int arr[], int low, int high, int x){
    while (low <= high) { 
        int mid = low + (high - low) / 2;  
        if (arr[mid] == x) 
            return mid; 
        if (arr[mid] < x) 
            low = mid + 1; 
        else
            high = mid - 1; 
    } 
    return -1; 
} 
int main() 
{ 
    int arr[];   
    int x ; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int counter=0;
    while(counter<n)
    {
        int x;
        std::cout<<"enter element"<<counter<<"\n";
        std::cin>>x;
        x=arr[counter];
        counter++;

    }
    int result = binarySearch(arr, 0, n - 1, x); 
    (result == -1) 
         cout << "Element is not present in array"<<endl;
         cout << "Element is present at index " << result; 
    return 0; 
}