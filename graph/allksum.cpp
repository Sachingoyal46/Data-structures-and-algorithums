#include<iostream>
#include<vector>
using namespace std;
int main()
{
    // vector<int >v;
    // cout<<"memory allocated"<<v.capacity()<<endl;
    // v.push_back(10);
    // v.push_back(20);
    
    // cout<<"memory allocated"<<v.capacity()<<endl;
     
    // v.push_back(30);
    // v.push_back(40);

    // cout<<"memory allocated"<<v.capacity()<<endl;
    // v.push_back(50);
    // v.push_back(100);

    // cout<<"memory allocated"<<v.capacity()<<endl;

   
    // cout<<"no of the elements"<<v.size()<<endl;

    // for(auto i:v)
    // cout<<i<<endl;
    // v.pop_back();
    // for(auto i:v)
    // cout<<i<<endl;

//  vector<int >v(5,0);//memory mai 5 size ki array or zerro sai initialize hogi
//     cout<<"memory allocated"<<v.capacity()<<endl;
//     v.push_back(10);
//     v.push_back(20);
    
    
//     cout<<"memory allocated"<<v.capacity()<<endl;
//     cout<<"no of the elements"<<v.size()<<endl;

//     for(auto i:v)
//     cout<<i<<endl;
    // v.pop_back();
    // for(auto i:v)
    // cout<<i<<endl;

vector<pair<int ,int>>v;
v.push_back(make_pair(1234,98));
v.push_back(make_pair(1234,95));
v.push_back(make_pair(15634,96));
v.push_back(make_pair(1674,94));
v.push_back(make_pair(1234,98));
v.push_back(make_pair(7847,86));
v.push_back(make_pair(7893,76));
v.push_back(make_pair(8997,74));
cout<<v.capacity()<<endl;
cout<<v.size()<<endl;
for(int j=0;j<v.size();j++)
{
  cout<<v[j].first;
  cout<<","<<v[j].second<<endl;
}
    // cout<<"memory allocated"<<v.capacity()<<endl;
    // v.push_back(10);
    // v.push_back(20);
    
    
    // cout<<"memory allocated"<<v.capacity()<<endl;
    // cout<<"no of the elements"<<v.size()<<endl;

    // for(auto i:v)
    // cout<<i<<endl;


    
}