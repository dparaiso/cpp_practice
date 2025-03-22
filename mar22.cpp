#include <iostream> 

using namespace std; 
// pass by reference
void swap(int &x, int &y){
    int temp = x; 
    x=y; 
    y=temp; 
}

// pass by pointer
void swapPointer(int *x, int *y){
    int temp = *x; 
    *x = *y; 
    *y = temp; 
}

void swapBad(int x, int y ){
    int temp = x; 
    x = y; 
    y = temp; 
}
// int i = 0 up to 3
// arr[7-1- i]
//  [0, 1, 2, 3, 4, 5, 6]

void reverseOrder(int* arr, int size, bool flag){
    for(int i = 0; i < size/2; i++){
        int temp = arr[i]; 
        arr[i] = arr[size-1-i]; 
        arr[size-1-i] = temp; 
    }
}

int main(){
    // swapping by pointer
    int x = 1; 
    int y = 9; 

    swapPointer(&x, &y); 
    cout << endl << x << endl << y << endl; 

    // swappping by reference
    int a = 2; 
    int b = 4; 
    int* pointerA = &a;
    int* pointerB = &b;  
    swap(pointerA, pointerB); 

    cout << *pointerA << endl << *pointerB; 
}