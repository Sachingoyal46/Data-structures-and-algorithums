#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<char>l;
    l.push_back('a');
    l.push_back('b');
    l.push_back('c');
    l.push_back('d');
    l.push_back('e');
    l.push_front('g');
    l.push_front('h');
    l.pop_front();
    l.pop_back();
    cout<<l.size();

   
    

    // for(auto i:l)
    // {
    //     cout<<i<<" ";
    // }
}