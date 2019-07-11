#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>
#include <string>

using namespace std;

int N;

string doit( string s )
{
    for( int i=0; i<s.length(); i++ ){
        if( s[i] == '+' ){ s[i] = '-'; }
        else if( s[i] == '-' ){ s[i] = '+'; }
        else{ cerr << "wrong state" << endl; } 
    }

    reverse(s.begin(), s.end());
    return s;
    
}

string chomp( string s )
{
    for( int i=s.length()-1; i>=0; i-- ){
        if( s[i] == '+' ) s.erase(i,1);
        else break;
    }

    return s;
}

int main()
{
    cin >> N;

    for( int i=0; i<N; i++ ){
        string s;
        
        cin >> s;

        int counter;
        for( counter = 0;
             count(s.begin(), s.end(), '-' ) > 0;
             counter++ ){
            s = chomp(s);
            s = doit(s);
        }
        printf( "Case #%d: %d\n", i+1, counter );
    }
        
}
