BFS Traversal
Send Feedback
Given an undirected and connected graph G(V, E), print its BFS traversal.
V is the number of vertices present in graph G and vertices are numbered from 0 to V-1.
E is the number of edges present in graph G.
Input Format :
Line 1: Two Integers V and E (separated by space)
Next 'E' lines, each have two space-separated integers, 'a' and 'b', denoting that there exists an edge between Vertex 'a' and Vertex 'b'.
Output Format :
BFS Traversal (separated by space)
Constraints :
2 <= V <= 1000
1 <= E <= 1000
Sample Input 1:
4 4
0 1
0 3
1 2
2 3
Sample Output 1:
0 1 3 2

#include <iostream>
#include<queue>
using namespace std;
void bfs(int** matrix,int V){
  bool*visited=new bool[V];
  for(int i=0;i<V;i++)
  {
    visited[i]=false;
  }
   queue<int> q;
   q.push(0);
   visited[0]=true;
  while(!q.empty()){
    int cv=q.front();
    q.pop();
    cout<<cv<<" ";
  for(int i=0;i<V;i++)
  {
    if(matrix[cv][i]!=0 && !visited[i])
    {
      q.push(i);
       visited[i]=true;
}}}}
int main() {
    int V, E;
    cin >> V >> E;

  /*

  	   Write Your Code Here
	   Complete the Rest of the Program
	   You have to take input and print the output yourself
	 
  */
int** matrix=new int*[V];
  for(int i=0;i<V;i++)
  {
    matrix[i]=new int[V];
    for(int j=0;j<V;j++)
    {
      matrix[i][j]=0;
    }
  }
  for(int i=0;i<E;i++)
  {
    int V1,V2;
    cin>>V1>>V2;
    matrix[V1][V2]=1;
    matrix[V2][V1]=1; 
  }
  bfs(matrix,V);
  return 0;
}
