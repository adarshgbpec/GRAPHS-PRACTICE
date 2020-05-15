#include<bits/stdc++.h>
using namespace std;
void addEdge(vector<int> *a,vector<int> *b ,int u,int v)
{
    a[u].push_back(v);
    b[v].push_back(u);
}
int main()
{
    vector<int>a[5];
    vector<int>b[5];
    vector<int>::iterator p;

    addEdge(a,b,0,1);
    addEdge(a,b,0,3);
    addEdge(a,b,0,4);
    addEdge(a,b,2,0);
    addEdge(a,b,3,2);
    addEdge(a,b,4,1);
    addEdge(a,b,4,3);
    for(int i=0;i<5;i++)
    {
        cout<<"Vertex "<<char(65+i)<<" adjancency list is"<<endl;
  for(p=a[i].begin();p<a[i].end();p++)
  {
     cout<<char((*p)+65)<<"->";
  }
  cout<<endl;
    }
    cout<<"TRANSPOSE OF ABOVE GRAPH IS:"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<"Vertex "<<char(65+i)<<" adjancency list is"<<endl;
  for(p=b[i].begin();p<b[i].end();p++)
  {
     cout<<char((*p)+65)<<"->";
  }
  cout<<endl;
    }

}
