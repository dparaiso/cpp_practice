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