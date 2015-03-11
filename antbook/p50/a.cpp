#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

vector<long long> input;
int input_length;

int main()
{
    cin >> input_length;

    for( int i=0; i<input_length; i++ ){
        int tmp;
        cin >> tmp;
        input.push_back(tmp);
    }
    
    long long ans = 0;
    int n = input_length;

    while( n > 1 ){
        int mi1 = 0, mi2 = 1;
        if( input[mi1] > input[mi2] ) swap( mi1, mi2 );

        for( int i=2; i<n; i++ ){
            if( input[i] < input[mi1] ){
                mi2 = mi1;
                mi1 = i;
            }else if( input[i] < input[mi2] ){
                mi2 = i;
            }
        }

        long long t = input[mi1] + input[mi2];
        ans += t;

        if( mi1 == n-1 ) swap( mi1, mi2 );
        input[mi1] = t;
        input[mi2] = input[n-1];
        n--;
    }

    cout << ans << endl;

    return 0;
    
}
