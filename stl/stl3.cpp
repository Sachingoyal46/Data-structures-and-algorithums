#include<iostream>
#include<queue>
using namespace std;
int main()
{
    priority_queue<int,vector<int>,greater<int>>minpq;
    minpq.push(10);
    minpq.push(20);
    minpq.push(80);
    minpq.push(50);
    minpq.push(70);
    minpq.push(30);

    int x=minpq.size();

    for(int i=0;i<x;i++)
    {
        cout<<minpq.top()<<" ";
        minpq.pop();
    }

}