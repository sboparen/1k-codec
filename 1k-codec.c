#include<stdio.h>
#include<stdlib.h>
#define B 4<<17
#define F(i,n)for(i=0;i<n;i++)
#define M(a,b,c)F(i,A)v[s[i]=i]=0;F(i,a){b q=s[c];F(j,c+1)r=s[j],s[j]=q,q=r;}
#define T t[i]
#define W(a)s[y+7>>3]=0,s[y/8]+=(a)<<y%8,y++;
unsigned char s[B],t[B],u[B],q,r;
unsigned z[B],v[B],w[256][B],c,d,i,j,m,x,y;
int C(int*a,int*b){F(i,c)if(x=z[*a+i]-z[*b+i])return x;}
int main(int A,char**Y){
while(*(*Y)++)A=256;while(47-*--*Y)x=1&**Y;
if((c=1+fread(s,1,8<<x*14,stdin))<2)exit(0);
if(x){
F(i,c)z[v[i]=i]=s[i];z[c-1]=A;qsort(v,c,sizeof c,C);
F(i,c)v[i]?(T=s[v[i]-1]):(d=i);
M(c,F(x,A&&T-s[x]);T=x;,x)
y=64;F(i,c){x=T+1;F(j,8&&x>=2<<j)W(0)while(j+1)W(1&x>>j--)}
y=y+7>>3;F(i,4)s[i]=y-8>>8*i,s[4+i]=d>>8*i;
}else{
y=c=d=j=m=x=0;
F(i,4)c+=s[i]<<8*i,x+=s[4+i]<<8*i;c%=B;fread(s,1,c,stdin);
F(i,8*c){q=s[i/8]>>i%8&1;j+=!m;m=m||q;if(m){d+=d+q;if(!--j)t[y++]=d-1,m=d=0;}}
y+=!y;M(y,c=T;T=,c)
F(i,y)if(i-x)w[T][v[T]++]=i;
F(j,A){d=0;F(i,y)if(i-x&&T==j)u[m]=j,v[m++]=d++;}
x%=y--;F(i,y)s[i]=t[x=w[u[x]][v[x]]];
}main(fwrite(s,1,y,stdout),Y);}
