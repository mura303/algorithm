#include <iostream>
#include <vector>

using namespace std;

int N, M;
vector<int> denom;
int dp[50001];
#define INF 99999999

int main()
{
    cin >> N >> M;
    fill( dp, dp+50001, INF );
    for( int i=0; i<M; i++ ){
        int c;
        cin >> c;
        denom.push_back(c);
    }

    dp[0] = 0;

    for( int i=1; i<=N; i++ ){
        for( int j=0; j<M; j++ ){
            if( denom[j] <= i ){
                dp[i] = min( dp[i-denom[j]]+1, dp[i] );
            }
        }
    }

    cout << dp[N] << endl;

    
}
