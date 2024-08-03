// std::set<T> objectName;
// 1.set is an associative conatianer that conatains a sorted set of unique objects of type key
// 2.It is usually implemented using red-black Trees.
// 3.Insertion,Removal,search have logirathmic complexity.
// 4.if we want to store user defined data type in set then we will have to provide compare functons so that we can store
// them in sorted order.
// 5.we can pass the order of sorting while constructing set object.

// BOTTOM LINE:
// it store unique elements and they are stored in sorted order(A/D)
// Associative container set,multiset,map,multimap.

#include <bits/stdc++.h>
#include<functional>
using namespace std;
class person
{
public:
    float age;
    string name;
    bool operator<(const person &rhs) const
    {
        return age < rhs.age;
    }
    bool operator>(const person &rhs) const
    {
        return age > rhs.age;
    }
};
int main()
{
    set<person, std::greater<person>> Set = {{30, "vineeth"}, {25, "sunny"}, {22, "john"}};

    for (const auto &e : Set)
    {
        cout << e.age << " " << e.name << endl;
    }
    set<person, std::less<person>> Set = {{30, "vineeth"}, {25, "sunny"}, {22, "john"}};
    for (const auto &e : Set)
    {
        cout << e.age << " " << e.name << endl;
    }

    return 0;
}