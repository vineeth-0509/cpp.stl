#include<bits/stdc++.h>
using namespace std;

class Base{
int *x;
public:
Base():x{nullptr}{
cout<<"Default constuctor"<<endl;
}
Base(int *a):x{a}{
    cout<<"Parameterized constructor"<<endl;
}
    ~Base(){
        delete x; 
        cout<<"Destuctor"<<endl;
    }

};
int main(){
 
    Base b(new int(10));
    //calling Destructor explicitly and destructor doesnot have any parameters.
    b.~Base();
 
return 0;
}