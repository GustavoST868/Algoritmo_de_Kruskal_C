//used libraries
#include <stdio.h>
#include <stdlib.h>

//edge definition structure
typedef struct{
    int origin, destiny, value;
}Edge;


//graph definition structure
typedef struct{
    int V, E;
    Edge* edge;
}Graph;

//function to create the graph
Graph *createGraph(){
    //dynamic graph allocation
    Graph* graph = (Graph*)malloc(sizeof(Graph));
    
    graph->V = V;
    graph->E = E;
     //dynamic edge allocation
    graph->edge = (Edge*)malloc(sizeof(Edge));
    return graph;
}

//function to find
int found(int father[],int i){
    if(father[i]==-1){
        return i;
    }
    return found(father,father[i]);
}

//function to join
void join(int father[],int x, int y){
    int xset = found(father,x);
    int yset = found(father,y);
    father[xset] = yset;

//function to compare
int compare(const void* a,const void* b){
    Edge* a1 = (Edge*)a;
    Edge* b1 = (Edge*)b;
    return ai->value - b1->value;
}

//function for Kruskal algorithm
void Kruskal(Edge* edge){
    int V = graph->V;
    Edge result[V];
    int e = 0;
    int i = 0;
    
    qsort(graph->edge,graph->E,sizeof(graph->edge[0]),compare);
    
    int *father = (int*)malloc(sizeof(int));
    
    for(int v = 0;v<V;v++){
        father[v] = -1;
        
        //definition that the graph must have n-1 edges
        while(e<V-1 && i<graph->E){
            Edge next = graph->edge[i++];
            int x = found(father,next.origin);
            int y = found(father,next.destiny);
            
            //being different,they do not form cycles
            if(x!=y){
                result[e++] = next;
                join(father,x,y);
            }
        }
    }
    free(father);
    
    printf("Arvore Geradora Minima:\n");
    for(int i=0;i<E;i++){
        printf("Origem: %d\nDestino:%d\n Peso:%d",re.origin,result.destiny,&graph->edge[i].value);
    }
}


int main()
{
    return 0;
}
