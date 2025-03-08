#include <iostream> 
#include <string> 
#include <fstream> 
using namespace std; 

int main(){
    // int arr[5] = {1, 2, 3, 4, 5};
    // cout << endl; 
    // cout << arr[0] << endl; 
    // cout << arr[4] << endl; 
    // int sum = 0; 
    // for(int i = 0; i < 5; i++){
    //     sum += arr[i]; 
    // }

    // cout << sum << endl; 
    cout << endl; 
    ifstream infile; 
    infile.open("test.txt");
    if(infile.is_open()){
        cout << "open" << endl; 
    }else{
        cout << "can't open" << endl; 
    }
    infile.close();
    return 0; 
}