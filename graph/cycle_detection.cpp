#include<iostream>
#include<bits/stdc++.h>
#define true 1
#define false 0
using namespace std;
//****************************************************************

int vertex_visit(vector<int>adj[],vector<int>&status,int i)
{
    if(status[i]==true)
    
        return true;
    status[i]=true;
    int flag=false;
    for(int j=0;j<adj[i].size();j++)
    {
        flag=vertex_visit(adj,status,adj[i][j]);
        if(flag==1)
        return true;

    }
    return false;

}
//*****************************************************
int cycle_detection(vector<int>adj[],int n)
{
    int check=false;
    vector<int>status(n,0);
    for(int i=0;i<n;i++)
    {
        status[i]=true;
        for(int j=0;j<adj[i].size();j++)
        {
            check=vertex_visit(adj,status,i);
            if(check==1)
            return true;
        }
        status[i]=false;
    }
    return false;
}

//****************************************************
int main()
{
    int n,e,a,b,i;
    cout<<"enter the number of vertices";
    cin>>n;
    vector<int>adj[n];

    cout<<"enter the number of edges";
    cin>>e;

    for(i=1;i<=e;i++)
    {
        cout<<"enter the end points of edges"<<i<<":";
        cin>>a>>b;
        adj[a].push_back(b); // for directed graph

    }

    for(i=0;i<n;i++)
    {
        int j=0;
        cout<<i<<":";
        for(int j=0;j<adj[i].size();j++)
        {
            cout<<adj[i][j]<<",";
            
        }
        cout<<endl;
    }


int check=cycle_detection(adj,n);

if(check==1)
{
    cout<<"cycle is exist in the graph";
}
else
{
    cout<<"a cycle does not exist in the graph";
}

return 0;
}
