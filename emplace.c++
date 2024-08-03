//1.all the containers supports insert and emplace operation to store data.
//2.Emplace is used to construct object in-place and avoids unnecessary copy of objects.
//3.Insert and emplace is equal for premetive data types but when we deal with heavy objects
// we should use emplace if we can for efficiency.

#include<bits/stdc++.h>
using namespace std;
class A{
    public:
    int x;
    A(int x=0): x{x} {
        cout<<"constructor"<<endl;
    };
    A(const A& rhs)
    {
        x=rhs.x;
        cout<<"Copy"<<endl;

    }

};
bool operator < (const A& lhs,const A& rhs){
    return lhs.x < rhs.x;
}
int main()
{
    set<A> Set;
    // A a(10);
   // Set.insert(A(10));
    Set.emplace(10);//construct the object inside the set,to just pass me the value 
    //you want to insert in to that object.
    return 0;
}