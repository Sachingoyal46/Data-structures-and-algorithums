#include<iostream>
#include<queue>
using namespace std;
int main()
{
    //desecending priority queue
    priority_queue<int>maxpq;
    maxpq.push(8);
     maxpq.push(6);
      maxpq.push(4);
       maxpq.push(9);
        maxpq.push(1);
         maxpq.push(0);
          maxpq.push(2);
          int x=maxpq.size();
          for(int i=0;i<x;i++)
          {
             cout<<maxpq.top()<<" ";
           maxpq.pop();
          }

        //   cout<<maxpq.top();
        //   maxpq.pop();
        //   cout<<endl;
        //   cout<<maxpq.top();
}