// For simplicity, assume 
//      1. V = {0, 1, 2, ..., n-1}
//      2. Edges input as unordered pairs (from stdin)
//      3. The graph is an undirected graph
//      4. Adjacency list representation to be used

#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

class Node
{ 
  public:
  
   unsigned visited = 0; //not yet visited
   int component = -1;//component not assigned
};


using Edges=vector<list<int>>;
using Nodes=vector<Node>;

class Graph
{
  public:
    Nodes V;
    Edges E;      	
};

//read edges in "edge-list" format 
Edges getEdges( )
{ 
	unsigned u, v;
	Edges adj_list;
	
	 while (cin>>u>>v)
	 {
		 adj_list.resize(max({adj_list.size(),u+1,v+1}));
		 adj_list[u].push_back(v);
		 adj_list[v].push_back(u);		 
	  } 
	  
	  return adj_list;

}

void mainDFS(const Edges& E)
{
  Graph gr;
  
  gr.V.resize(E.size());
  
  unsigned count = 0;
  
  for(unsigned i = 0; i < gr.V.size(); i++)
    {
	   if(gr.V[i].visited == 0)
	     {
		   counter++; //less parameters to pass :-(	  
		     
	       dfs(i, E, counter);		
	      }  
	}  	
      	
  cout<<"DFS Ranks:"<<endl;
   
  for(auto v : V)
    cout<<v<<" ["<<v.visited<<"]"<<endl;    	
}
	
	
void dfs(unsigned v, const Edges& edges)
{
	V[i].visited = count;
  	for(auto w: edges[v])
  	  if (
  	
	
}

int main()
{
  Edges edges = getEdges();
  unsigned m = 0;
  
  cerr<<"Read "<<edges.size()<<" nodes "<<endl;
  
  
  for(auto e: edges)
    m+= e.size(); 


 cerr<<"Read "<<m<<" edges "<<endl;
 
 mainDFS(edges);
}



