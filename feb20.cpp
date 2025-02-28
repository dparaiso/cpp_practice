#include <iostream>
using namespace std; 

bool function(int num){
    if(num % 2 == 1 && num % 3 == 0){
        return true; 
    }
    return false;
}


bool revisted_function(int num){
    if(num % 2 == 1 && num % 3 == 0){
        return true; 
    }

    for(int i = 0; i < num; i++){
        cout << "not valid" << endl; 
    }
    return false;
}

int ascii(char num){
    return (int)num;
}

int main(){

    // first question
    cout << "this is 9: " << function(9) << endl; 
    cout << "this is 4: " << function(4) << endl; 

    // second question
    char c = 'a';
    cout << "this is the ascii code" << ascii(c) << endl; 

    // int num = 5 
    // float(num) == 5.0
    // double num 9999999
    // (int)num = 999

    // third question
    cout << "this is 9: " << revisted_function(9) << endl; 
    cout << "this is 4: " << revisted_function(4) << endl;    


    return 0; 
}

// write a function that checks whether a number is odd and divisable by three

// write a function that takes in a character and returns the ascii code (typecasting)
 
// go back to the first function and edit it so that if a number is not odd or divisable by three it will print out "not valid" n (number) amount of times

/*
    expressions and interactivity 
    decision structures 
    loops and file operations 
    functions
*/

