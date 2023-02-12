#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int>s;
    s.insert(12);
    s.insert(2);
    s.insert(22);
    s.insert(45);
    s.insert(35);
    s.insert(29);

    for(auto i : s)
    {
        cout<<i<<" ";
    }
cout<<endl;
    // set<int>::iterator it;
    // // it=s.find(2);

    // for(it=s.begin();it!=s.end();it++)
    // {
    //     cout<<*it<<" ";
    // }
//  set<int>::iterator it;
//     it=s.find(22);

//     for(it;it!=s.end();it++)
//     {
//         cout<<*it<<" ";
//     }

s.erase(s.find(22));
set<int>::iterator it;
for(it=s.begin();it!=s.end();it++)
{
    cout<<*it<<" ";

}
cout<<endl;
cout<<"presence of 22 "<<s.count(22)<<endl;
cout<<"prsence of 45 "<<s.count(45)<<endl;

cout<<"*******************************************************************************";
cout<<endl;


set<int,greater<int>>ds;
ds.insert(23);
ds.insert(45);
ds.insert(22);
ds.insert(39);

for(auto i :ds)
{
    cout<<i<<" ";
}

set<int>:: iterator h;
 cout<<endl;
for(h=ds.begin();h!=ds.end();h++)
{
   
    cout<<*h<<" ";

}

}