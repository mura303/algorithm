#include <iostream>
#include <algorithm>
#include <vector>

struct fruit { int x, y; };

using namespace std;

int T, N;
int dp[1001];
vector<fruit> data;

int main()
{
    cin >> T;

    for( int i=0; i<T; i++ ){
        fill( dp, dp+1001, 0 );
        cin >> N;
        for( int j=0; j<N; j++ ){
            fruit f;
            cin >> f.x >> f.y;
            data.push_back(f);
        }

        dp[0] = 0;

        

    }
}
