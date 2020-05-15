#include<bits/stdc++.h>
using namespace std;

stack<int> s;
void addEdge(vector<int> *a,vector<int> *b ,int u,int v)
{
    a[u].push_back(v);
    b[v].push_back(u);
}
void SecondDFS(vector<int> *c,int i,int *visited)
{
visited[i]=1;
cout<<i;
vector<int>::iterator ptr;
for(ptr=c[i].begin();ptr<c[i].end();ptr++)
    {
        if(visited[(*ptr)]==0){
            SecondDFS(c,*ptr,visited);

        }

    }
}
void DFS(vector <int> *c,int *visited,int i)
{
    visited[i]=1;
    vector<int>::iterator ptr;
    for(ptr=c[i].begin();ptr<c[i].end();ptr++)
    {
        if(visited[(*ptr)]==0){
            DFS(c,visited,*ptr);
              s.push(*ptr);
        }

    }
}
int main()
{
     vector<int>a[9];
    vector<int>b[9];
    vector<int>::iterator p;

    addEdge(a,b,0,3);
    addEdge(a,b,0,4);
    addEdge(a,b,1,0);
    addEdge(a,b,2,0);
    addEdge(a,b,3,1);
    addEdge(a,b,3,2);
    addEdge(a,b,5,1);
    addEdge(a,b,5,6);
    addEdge(a,b,6,7);
    addEdge(a,b,7,8);
    addEdge(a,b,8,7);
    addEdge(a,b,8,4);
   int visited[9]={0};
   for(int i=0;i<9;i++)
    {
      if(visited[i]==0)
        {
        DFS(b,visited,i);
        s.push(i);
        }
    }
    int k;
    int visited_new[9]={0};
    while(!s.empty())
    {
       if(visited_new[s.top()]==0)
       {
         SecondDFS(a,s.top(),visited_new);
         s.pop();
         cout<<endl;
       }
       else
        s.pop();
    }

}
