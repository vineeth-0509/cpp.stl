#include<bits/stdc++.h>
using namespace std;

class Entity{
    public:
    float x,y;

    Entity(){
        cout<<"Constructor called: "<<endl;
        x=0.0f;
        y=0.0f;
    }
    
     Entity(float x,float y)
     {
       x;
       y;
     }
    
    


    
    void print(){
        cout<<x<<" "<<y<<endl;
    }
};

int main(){
    Entity e(10.0f,5.0f);
    
    // cout<<e.x<<endl;
    e.print();
    cin.get();

    Entity e1;
    
}
