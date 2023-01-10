 #include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
typedef pair<int ,int> ipair;

 
int main()
{
    int n,e,i,a,b,cost;
    cout<<"enter the number of the vertices";
    cin>>n;
    vector<pair<int ,int>>adj[n];
    cout<<"enter the number of he edges";
    cin>>e;

    for(i=1;i<=e;i++)
    {
        cout<<"enter the end points of the edges followed by cost"<<i<<":";
        cin>>a>>b>>cost;
        adj[a].push_back({b,cost}); //for directed graph
        // adj[b].push_back({a,cost});

    }

    for(i=0;i<n;i++)
    {
        int j=0;
        cout<<i<<":";
        for(int j=0;j<adj[i].size();j++)
        {
            cout<<"("<<adj[i][j].first<<",";
            cout<<adj[i][j].second<<"), ";

        }
        cout<<endl;
    }
//***************************************************************************

vector<int>Inpq(n,1);
vector<int>distance(n,INT_MAX);
vector<int>predecessor(n,-1);
// key[0]=0;

priority_queue< ipair,vector<ipair>,greater<ipair>>pq;
int source;
cout<<endl<<"enter the source vertex:";
cin>>source;

pq.push({0,source}); //key,vertex 
distance[source]=0;

for(i=1;i<n && i!=source;i++)
pq.push({INT_MAX,i});

for(i=1;i<n-1;i++)
{
    pair<int ,int>x=pq.top();
    pq.pop();

    int v=x.second;
    Inpq[v]=0;

    for(int j=0;j<adj[v].size();j++)
    {
        //(vertex,weight)
        int vertex=adj[v][j].first;
        int weight=adj[v][j].second;

        if(Inpq[vertex]==1 && distance[vertex]>weight + distance[v])
        {
            distance[vertex]=weight + distance[v];
            predecessor[vertex]=v;

            //updated key value getting stored in the pq
            // pair key,vertex
            pq.push({distance[vertex],vertex});

        }
    }
}

cout<<"shortest path is"<<endl;
cout<<"vertex key"<<" predecessor"<<endl;

for(i=0;i<n;i++)
{
    cout<<i<<"\t";
    cout<<distance[i]<<"\t";
    cout<<predecessor[i];
    cout<<endl;

}
}