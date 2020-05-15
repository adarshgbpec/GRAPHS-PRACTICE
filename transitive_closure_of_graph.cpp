#include<bits/stdc++.h>
using namespace std;
void addEdge(vector <int> *a,int i,int j)
{
    a[i].push_back(j);
}
void DFS(vector<int> *a,int table[4][4],int i,int k)
{
     vector<int>::iterator p;
    table[k][i]=1;
    for(p=a[i].begin();p<a[i].end();p++)
    {
        if(table[k][*p]==0)
            DFS(a,table,*p,k);
    }
}
int main()
{
    vector<int> a[4];

    int k;
    addEdge(a,0,1);
    addEdge(a,0,2);
    addEdge(a,1,2);
    addEdge(a,2,0);
    addEdge(a,2,3);
    int table[4][4]={0};
    for(int i=0;i<4;i++)
    {
        k=i;
      DFS(a,table,i,k);
    }
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
            cout<<table[i][j]<<' ';
        cout<<endl;
    }
}
