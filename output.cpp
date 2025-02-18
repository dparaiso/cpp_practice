#include <iostream> 
using namespace std; 

class Test{
    private: 
        int m_x; 

    public: 
        Test(){
            m_x = 0; 
        }

        Test(int x){
            m_x = x; 
        }

        Test(Test& other){
            this->m_x = other.m_x + 1; 
        }

        int getX(){
            return m_x;
        }

        void setX(int x){
            m_x = x; 
        }

    };

int main(){
    Test t; 
    cout << "t = " << t.getX() << endl; 

    t.setX(4); 
    cout << "t = " << t.getX() << endl; 

    Test s(t); 
    cout << "s = " << s.getX() << endl; 
    return 0; 
}