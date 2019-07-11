#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

#define MAX_N 100

int N, W;
vector<int> values, weights;

int dp[10001][101];

int rec( int ci, int cw )
{
    if( dp[cw][ci] != -1 ) return dp[cw][ci];
    
    int res;
    if( ci == N ){
        res = 0;
    }else if( cw < weights[ci] ){
        res = rec( ci+1, cw );
    }else{
        res = max( rec(ci+1, cw ), rec(ci+1, cw-weights[ci]) + values[ci] );
    }

    dp[cw][ci] = res;
    return res;
    
}


int main()
{
    for( int i=0; i<10001; i++ ){
        for( int j=0; j<101; j++ ){
            dp[i][j] = -1;
        }
    }
    cin >> N >> W;

    for( int i=0; i<N; i++ ){
        int v, w;
        cin >> v >> w;
        values.push_back(v);
        weights.push_back(w);
    }

    cout << rec(0,W) << endl;
    
}
