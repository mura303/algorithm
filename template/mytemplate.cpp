#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9+7;
const ll LINF = 1e18;
using namespace std;

#define dump(x)  cout << #x << " = " << (x) << endl;
#define YES(n) cout << ((n) ? "YES" : "NO"  ) << endl
#define Yes(n) cout << ((n) ? "Yes" : "No"  ) << endl
#define POSSIBLE(n) cout << ((n) ? "POSSIBLE" : "IMPOSSIBLE"  ) << endl
#define Possible(n) cout << ((n) ? "Possible" : "Impossible"  ) << endl

#define SANKOU(n,a,b) cout << ((n) ? (#a) : (#b) ) << endl

// https://ehafib.hatenablog.com/entry/2015/12/23/164517
#define _overload3(_1,_2,_3,name,...) name
#define _rep(i,n) repi(i,0,n)
#define repi(i,a,b) for(int i=int(a);i<int(b);++i)
#define rep(...) _overload3(__VA_ARGS__,repi,_rep,)(__VA_ARGS__)


#define FOREACH(x,a) for(auto& (x) : (a) )

#define SCOUT(x) cout<<(x)<<" "
#define ENDL cout<<endl

#define VECCIN(x) for(auto&youso_: (x) )cin>>youso_
#define VECCOUT(x) for(auto&youso_: (x) )cout<<youso_<<" ";cout<<endl

#define ALL(obj) (obj).begin(),(obj).end()

#define COUT(x) cout<<(x)<<endl
void CINT(){}
template <class Head,class... Tail>
void CINT(Head&& head,Tail&&... tail){
    cin>>head;
    CINT(move(tail)...);
}
#define CIN(...) int __VA_ARGS__;CINT(__VA_ARGS__)
#define LCIN(...) ll __VA_ARGS__;CINT(__VA_ARGS__)
#define SCIN(...) string __VA_ARGS__;CINT(__VA_ARGS__)

template <class T = ll>
T IN(){T x;cin>>x;return (x);}

template <class Head>
void VT(Head head){}
template <class Head,class Seco,class... Tail>
void VT(Head&& head,Seco&& seco,Tail&&... tail){
    seco.resize(head);
    VT(head,move(tail)...);
}
void VT2(){}
template <class Head,class... Tail>
void VT2(Head&& head,Tail&&... tail){
  VECCIN(head);
  VT2(move(tail)...);
}

template <class Head>
void VT3(Head&& head){}
template <class Head,class Seco,class... Tail>
void VT3(Head&& head,Seco&& seco,Tail&&... tail){
  seco[head]=IN();
  VT3(head,move(tail)...);
}

#define VCEACH(n,...) V __VA_ARGS__;VT(n,__VA_ARGS__);VT2(__VA_ARGS__); 
#define VCREP(n,...) V __VA_ARGS__;VT(n,__VA_ARGS__);REP(i,n)VT3(i,__VA_ARGS__);

#define P pair<int,int>
#define V vector<int>
#define M map<int,int>
#define S set<int>
#define PQ priority_queue<int>
#define PQG priority_queue<int,V,greater<int>>

#define pb(a) push_back(a)
#define mp make_pair


int main(){

    ll n = IN();
    ll m = IN();

    REP()

  return 0;
}

