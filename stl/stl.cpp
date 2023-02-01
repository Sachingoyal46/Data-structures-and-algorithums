#include<iostream>
#include<bits./stdc++.h>
using namespace std;

int main()
{
set<int>s;
s.insert(2);
s.insert(3);
s.insert(4);
s.insert(5);
s.insert(6);
for(auto i:s)
{
    cout<<i<<" ";
}
cout<<endl;
// cout<<s.count(5);
set<int>::iterator it;
it=s.find(5);
for(it;it!=s.end();it++)
{
    cout<<*it<<" ";
}
cout<<endl<<endl;
s.erase(s.find(2));
for(it=s.begin();it!=s.end();it++)
{
    cout<<*it<<" ";
    
}






// set<int,greater<int>>ds;
// ds.insert(1);
// ds.insert(30);
// ds.insert(10);
// ds.insert(40);
// cout<<endl;
// for(auto i:ds)
// {
//     cout<<i<<"";

// }

}