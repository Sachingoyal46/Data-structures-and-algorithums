
#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main()

{
    int v,e;
    cout<<"enter the value of vertices"<<endl;
    cin>>v;
    cout<<"enter the value of edges"<<endl;
    cin>>e;

    vector<int >adj[v];
    for(int i=1;i<e+1;i++)
    {   int a,b;
        cout<<"enter the end points"<<i<<endl;
        cin>>a>>b;

        adj[a].push_back(b);
        adj[b].push_back(a);


    }
    for(int i=0;i<v;i++)
    {
        int j;
        cout<<i<<":";
        for(j=0;j<adj[i].size();j++)
        {
            cout<<adj[i][j]<<",";
        }
        cout<<endl;
    }
    

    vector<int>status(v,0);
    queue<int>Q;
    status[0]=1;
    Q.push(0);
    cout<<"order of bfs is:";

    while(Q.size()!=0)
    {
        int x=Q.front();
        cout<<x<<",";
        Q.pop();
        for(int k=0;k<adj[x].size();k++)
        {
            int e=adj[x][k];
            if(status[e]==0)
            {
                status[e]=1;
                Q.push(e);
            }

        }
    }
    return 0;
}