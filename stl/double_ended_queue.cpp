#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int>d;
    d.push_back(45);
    d.push_back(15);
    d.push_back(35);
     d.push_back(12);
    d.push_back(9);
    d.push_back(31);
    d.push_front(44);
    d.erase(d.begin(),d.begin()+1);
    for(auto i:d)
    {
        cout<<i<<" ";
    }

}


