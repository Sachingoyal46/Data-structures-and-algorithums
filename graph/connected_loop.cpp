#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int DFS_visited(vector<int>adj[],vector<int>&status,int i,int element)
{
   
   status[i]=1;
   cout<<i;
   element=element+1;
   for(int j=0;j<adj[i].size();j++)
   {
    if(status[adj[i][j]]==0)
    {
        DFS_visited(adj,status,adj[i][j],element);
    }
   }
   return element;
}
//*****************************************************
void DFS(vector<int>adj[],int n)
{
    vector<int>status(n,0);
    vector<int>elementinconnectedcomponent;
    int count =0;
    
    for(int i=0;i<n;i++)
    {
        if(status[i]==0)
        {
            int element=0;
           int ele= DFS_visited(adj,status,i,element);
            count=count +1;
            elementinconnectedcomponent.push_back(ele);
            
        }
    }
   cout<<"no of connected commponent"<<count<<endl;
   for(int i=0;i<count;i++)
   {
    cout<<"component"<<i+1<<"has"
    <<elementinconnectedcomponent[i]<<"elements";
   }
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
   for(int i=0;i<e;i++)
   {    
    int a,b;
    cout<<"enter the endpoints of edges"<<i<<":";
    cin>>a>>b;
    adj[a].push_back(b);
    adj[b].push_back(a);
   }
 for(int i=0;i<n;i++)
    {
        int j;
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