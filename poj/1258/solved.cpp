/*
Agri-Net
Time Limit: 1000MS
Memory Limit: 10000K
Total Submissions: 47421
Accepted: 19625

Description

Farmer John has been elected mayor of his town! One of his campaign promises was to bring internet connectivity to all farms in the area. He needs your help, of course. 
Farmer John ordered a high speed connection for his farm and is going to share his connectivity with the other farmers. To minimize cost, he wants to lay the minimum amount of optical fiber to connect his farm to all the other farms. 
Given a list of how much fiber it takes to connect each pair of farms, you must find the minimum amount of fiber needed to connect them all together. Each farm must connect to some other farm such that a packet can flow from any one farm to any other farm. 
The distance between any two farms will not exceed 100,000. 
Input

The input includes several cases. For each case, the first line contains the number of farms, N (3 <= N <= 100). The following lines contain the N x N conectivity matrix, where each element shows the distance from on farm to another. Logically, they are N lines of N space-separated integers. Physically, they are limited in length to 80 characters, so some lines continue onto others. Of course, the diagonal will be 0, since the distance from farm i to itself is not interesting for this problem.
Output

For each case, output a single integer length that is the sum of the minimum length of fiber required to connect the entire set of farms.
Sample Input

4
0 4 9 21
4 0 8 17
9 8 0 16
21 17 16 0
Sample Output

28
*/
#include <iostream>

using namespace std;

#define MAX_V 101
#define INF 99999999

int data[MAX_V][MAX_V];
int mincost[MAX_V];
bool used[MAX_V];
int n;

void solve()
{
    for( int i=0; i<MAX_V; i++ ){
        mincost[i] = INF;
        used[i] = false;
    }
    mincost[0] = 0;
    int res = 0;

    while(true){
        int v=-1;
        for( int u=0; u<n; u++ ){
            if( !used[u] && (v==-1|| mincost[u] < mincost[v] ) ) v = u;
        }

        if( v == -1 ) break;
        used[v] = true;
        res += mincost[v];

        for( int u=0; u<n; u++ ){
            mincost[u] = min(mincost[u], data[v][u] );
        }
    }
    cout << res << endl;
}

int main()
{
    while( cin >> n ){

        for( int y=0; y<n; y++ ){
            for( int x=0; x<n; x++ ){
                cin >> data[y][x];
            }
        }

        solve();
        
    }
    
}
