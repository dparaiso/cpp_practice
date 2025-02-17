#include <iostream> 
#include <string> 
using namespace std; 

void fillarr(int* arr){
    for(int i = 0; i < 10; i++){
        arr[i] = 0; 
    }
    return; 
}

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    string arr2[] {"tim", "is", "great"};  
    int y[10]; 
    fillarr(y); 
    for(int i = 0; i < 10; i++){
        cout << y[i] << endl;

    }
}
// https://stackoverflow.com/questions/3473438/return-array-in-a-function