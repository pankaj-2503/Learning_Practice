
    #include<iostream>
    #include<math.h>
    #include<algorithm>
    #include<map>
    #include<assert.h>
    #include<vector>
    #include<set>
    #include<stack>
    #include<iomanip>
    #include<ctype.h>
    #include<cstring>
    #include<numeric>
    #include<string>
    #include<cstring>
    #include<queue>
    #include<limits.h>
    #include<unordered_map>




    using namespace std;


   #define ll long long
   #define lld long double
   #define en "\n"
   #define sp " "
   #define all(x) x.begin(),x.end()
   #define f(i,from,to) for(ll i=from;i<to;i++)
   #define fe(i,from,to) for(ll i=from;i<=to;i++)
   #define fr(i,from,to) for(ll i=from;i>=to;i--)
   #define fre(i,from,to) for(ll i=from;i>to;i--)
   #define pb(x) push_back(x)
   #define mx(v) *max_element(v.begin(), v.end())
   #define mn(v) *min_element(v.begin(), v.end())
   #define vi vector<ll>
   #define vii vector<vector<ll>>
   #define vip vector<pair<ll,ll>>
   #define no cout << "NO" << endl
   #define yes cout << "YES" << endl
   #define lb lower_bound
   #define up upper_bound
   #define pi 3.141592653589793238462
   #define sz(x) x.size();

   // ------->debugger<---------------
   #ifndef ONLINE_JUDGE
  #define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
  #else
  #define debug(x)
  #endif

  void _print(ll t) {cerr << t;}
  void _print(int t) {cerr << t;}
  void _print(string t) {cerr << t;}
  void _print(char t) {cerr << t;}
  void _print(lld t) {cerr << t;}
  void _print(double t) {cerr << t;}


  template <class T, class V> void _print(pair <T, V> p);
  template <class T> void _print(vector <T> v);
  template <class T> void _print(set <T> v);
  template <class T, class V> void _print(map <T, V> v);
  template <class T> void _print(multiset <T> v);
  template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
  template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
  template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
  template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
  template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

   //-------------------
const ll inf=1e18;

    //      ---->functions<----- 
ll gcd(long long  a, long long  b){if (b == 0){return a;}return gcd(b, a % b);}
ll lcm(long long a, long long b){return (a / gcd(a, b)) * b;}
bool is_pali(string st){int s=0,e=st.length()-1;while(s<=e){if(st[s]!=st[e]){ return false; } s++;e--;}return true;}
bool isPrime(ll n){if(n == 1) return false ;for(ll i=2; i*i<=n; i++){if(n%i==0)return false ;}return true;}
int Is(int i,string &s) {int n=s.size();return (0 <= i && i + 2 < n && s[i] == 'a' && s[i + 1] == 'b' && s[i + 2] == 'c');}
int isSquare(ll n){ll x=sqrt(n);return x*x==n;}
int good(int a[],int n){ll g=a[0]; f(i,1,n){g=gcd(g,a[i]);}return g;}
ll mod=1e9+7;
char hex(int x){ if(x<10) {return '0'+x;}else {return 'A'+(x-10);}}
bool isPowerof2(ll n){ if(n<=0) return false;if(n&(n-1)==0) return true; return false;}
bool cmp(char c,char d){if(c=='b' && d=='c') return false; else if(c=='c' && d=='b') return true; else return c<d;}

bool isvowel(char ch){
 if(ch=='a' || ch=='e') return true;
 else return false;
}

vector<bool> sieve(int max_num) {
    vector<bool> is_prime(max_num + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= max_num; ++i) {
        if (is_prime[i]) {
            for (int j = i * i; j <= max_num; j += i) {
                is_prime[j] = false;
            }
        }
    }
    return is_prime;
}

void solve(){
    ll x;cin>>x;
    ll b=1e4;
    f(i,1,1e4){
        while(i*i*i+b*b*b>x) --b;
        if(b>0 && i*i*i+b*b*b==x){
            yes;return;
        }
    }
    no;
}

int main(){
  ios_base::sync_with_stdio(false);
 cin.tie(NULL);
    // cout<<fixed<<setprecision(10);
     #ifndef ONLINE_JUDGE
 freopen("Error.txt","w",stderr);
     #endif
    
 ll t;cin>>t;
 while(t--){
     solve();
 }




 return 0;    

}          