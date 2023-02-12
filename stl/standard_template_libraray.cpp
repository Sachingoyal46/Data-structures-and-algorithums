#include<iostream>
#include<vector>
using namespace std;
int main()
{

    vector<int>v[4];
    v[0].push_back(1);
    v[0].push_back(2);
    v[0].push_back(3);
    v[0].push_back(4);

    v[1].push_back(5);
    v[1].push_back(6);
    v[1].push_back(7);

    v[2].push_back(8);

    v[3].push_back(4);
    v[3].push_back(5);
    v[2].pop_back();

    
    for(int i=0;i<4;i++)
    {
        cout<<i<<"=";
        for(int j=0;j<v[i].size();j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;







    // vector<int>v(5,2);

    // cout<<"size"<<v.size()<<endl;
    // cout<<"capacity"<<v.capacity()<<endl;

    // v.push_back(6);
    // v.push_back(7);
    
    // v.push_back(1);
    
    // cout<<"size"<<v.size()<<endl;
    // cout<<"capacity"<<v.capacity()<<endl;
    // v.push_back(2);
    
    // cout<<"size"<<v.size()<<endl;
    // cout<<"capacity"<<v.capacity()<<endl;
    
    // v.push_back(3);
    
    // cout<<"size"<<v.size()<<endl;
    // cout<<"capacity"<<v.capacity()<<endl;
    // v.push_back(4);
    
    // cout<<"size"<<v.size()<<endl;
    // cout<<"capacity"<<v.capacity()<<endl;
    // v.push_back(5);
    
    // cout<<"size"<<v.size()<<endl;
    // cout<<"capacity"<<v.capacity()<<endl;
    

    // for(int i=0;i<v.size();i++)
    // {
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;
    // for(auto i :v)
    // {
    //     cout<<i<<" ";
    // }
    // return 0;
}