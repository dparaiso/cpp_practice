#include <iostream>
using namespace std; 

bool function(int num){
    if(num % 2 == 1 && num % 3 == 0){
        return true; 
    }
    return false;
}

int main(){

    cout << "this is 9: " << function(9) << endl; 
    cout << "this is 4: " << function(4) << endl; 
    return 0; 
}

// write a function that checks whether a number is odd and divisable by three

// write a function that takes in a character and returns the ascii code (typecasting)
 
// write a file io function 
/*
    expressions and interactivity 
    decision structures 
    loops and file operations 
    functions
*/