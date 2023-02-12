#include<iostream>
#include<queue>
using namespace std;
int main()
{
    priority_queue<int>maxpq;
    maxpq.push(78);
    maxpq.push(33);
    maxpq.push(18);
    maxpq.push(93);
    maxpq.push(58);
    maxpq.push(13);
cout<<"maximum priority queue";
    while(!maxpq.empty())
    {
        cout<<maxpq.top()<<endl;
        maxpq.pop();

    }
    cout<<"mininmum priority queue";


     priority_queue<int,vector<int>,greater<int>>minpq;
    minpq.push(78);
    minpq.push(33);
    minpq.push(18);
    minpq.push(93);
    minpq.push(58);
    minpq.push(13);

    while(!minpq.empty())
    {
        cout<<minpq.top()<<endl;
        minpq.pop();

    }
    return 0;
    
    
    
    
}

