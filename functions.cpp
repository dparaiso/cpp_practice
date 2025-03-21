#include <iostream> 
using namespace std; 

int add(int x, int y){
    return x + y;
}

int getNumber() {
    return 6; 
}

void test(){
    for(int i = 0; i < 10; i++){
        cout << i << endl; 
    }
}

void printNTimes(int n, string text){
    for(int i = 0; i < n; i++){
        cout << text << endl; 
    }
}

pair<int, int> makePair(int x, int y){
    if(x > y){
        return pair<int, int>(x,y); 
    }
    return pair<int, int>(y, x); 

}

// default value for z
int doMath(int x, int y, int z=1){
    return (x + y) * z;
}

// pass by reference
void swap(int &x, int &y){
    int temp = x; 
    x=y; 
    y=temp; 
}

// pass by pointer
void swap(int *x, int *y){
    int temp = *x; 
    *x = *y; 
    *y = temp; 
}

double getTotal(int prices[], int size, ){
    double total = 0; 
    for(int i = 0; i < size; i++){
        total += prices[i]; 
    }
    return total; 
}

int main(){
    // int res = add(2, 3); 
    // int res2 = getNumber(); 
    // cout << "\nThis is my result: " << res << endl; 
    // cout << "\nThis is my result: " << getNumber() << endl; 
    // cout << "\nThis is my result: " << getNumber() << endl; 
    // test(); 

    printNTimes(5, "tim"); 

    cout << doMath(3, 4);
    cout << makePair(2,3).first;

    double prices[] = {49.99, 15.05, 75, 9.99}; 
    int size = sizeof(prices)/sizeof(prices[0]);
    double total = getTotal(prices, size); 
    cout << "$" << total; 
    return 0; 
}