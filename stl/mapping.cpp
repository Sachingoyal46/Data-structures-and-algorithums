#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<int,string>m;  // key and data
    // m[2]="sachin";
    // m[4]="khushi";
    // m[8]="rohan";
    // m[1]="sakshi";
    // m[6]="vishal";
    // m[5]="vivek";
    m.insert({1,"sakshi"});
    m.insert({34,"rohan"});
    m.insert({22,"sachin"});
    
    m.erase(22);
   
 cout<<m.count(22);
    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
}