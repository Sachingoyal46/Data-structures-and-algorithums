#include<iostream>
#include<vector>
using namespace std;
int main()
{
    struct node
    {
        int data;
        struct node *next;
    };

    struct node *ht[15];
    for(int i=0;i<=14;i++)
    {
        ht[i]=NULL;
    }
    void InsEnd(struct node **list,int x) {
  struct node *q, *p;
  q =*list;
  while (q->next != NULL) {
    q = q->next;
  }
  p = getnode();
  p->info = x;
  p->next = NULL;
  q->next = p; // this is for link the insert node to the previous node
}

    void displayht()
    {
        for(int i=0;i<=14;i++)
        {
            cout<<i<<":";
            traversal(ht[i])
            cout<<endl;
        }
    }
    vector<int>ht[15];
    int x,r,n;
    cout<<"How many data elements are to be store"<<endl;
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        cin>>x;
        r=x%10;
        InsEnd(&ht[r],x);

    }
}