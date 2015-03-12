#include <iostream>

using namespace std;

int weight[] = {2,1,3,2};
int value[] = {3,2,4,2};
int weight_max = 5;
int itemnum = 4;

const int WEIGHT_MAX = 100;
const int ITEM_MAX = 100;
int dp[ITEM_MAX][WEIGHT_MAX];

void make_dptable()
{
    for( int i=0; i<WEIGHT_MAX; i++ ){
        dp[itemnum][i] = 0;
    }

    for( int i=itemnum-1; i>=0; i-- ){
        for( int j=0; j<WEIGHT_MAX; j++ ){
            if( j<weight[i] ){
                dp[i][j] = dp[i+1][j];
            }else{
                dp[i][j] = max( dp[i+1][j], dp[i+1][j-weight[i]]+value[i] );
            }
        }
    }
}

int main()
{
    make_dptable();
    cout << dp[0][weight_max] << endl;
}
