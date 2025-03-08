#include <iostream>
using namespace std; 

void counter(int n ){
    for (int i = 0; i <= n; i++){
        cout << i << endl; 
    }
    return; 
}

int main(){

    /////////////// For loop //////////////////////////////////
    for(int i = 0; i < 5; i += 2){
        cout << i << endl; 
    }

    // Loop with continue and break
    for(int i = 0; i < 10; i++){
        if(i == 5){
            continue;
        }

        if(i == 7){
            break; 
        }

        cout << i << endl; 
    }


    //////////////////// Do-While and While Loop //////////////////
    int i = 5; //declaration 
    do {
        cout << i << "\n";
        i+=2; // incrementing loop 
    }
    while (i < 5); // has to be true the entire time you run the loop 

    bool flag = true; 
    while(flag){
        i++; 
        if ( i == 8){
            flag = false; 
        }
        cout << i; 
    }

    cout << i << endl; 
    //////////////////  Example Loop Questions //////////////////
    // first questions
    int a = 10; 

    while(a > 0){
        a/=2; 
        cout << a*a << endl;
    }

    //second question
    // Write a function named counter that takes in an integer n and prints the numbers from 0 to n
    int num = 10;   
    counter(num);
}
 