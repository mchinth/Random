dfs

//stack ; order in which pushed into stack 

Class Graph{
int V;// no of verticess
list<int>  * adj;
Graph(V);
addedge(u,v);
DFS(int v);
DFSUtil(int v, boolean visited[]);

}

Graph(int V){
this.V= V;
adj= new list<int>[V]; // creating a list of V size
}

Graph::addedge(int u , int v){
adj[u].push_back(v);
//adj[v].push_back(u);
}

Graph::DFS(int v){

bool *visited= new bool[V];
for(i=0;i<V;i++)
visted[i]=false;

DFSUtil(v , visited);
}
Graph::DFSUtil(int v, boolean visited[]){

visited[v]=true;
cout<<v<<"" ;
list<int>::iterator itr;
for(itr= adj[v].begin();itr < adj[v].end();itr++)
 if(!visited[*itr])
DFSUtil(*itr , visited);
}

int main(){
Graph g =new Graph(9);
g.addedge(i,2);
.
.
.
g.DFS(2);
}