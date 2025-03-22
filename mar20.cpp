#include <iostream> 

using namespace std; 


bool menuFunction(){
    int status = 3; 
    cin >> status; 
    if(status == 3){
        return true; 
    }else{
        return false; 
    }

    return false; 
}

bool optionONE();
bool optionONE();
bool optionONE();
bool optionONE();

int main(){
    int num = -1; 

    cout << endl; 
    while(num < 0 || num > 3){
        cout << "pick a number between from 1-3" << endl; 
        cin >> num; 
    }

    // approach 1 switch case 
    switch(num){
        case 1: 
        break; 

        case 2: 
        break; 

        case 3: 
        break; 

        default: 
        break;
    } 

    // approach 2 if else

    if(num == 1){       
        runthisFunction(); 
    }else if (num == 2){
        runThisOneInstead();
    }else if (num == 3){
        runThisOne(); 
    }

    // approach 3
    bool endProgram = false; 

    while(!endProgram){
        endProgram = menuFunction();
    }



    return 0; 
}