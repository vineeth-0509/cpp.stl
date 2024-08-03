#include<bits/stdc++.h>
using namespace std;
class point{
    double x;
    double y;
    public:
    point(){ x=0;y=0;
    cout<<"Default constructor is called:"<<endl;
    }
    point(double x,double y){ x=x;y=y;
    cout<<"Parameterized constructor is called"<<endl;
    }
    point(const point& rhs){ x=rhs.x;y=rhs.y;
    cout<<"copy constructor is called"<<endl;
    }
    double getx(){
        return x;
    }
    double gety(){
        return y;
    }
};
int main(){
point p1;
point p2(1.3,3.4);
point p3=p1;
cout<<p2.getx()<<endl;
cout<<p2.gety()<<endl;
return 0;
}