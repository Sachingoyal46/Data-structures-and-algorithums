#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
    v.push_back(10);
    v.push_back(34);
    v.push_back(33);
    v.push_back(20);
    v.push_back(56);
    v.push_back(18);
    v.push_back(55);
    
    for (auto i:v)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());

    //binery search
    cout<<binary_search(v.begin(),v.end(),55)<<endl;


    for (auto i:v)
    {
        cout<<i<<" ";
    }
cout<<endl;
    int a=10,b=20,c=98;
    cout<<max(max(a,b),c)<<endl;
    
    cout<<a<<" "<<b<<endl;
    swap(a,b);
    cout<<a<<" "<<b;
}
