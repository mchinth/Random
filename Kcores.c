//Bfs from adjacency list , c++ 


class Graph{
int V;
list <int> * adj; // pointer to array of adjacent list
Graph(V);
addedge(u,v);
printcores(x);
}
//for each vertix 
Graph::Graph(int V){
this.V = V;
adj = new list<int>[V];
}
// undirected graph
Graph::addedge(int u, int v){
adj[u].push_back[v];
adj[v].push_back[u];
}
Graph::printcores(int k){
vector <boolean> visited (V,false);
vector<boolean> processed(V, false);
vector <int> degree(V);
for(i=0;i<V;i++)
	degree[i]=adj[i].size();

for(s=0;s<V;s++)
{
if(processed[s]==true)
continue;
list<int> queue;
visited[s]=true;
queue.push_back(s);
while(!queue.empty())
{
s= queue.front();
list<int> ::iterator itr;
for(itr=adj[s].begin();itr!=adj[s].end();++itr)
{
if(!visited[*itr])
{
visited[*itr]=true;
queue.push_back[*itr];
}
if((degree[s]<k || degree[*itr]<k)&& processed[*itr]==false)
degree[s]--;
degree[*itr]--;
}
}
processed[s]=true;
queue.pop_front();
}

}
void main(){
//graph with 10 vertices say
Graph g= new Graph(9);
g.addedge(1,2);
.
.
.
.
int k=3;
g.printcores(3);
}