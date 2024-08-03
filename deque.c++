//deque is an indexed siquence container
//1.it allows fast insertion at both beginning and end;
//2.unlike vector elements of deque are not stored continuous.
//3. it uses individual allocated fixed sized array,with additional bookkepping,meaning index based access to deque
//must perform two pointer deference,but in vector we get in one dereference
//4.The storage of a deque is automatically expanded and contracted as needed.
//5.expension of deque is cheaper than expension of vector
//6. a deque holding just one element has to allocate its full internal array (eg 8 times the object size on 64-bit libstdc++;
// 16 times the objects size or 4096 bytes,whichever is larger,0n 64-bit libc++);

//TIME COMPLEXITY
//Random access-constant O(1);
//insertion or removal of elements at the end or beginning-constant O(1);
//Insertion or removal of elements-linear O(n);

#include<bits/stdc++.h>
using namespace std;
void print(deque<int>& dqu)
{
    for(int num: dqu){
        cout<<num<<" ";
        cout<<endl;
    }
}
int main()
{
    {
        deque<int> dqu={2,3,4};
        dqu.push_front(1);
        dqu.pop_back();
        dqu.push_back(4);
        dqu.push_back(5);
        print(dqu);
        cout<<endl;
    }
    {
        deque<int> dqu={2,3,4};
        dqu.push_front(1);
        dqu.pop_back();
        print(dqu);
    }
    return 0;
}