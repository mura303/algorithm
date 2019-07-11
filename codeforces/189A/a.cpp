#include <iostream>
#include <vector>

using namespace std;

int N;
int dp[4001][4001];

int main()
{
    vector<int> spec(3);
    cin >> N >> spec[0] >> spec[1] >> spec[2];

    for( int i=0; i<=N; i++ ){
        for( auto it = spec.begin(); it != spec.end(); ++it ){
            if( *it <= i ){
                dp[i] = max( dp[i], dp[i-*it]+1 );
            }
        }
    }

    for( int i=0; i<=N; i++ ){
        cout << dp[i] << " " ;
    }
    cout << endl;

    cout << dp[N] << endl;
    
}
