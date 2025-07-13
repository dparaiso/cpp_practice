#include <iostream> 
using namespace std; 
// pass by pointer
void swap(int *x, int *y){
    int temp = *x; 
    *x = *y; 
    *y = temp; 
}

void badSwap(int x){
    x = 9; 
}

void goodSwap(int* x){
    *x = 9; 
}

int main() {
    int x = 1; 
    int* realX = &x; 
    int y = 9; 
    int* realY = &y; 

    // badSwap(realX);
    // goodSwap(realX);
    swap(realX, realY); 
    cout << endl << "Here are the results: " << *realX << endl; 
    cout << endl << realX << endl << realY; 
    return 0; 
}