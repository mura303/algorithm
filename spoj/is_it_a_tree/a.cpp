#include <iostream>

using namespace std;

#define MAX_V 10001

int N, M;
int par[MAX_V];
int ran[MAX_V];

void init( int n )
{
    for( int i=0; i<n; i++ ){
        par[i] = i;
        ran[i] = 0;
    }
}

int find( int x )
{
    if( par[x] == x ) return x;
    else{
        return par[x] = find( par[x] );
    }
}

void unite( int x, int y )
{
    x = find(x);
    y = find(y);
    if( ran[x] < ran[y] ){
        par[x] = y;
    }else{
        par[y] = x;
        if( ran[x] == ran[y] ){
            ran[x] ++;
        }
    }
}

bool same( int x, int y )
{
    return find(x) == find(y);
}

int main()
{
    cin >> N >> M;

    for( int i=0; i<M; i++ ){
        int u, v;
        cin >>  u >> v ;
        unite( u, v );
    }

    if( M != N -1 ){
        cout << "NO" << endl;
        return 0;
    }

    for( int i=1; i<N; i++ ){
        if( ! same(i,i+1) ){
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
    return 0;
}
