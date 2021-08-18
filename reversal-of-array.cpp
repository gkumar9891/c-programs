
// rotation of an array[] = {1, 2, 3, 4, 5, 6}

#include <iostream>

using namespace std;

void traversal(int arr[], int arrSize) {
  
  for(int i = 0; i < arrSize; i++) {
      cout << arr[i] <<" ";
  }  
};

void rotation(int arr[], int rotation_index, int arrSize) {
    
   int devidedArray[rotation_index]; 
   

   //loop of adding elements in new array

   for(int i=0 ; i < rotation_index; i++) {
       devidedArray[i] = arr[i];
   };
   
   int j = 0; 
   
   // loop of rotation of array
   for(int i = rotation_index; i < arrSize; i++) {
    arr[j] = arr[i];
    j++;
  }
  
  //loop for addition of devided Array in previos array
  
  for(int i = 0; i < rotation_index; i++) {
      arr[j] = devidedArray[i];
      j++;
  }
  
  traversal(arr, arrSize);
    
};


int main()
{

    int arr[6] = {1, 2, 3, 4, 5, 6};
    int arrSize = sizeof(arr)/sizeof(arr[0]);
     
    rotation(arr, 2, arrSize);
    
    return 0;
}
