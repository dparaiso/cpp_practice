#include <iostream> 
using namespace std; 

int add(int x, int y){
    return x + y;
}

int main(){
    int res = add(2, 3); 
    cout << "\nThis is my result: " << res << endl; 
    return 0; 
}