#include <iostream> 
#include <iomanip> 
using namespace std; 

int main(){
    int age = 0; 
    cout << "How old are you? "; 
    cin >> age; 

    // Check for minor or senior
    const int ADULT = 19; 
    const int SENIOR = 65; 
    if (age < ADULT){
        cout << "you are a minor in BC" << endl; 
    }

    if (age >= SENIOR){
        int yearsASenior = age - SENIOR; 
        cout << "You are a senior in BC" << endl;
        cout << "You have been a senior for " << yearsASenior << endl; 
        cout << "How does it feel to be a senior? : "; 
        string word; 
        cin >> word; 
        cout << "I can see how it would be " << word << "!" << endl; 
    }
    return 0; 
}