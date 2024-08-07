#include <iostream>
#include <vector> 
using namespace std; 

int main(){
    vector<int> v1 = {1, 2, 3}; 
    cout <<  v1[1] << endl; 
    cout << v1.back() << endl; 
    cout << v1.size() << endl; // how many it is actually holding 
    cout << v1.capacity() << endl; // capacity is not the same as the size -- how many elements it can hold
    v1.push_back(9); // adds to the end and the capacity doubles to 8 because it allocates space
    v1.pop_back(); // remove element from the end of the vector 
    v1.shrink_to_fit(); 

    v1.insert(v1.begin(), 5); //[5, 1, 2, 3, 4]

    v1.insert(v1.begin() + 1, 5); //[5, 1, 2, 3, 4] gives 1, defining another position 
    
    for (int i = 0; i < v1.size(); i++){
        cout << v1[i] << endl; 
    }

    for (auto itr = v1.begin(); itr != v1.end(); itr++){
        cout << *itr << endl; 
    }
    
}