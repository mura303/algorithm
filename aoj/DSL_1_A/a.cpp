#include <iostream>

using namespace std;

int N, Q;

class unionfind
{
    int par[10001];
    int ran[10001];
  public:
    void init( int n )
    {
        for( int i=0; i<n; i++ ){
            par[i] = i;
            ran[i] = 0;
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
                ran[x]++;
            }
        }
    }

    int find( int x )
    {
        if( par[x] == x ) return x;
        else{
            return par[x] = find( par[x] );
        }
    }

    int same( int x, int y){
        return find(x) == find(y) ? 1 : 0;
    }
    
};




int main()
{
    unionfind uf;
    cin >> N >> Q;
    uf.init(N);

    for( int i=0; i<Q; i++ ){
        int com, x, y;
        cin >> com >> x >> y;
        if( com == 0 ){
            uf.unite( x, y );
        }else if( com == 1 ){
            cout << uf.same( x, y ) << endl;
        }
    }
    
}
