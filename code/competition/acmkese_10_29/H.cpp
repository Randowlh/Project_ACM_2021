#include<iostream> 
#include<cstring>
#include<unordered_map>
using namespace std;
const int b = 131;
const int MAXN = 1e5 + 5;
#define rep(i,a,b) for(int i=(a);i<=(b);i++)
#define map unordered_map
typedef unsigned long long ull;

ull h[MAXN], pw[MAXN]; // h[k]存储字符串前k个字母的哈希值, pw[k]存储 b^k mod 2^64
//这里的模数M取的就是ull的上限2^64
char str[MAXN];
void init(int n){//初始化 
    pw[0] = 1;
    for (int i = 1; i <= n; i ++ ) {
        h[i] = h[i-1]*b + str[i];//做每个前缀的哈希值 
        pw[i] = pw[i-1]*b;//预处理b^k的值 
    }
}
// 计算子串 str[l ~ r] 的哈希值
ull get(int l, int r) {
    return h[r] - h[l-1]*pw[r-l+1];
}

map<ull,int> mp;
map<ull,int> pre;

int main() {
    int b;
    scanf("%d%s",&b,str+1);//这样读入字符串第一位从1开始 
    int n = strlen(str+1);
    init(n);
    int now;
    int res = n;

    rep(l,2,b){
        mp.clear();
        pre.clear();
        int maxx = 0;
        rep(i,1,n-l+1){
            now = get(i,i+l-1);
            if(pre[now]<i){
                mp[now]++;
                maxx = max(maxx,mp[now]);
                pre[now] = i+l-1;
            }
        }
        res = min(res,n-maxx*(l-1));
    }
    cout<<res<<endl;
    return 0;
}