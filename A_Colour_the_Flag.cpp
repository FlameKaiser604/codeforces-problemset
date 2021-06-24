#include <bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define ll long long
#define PI 3.1415926535897932384626
#define si(x) scanf("%d", &x)
#define sl(x) scanf("%lld", &x)
#define ss(s) scanf("%s", s)
#define pi(x) printf("%d\n", x)
#define pl(x) printf("%lld\n", x)
#define ps(s) printf("%s\n", s)
#define br printf("\n")
#define fo(i, n) for (i = 0; i < n; i++)
#define Fo(i, k, n) for (i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define deb(x) cout << #x << " = " << x << endl;
#define deb2(x, y) cout << #x << " = " << x << ", " << #y << " = " << y << endl
#define deba(i, a, n) \
    fo(i, n) { cout << a[i] << " "; }
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, x) for (auto it = x.begin(); it != x.end(); it++)
#define trr(it, x) for (auto it = x.rbegin(); it != x.rend(); it +)
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());
int rng(int lim)
{
    uniform_int_distribution<int> uid(0, lim - 1);
    return uid(rang);
}

const int mod = 1'000'000'007;
const int N = 3e5;

vi v[N];
int a[N];
void solution()
{
      int n,m;
    cin>>n>>m;
    int arr[n][m];
    
    for(int i=0;i<n;i++){
      string s;
      cin>>s;
      for(int j=0;j<m;j++){
        if(s[j]=='.'){
          arr[i][j]=-1;
        }
        else if(s[j]=='R'){
          arr[i][j]=0;
        }
        else{
          arr[i][j]=1;
        }
      }
    }
    int ans1[n][m];
    for(int i=0;i<n;i++){
      bool f=0;
      if(i&1)f=1;
      for(int j=0;j<m;j++){
        if(!f)ans1[i][j]=0;
        else ans1[i][j]=1;
        f=!f;
        // cout<<ans1[i][j];
      }
      // cout<<endl;
    }
    int ans2[n][m];
    for(int i=0;i<n;i++){
      bool f=1;
      if(i&1)f=0;
      for(int j=0;j<m;j++){
        if(!f)ans2[i][j]=0;
        else ans2[i][j]=1;
        f=!f;
        // cout<<ans2[i][j];
      }
      // cout<<endl;
    }
    bool ans=1;
 
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        if(arr[i][j]!=-1 and (arr[i][j]!=ans1[i][j])){
          // cout<<arr[i][j]<<" "<<ans1[i][j]<<endl;
          ans=0;
          break;
        }
      }
      if(!ans)break;
    }
    if(ans){
      cout<<"Yes"<<endl;
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        if(ans1[i][j]==0)cout<<'R';
        else cout<<'W';
      }
      cout<<endl;
    }
    }
    else{
      ans=1;
      for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        if(arr[i][j]!=-1 and arr[i][j]!=ans2[i][j]){
          ans=0;
          break;
        }
      }
      if(!ans)break;
    }
    if(ans){
      cout<<"Yes"<<endl;
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        if(ans2[i][j]==0)cout<<'R';
        else cout<<'W';
      }
      cout<<endl;
    }
    }
    else{
      cout<<"No"<<endl;
    }
    }
 
    // cout<<endl;
}
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

   int t;
      
      cin>>t;
      
      while(t--){ 
        // cout<<"Case #"<<tt<<": ";
            solution();
            // tt++;
      }
      return 0;
}