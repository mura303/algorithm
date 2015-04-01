#include <iostream>

using namespace std;

#define MAX_V 100
#define MAX_E 100
#define INF 10000000

struct edge{ int from, to, cost; };

edge es[MAX_E];
int d[MAX_V];
int V, E;

void shortest_path(int s)
{
    for( int i=0; i<V; i++ ) d[i] = INF;
    d[s] = 0;
    while(true){
        bool update = false;
        for( int i=0; i<E; i++ ){
            edge e = es[i];
            if( d[e.from] != INF && d[e.to] > d[e.from] + e.cost ){
                d[e.to] = d[e.from] + e.cost;
                update = true;
            }
        }
        if( ! update ) break;
    }
}

int main()
{
    cin >> V >> E;

    for( int i=0; i<E; i++ ){
        cin >> es[i].from >> es[i].to >> es[i].cost;
    }

    shortest_path(0);

    cout << d[0] << ":" << d[1] << ":" << d[2] << ":" << d[3] << endl;
    
}
