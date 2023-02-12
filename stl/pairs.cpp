#include<iostream>
#include<vector>
using namespace std;
int main()
{
    // vector<pair<int ,int>>v;
    // v.push_back(make_pair(10,20));
    // v.push_back(make_pair(30,40));
    // v.push_back(make_pair(40,50));

    // for(int i=0;i<3;i++)
    // {
    //     cout<<"("<<v[i].first<<","<<v[i].second<<")"<<",";
    // }

     vector<pair<int ,string>>v;
    v.push_back(make_pair(10,"sachin"));
    v.push_back(make_pair(30,"gopal"));
    v.push_back(make_pair(40,"akku"));

    for(int i=0;i<3;i++)
    {
        cout<<"("<<v[i].first<<","<<v[i].second<<")"<<",";
    }
    return 0;
}
 