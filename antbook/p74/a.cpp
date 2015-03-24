#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

const int MAX_N = 100;

int L, P, N;
int A[MAX_N+1] = {10,14,20,21};
int B[MAX_N+1] = {10,5,2,4};

int main()
{
    N = 4;
    L = 25;
    P = 10;

    A[N] = L;
    B[N] = 0;
    N++;

    priority_queue<int> que;

    int ans = 0, pos = 0, tank = P;

    for( int i=0; i<N; i++ ){
        int d = A[i] - pos;

        while( tank - d < 0 ){
            if( que.empty()){
                cout << -1 << endl;
                return 0;
            }
            tank += que.top();
            que.pop();
            ans++;
        }
        tank -= d;
        pos = A[i];
        que.push(B[i]);
    }

    cout << ans << endl;
    
    return 0;
}
