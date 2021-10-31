#include <iostream> 
using namespace std; 
//function to find the majority element
void findMajority(int arr[], int size) 
{ 
    int maxCount = 0;  
    int index = -1; // sentinels 
    for(int i = 0; i < size; i++) 
    { 
        int count = 0; 
        for(int j = 0; j < size; j++) 
        { 
            if(arr[i] == arr[j]) 
            count++; 
        } 
          
       // update maxCount if the count of the current element is greater 
        if(count > maxCount) 
        { 
            maxCount = count; 
            index = i; 
        } 
    } 
      
    // if the maxCount is greater than size/2, 
    // return the corresponding element.
    if (maxCount > size/2) 
       cout << "Majority element is " <<arr[index] << endl; 
      
    else
        cout << "Majority Element does not exist" << endl; 
} 
  
// Driver code 
int main() 
{ 
    int arr[] = {1,3,4,4,1,4,4,5,8,3,7}; 
    int size = sizeof(arr) / sizeof(arr[0]); 
      
    // Calling the function 
    findMajority(arr, size); 
  
    return 0; 
} 
