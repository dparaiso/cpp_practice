#include <iostream> 
using namespace std; 

int sum(int k) {
    if (k > 0) {
      return k + sum(k - 1);
    } else {
      return 0;
    }
  }

  // fibbonacci sequence 
int main(){
  
    int result = sum(10);
    cout <<endl <<  result << endl;
 
}