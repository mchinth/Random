//Dikshitra's algorithm 

#include<stdio.h>
void main(){
int graph[V][V];
int result[V]=INT_MAX;
int prev[V]=0;
boolean marked[V]= false;
//select the source say 1;
//src= 0 ; say 
result[src]=0;
for(i=0;i<V;i++){
// find the next shortest distance link for the given node
//first iteration always return src; 
x=find_min_distance_node(marked, result);
now mark the source and update the result array 
marked[x]=true;
for(i=0;i<V;i++){
//update the link cost : if the node is not marked , and there exists link from x to i i.e., only to connected nodes from the selected node , and when new link cost is less then the previous one 
if( marked[i]==false && graph[x][i] && graph[x][i]+result[x]<result[i]])
result[i]= graph[x][i]+result[x];
}
}
printf(result array);
}

find_min_distance_node(marked[], result[]){
min=INT_MAX;
for(i=0;i<V;i++)
if marked[i]==false && result[i]<min
{
min =result[i];
min_index= i;
}
return min_index
}