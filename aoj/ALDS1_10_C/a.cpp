#include <iostream>
#include <string>
#include <vector>

using namespace std;

int Q;

int dp[1001][1001];

int lcs( string x, string y )
{
    dp[0][0] = 0;

    for( int i=0; i<x.size(); i++ ){
        for( int j=0; j<y.size(); j++ ){
            if( x[i] == y[j] ){
                dp[i+1][j+1] = dp[i][j] + 1;
            }else{
                dp[i+1][j+1] = max( dp[i][j+1], dp[i+1][j] );
            }
        }
    }
    
    return dp[x.size()][y.size()];
}

int main()
{
//    cin >> Q;

    Q = 1;

    for( int i=0; i<Q; i++ ){
        string x, y;
        cin >> x >> y;
        cout << lcs( x, y ) << endl;
    }
}
