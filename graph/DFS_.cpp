

#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

 int DFS_visited(vector<int>adj[],vector<int>&status,int i)
{
   
   status[i]=1;
   cout<<i;
   for(int j=0;j<adj[i].size();j++)
   {
    if(status[adj[i][j]]==0)
    {
        DFS_visited(adj,status,adj[i][j]);
    }
   }
}
//*****************************************************
void DFS(vector<int>adj[],int n)
{
    vector<int>status(n,0);
    for(int i=0;i<n;i++)
    {
        if(status[i]==0)
        {
            DFS_visited(adj,status,i);
        }
    }
    // status[0]=1;
}


//********************************************************


int main()

{
   int n,e;
   cout<<"enter the number of vertices";
   cin>>n;
   vector<int>adj[n];
   cout<<"enter the number of edges";
   cin>>e;
   for(int i=1;i<e;i++)
   {    
    int a,b;
    cout<<"enter the endpoints of edges"<<i<<":";
    cin>>a>>b;
    adj[a].push_back(b);
    adj[b].push_back(a);
   }
 for(int i=0;i<n;i++)
    {
        int j=0;
        cout<<i<<":";
        for(j=0;j<adj[i].size();j++)
        {
            cout<<adj[i][j]<<",";
        }
        cout<<endl;
    }
    cout<<"order of DFS is:";
    DFS(adj,n);
    return 0;
    



    
    
}