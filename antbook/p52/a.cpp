#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

int n = 4;
int w[] = {2,1,3,2};
int v[] = {3,2,4,2};
int W = 5;

int rec( int i, int j )
{
    int res;

    if( i == n ){
        res = 0;
    }else if( j < w[i] ){
        res = rec( i+1, j );
    }else{
        res = max( rec(i+1, j ), rec(i+1, j-w[i])+v[i] );
    }

    return res;
}


int main()
{
    cout << rec(0,5) << endl;
}
