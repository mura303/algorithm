#include <iostream>
#include <queue>

using namespace std;

typedef long long ll;

#define MAX_N 100

int N=3, L[]={8,5,8};

void solve()
{
    ll ans = 0;

    priority_queue<int, vector<int>, greater<int> > que;
    for( int i=0; i<N; i++ ){
        que.push( L[i] );
    }

    while( que.size() > 1 ){
        int l1, l2;
        l1 = que.top();
        que.pop();
        l2 = que.top();
        que.pop();

        ans += l1 + l2;

        que.push( l1 + l2 );
        
    }

    cout << ans << endl;
}


int main()
{
    solve();
}
