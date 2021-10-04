#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i=(a);i<=(b);i++)
#define spt fixed<<setprecision
#define double long double

// ===========板子======================
const double eps = 1e-15;
int sgn(double x) {
    if( x < -eps ) return -1;
    if(x> eps)return 1;
    return 0;
}
struct vec {
    double x,y;
    vec(){x=y=0;}
    vec(double _x,double _y){x=_x,y=_y;}
    vec operator + (vec v) {return vec(x+v.x,y+v.y);} 
    vec operator - (vec v) {return vec(x-v.x,y-v.y);} 
    vec operator * (double v) {return vec(x*v,y*v);} 
    vec operator / (double v) {return vec(x/v,y/v);}
    double operator * (vec v) {return x*v.x + y*v.y;} double len() {return hypot(x,y); }
    double len_sqr() {return x*x + y*y; }
    //逆时针旋转
    vec rotate(double c) {return vec(x*cos(c)-y*sin(c),x*sin(c)+y*cos(c));}
    vec trunc (double l) {return (*this) * l / len();}
    vec rot90 () {return vec(-y,x);}
};
struct circle {
    vec c;double r;
    circle(){c=vec(0,0),r=0;}
    circle(vec _c,double _r){c=_c,r=_r;}
    vec point(double a){return vec(c.x+r*cos(a),c.y+r*sin(a));}
};
bool Quadratic(double A, double B, double C, double *t0, double *t1) {
double discrim=B*B-4.f*A*C;
if (discrim < 0.) return false;
double rootDiscrim = sqrt(discrim);
double q;
if(B<0)q=-.5f*(B-rootDiscrim);
else q = -.5f * (B + rootDiscrim);
*t0=q/A;
*t1=C/q;
if (*t0 > *t1) swap(*t0, *t1);
return true;
}

double cross(vec a,vec b) {return a.x*b.y - a.y*b.x;}
double get_angle(vec a,vec b) {return fabs(atan2(fabs(cross(a,b)),a*b));}

bool circle_line_intersection(circle c,vec a,vec b,double *t0,double *t1) {
vec d=b-a;
double A=d*d;
double B = d * (a-c.c) * 2.0;
double C = (a-c.c).len_sqr() - c.r * c.r; return Quadratic(A,B,C,t0,t1);
}
vec lerp(vec a,vec b,double t) {return a * (1-t) + b * t;}
const double PI=acos(-1.0);
double circle_triangle_intersection_area(circle c,vec a,vec b) {
if( sgn(cross(a-c.c,b-c.c)) == 0 ) return 0; vec q[5];
int len = 0;
double t0,t1;
q[len++] = a;
if( circle_line_intersection(c,a,b,&t0,&t1) ) {
if( 0 <= t0 && t0 <= 1 ) q[len++] = lerp(a,b,t0);
if( 0 <= t1 && t1 <= 1 ) q[len++] = lerp(a,b,t1); }
q[len++] = b;
double s = 0;
for(int i=1;i<len;++i) {
vec z = (q[i-1] + q[i])/2;
if( (z-c.c).len_sqr() <= c.r*c.r )
s += fabs( cross(q[i-1]-c.c,q[i]-c.c) ) / 2; else
s += c.r*c.r*get_angle(q[i-1]-c.c,q[i]-c.c) / 2; }
return s; 
}
//求交点 
double circle_polygon_intersection_area(circle c,vec *v,int n) {
    double s = 0;
    for(int i=0;i<n;++i) {
        int j = (i+1) % n;
        s += circle_triangle_intersection_area(c,v[i],v[j])*sgn(cross(v[i]-c.c,v[j]-c.c) );
    }
    return fabs(s); 
}


const int MAXN = 215;
vec poa[MAXN];//polygon
vec pob[MAXN];//work place
int n,m;
double p,q;
vec t;

inline void solve(){
    cin>>n;
    double tot_s;
    rep(i,0,n-1) cin>>poa[i].x>>poa[i].y;
    rep(i,0,n-1) tot_s += (poa[i].x*poa[(i+1)%n].y + poa[i].y*poa[(i+1)%n].x)/2;
    tot_s = fabs(tot_s);
    cin>>m;
    while(m--){
        cin>>t.x>>t.y>>p>>q;
        double l=0,r=5800;
        while(abs(r-l)>eps){
            double mid = (l+r)/2;
            double jiao = 0;
            circle tmp(t,mid);
            jiao = circle_polygon_intersection_area(tmp,poa,n);
            if( jiao*q < tot_s*(q-p) )l = mid;
            else r = mid;
        }
        cout<<spt(12)<<r<<endl;
    }
}
int main(){
    solve();
}