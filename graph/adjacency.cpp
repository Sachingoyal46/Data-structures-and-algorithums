#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int main()
{
    int v,e;
    cout<<"enter the vertices"<<endl;
    cin>>v;
    cout<<"enter the edges"<<endl;
    cin>>e;
    vector<int >adl[v];
    for(int i=1;i<e+1;i++)
    {   
        cout<<"enter points";
        int a,b;
        cin>>a>>b;
        adl[a].push_back(b);
        adl[b].push_back(a);

    }
    for(int i=0;i<v;i++)
    {
        cout<<i<<":";
        for(int j=0;j<adl[i].size();j++)
        {
            cout<<i<<adl[i][j];
        }
        cout<<endl;
    }


queue<int >q;
q.push(1);

}