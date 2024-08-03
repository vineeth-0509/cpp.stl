//priority_queue is a container adaptor that provides constant timw lookup of the largest or samllest element
//1.By default std::vector is the container used inside.
//2.cost of insertion and extraction is logarithmic
//3.priority_queue is implemented using make_heap,push_heap,pop_heap functions

#include<bits/stdc++.h>
using namespace std;

template<typename T> void print_queue(T& q)
{
    while(!q.empty())
    {
        cout<<q.top()<<" ";
        q.pop();
    }
    cout<< '\n';
}
int main()
{
    priority_queue<int>q;
    for(int elm:{1,8,5,6,3,4,0,9,7,2})
    {
        q.push(elm);
        print_queue(q);
    }
    {
    priority_queue<int,vector<int>,greater<int>> q2;
    for(int elm:{1,8,5,6,3,4,0,9,7,2})
    {
        q2.push(elm);
    }
    print_queue(q2);
    }
    //using lambda to compare elements
    auto cmp=[](int left,int right)
    {
        return (left)<right;
    };
    priority_queue<int,vector<int>,decltype(cmp)>q3(cmp);
    for(int elm: {1,8,5,6,3,4,0,9,7,2}){
        q3.push(elm);
    }
    print_queue(q3);

    return 0;
}