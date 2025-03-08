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
    int arr2[2][3] = {{1, 1, 1}, {2, 2, 2}};
    cout << endl; 

    // cout << arr[0] << endl; 
    // cout << arr[4] << endl; 




    
    for(int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            cout << arr2[i][j] << endl; 
        }
    }

    // string arr2[] {"tim", "is", "great"};  
    // int y[10]; 
    // fillarr(y); 
    // for(int i = 0; i < 10; i++){
    //     cout << y[i] << endl;

    // }
}
// https://stackoverflow.com/questions/3473438/return-array-in-a-function