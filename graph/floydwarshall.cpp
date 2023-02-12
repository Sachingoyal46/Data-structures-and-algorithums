#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
typedef pair<int ,int> ipair;

int min(int x,int y)
{
    int t;
    t=x;
    x=y;
    y=t;
}

void apspfloydwarshall(int w[][],int n)
{
    int d[n][n]={0};
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<n;j++)
        {
            if(w[i][j]==0)
            {
                if(i!=j)
                {
                    d[i][j]=INT_MAX/2;
                }
            }
            else
            {
                d[i][j]=w[i][j];
            }
        }
    }

    for(int k=1;k<n;k++)
    {
        for(int i=1;i<n;i++)
        {
            for(int j=1;j<n;j++)
            {
                int x,y;
                x=d[i][j];
                y=d[i][k] + d[k][j];
                d[i][j]=min(x,y);
            }
        }
    }
    return d;
}


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
        adj[a].push_back({b,cost});
        adj[b].push_back({a,cost});

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


vector<int>Inmst(n,0);
vector<int>key(n,INT_MAX);
vector<int>predecessor(n,-1);
key[0]=0;

priority_queue< ipair,vector<ipair>,greater<ipair>>pq;

pq.push({0,0}); //key,vertex 

for(i=1;i<n;i++)
pq.push({INT_MAX,i});

for(i=1;i<n-1;i++)
{
    pair<int ,int>x=pq.top();
    pq.pop();

    int v=x.second;
    Inmst[v]=1;

    for(int j=0;j<adj[v].size();j++)
    {
        //(vertex,weight)
        int vertex=adj[v][j].first;
        int weight=adj[v][j].second;

        if(Inmst[vertex]==0 && key[vertex]>weight)
        {
            key[vertex]=weight;
            predecessor[vertex]=v;

            //updated key value getting stored in the pq
            // pair key,vertex
            pq.push({key[vertex],vertex});

        }
    }
}



}