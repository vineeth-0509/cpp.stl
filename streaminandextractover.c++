//extraction operator
//stream insertion
//points:
//1.when we need overlaod<<& >>?
// cout<<(user defined datatype) or cin>>(user defined type).
//2.it cant be class member function,you have to make it friend function of your class.

#include<bits/stdc++.h>
using namespace std;
class Test{
    int x;
    public:
    Test(int x=0):x{x}{

    }
    friend istream& operator>>(istream& input,Test& obj);
    friend ostream& operator<<(ostream& output,Test& obj);

};
istream& operator>>(istream& input,Test& obj){
    input>>obj.x;
    return input;
}
ostream& operator<<(ostream& output,Test& obj){
    output<<obj.x<<endl;
    return output;

}

int main(){
    Test t;
    cin>>t;
    cout<<t;
    return 0;
}