#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<int>s;
    int n;
    cout<<"enter the integer number"<<endl;
    cin>>n;
    while(n!=0)
    {
        int r;
        r=n%2;
        s.push(r);
        n=n/2;
    }

    while(!s.empty())
    {
        int p;
        p=s.top();
        s.pop();
        cout<<p;
    }
        return 0;
}