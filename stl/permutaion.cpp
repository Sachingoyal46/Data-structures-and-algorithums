#include<iostream>
using namespace std;
int main()
{
    int i,j,k;
    string n;
    cout<<"enter the number"<<endl;
    cin>>n;
    
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            for(k=0;k<=2;k++)
            {   
                if(i!=j && j!=k &&k!=i)
                cout<< i <<  j <<k<<endl;
            }
        }
    }
    return 0;
}