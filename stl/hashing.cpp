#include<iostream>
#include<vector>
using namespace std;

int main()
{   
    int n,x;
    vector<int>ht[15];
    cout<<"how many data element are to be stored"<<endl;
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        cout<<"enter the data"<<endl;
        cin>>x;
        int r=x%10;
        ht[r].push_back(x);

    }
   for(int i=0;i<n;i++)
    {
        cout<<i<<"=";
        for(int j=0;j<ht[i].size();j++)
        {
            cout<<ht[i][j]<<" ";
        }
        cout<<endl;
    }
}