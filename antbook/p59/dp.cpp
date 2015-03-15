#include <iostream>

using namespace std;

int item_number=3;
int total_weight=7;
int w[] = {3,4,2};
int v[] = {4,5,3};

int dp[100][100];
    

void solve()
{
    for( int i=0; i<item_number; i++ ){
        for( int j=0; j<= total_weight; j++ ){
            if( j<w[i]){
                dp[i+1][j] = dp[i][j];
            }else{
                dp[i+1][j] = max(dp[i][j], dp[i+1][j-w[i]] + v[i] );
            }
        }
    }
}

int main()
{
    solve();
    cout << dp[item_number][total_weight] << endl;
}
