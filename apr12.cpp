#include <iostream> 
using namespace std; 

int sum(int k) {
    if (k > 0) {
      return k + sum(k - 1);
    } else {
      return 0;
    }
  }

int main(){
    // try {
    //     int age = 15;
    //     if (age >= 18) {
    //       cout << "Access granted - you are old enough.";
    //     } else {
    //       throw 505;
    //     }
    //   }
    //   catch (int myNum) {
    //     cout << "Access denied - You must be at least 18 years old.\n";
    //     cout << "Error number: " << myNum;
    //   }

    int result = sum(10);
    cout <<endl <<  result << endl;
}