//stack allows to push(insert) and pop(remove)only from back.

//empty()-return whether the stack is empty-time complexity: O(1);
//size()-returns the size of the stack_time complexity:O(1);
//top()-returns a references to the top most element of the stack-time complexity:O(1);
//push(q)-adds the elements 'q' at the top of the stack-time complexity  is O(1);
//pop()-deletes the top most element of the stack-tiem complexity:O(1);
#include<bits/stdc++.h>
using namespace std;

void print(stack<int,vector<int>> stk){
    while(!stk.empty())
    {
        cout<<stk.top()<<endl;
        stk.pop();
    }
}
int main()
{
    stack<int,vector<int>> stk;
    stk.push(2);
    stk.push(3);
    stk.push(4);
    stk.push(5);
    print(stk);

    return 0;
}