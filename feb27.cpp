#include <iostream>
using namespace std; 

int main(){
    // int i = 0; 
    // for(int i = 0; i < 5; i += 2){
    //     cout << i << endl; 
    // }

    // for(int i = 0; i < 10; i++){
    //     if(i == 5){
    //         continue;
    //     }

    //     if(i == 7){
    //         break; 
    //     }

    //     cout << i << endl; 
    // }

    int i = 5; //declaration 
    do {
        cout << i << "\n";
        i+=2; // incrementing loop 
    }
    while (i < 5); // has to be true the entire time you run the loop 

    bool flag = true; 
    while(flag){
        i++; 
        if ( i == 7){
            flag = false; 
        }
    }

    // cout << i << endl; 

    int n = 10; 

    while(n > 0)
        n/=2; 
        cout << n*n << endl; 

        cout << 1/2 << endl; 
}
