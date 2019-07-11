#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

#define MAX_N 100

int N, W;
vector<int> values, weights;

int dp[101][10001];


int main()
{
    cin >> N >> W;

    for( int i=0; i<N; i++ ){
        int v, w;
        cin >> v >> w;
        values.push_back(v);
        weights.push_back(w);
    }

    for( int i=N-1; i>=0; i-- ){
        for( int j=0; j<=W; j++ ){
            if( j < weights[i] ){
                dp[i][j] = dp[i+1][j];
            }else{
                dp[i][j] = max( dp[i+1][j], dp[i+1][j-weights[i]]+values[i] );
            }
        }
    }

    cout << dp[0][W] << endl;
    
}
