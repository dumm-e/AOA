#include <stdio.h>
#define N 10
#define INF 999
int main(void){int a[N][N],d[N],v[N]={0},n,s,i,j,u,min;printf("Vertices (1-10): ");if(scanf("%d",&n)!=1||n<1||n>N)return 1;printf("Adjacency matrix (999=no edge):\n");for(i=0;i<n;i++)for(j=0;j<n;j++)if(scanf("%d",&a[i][j])!=1)return 1;printf("Source (0 to n-1): ");if(scanf("%d",&s)!=1||s<0||s>=n)return 1;for(i=0;i<n;i++)d[i]=INF;d[s]=0;for(i=0;i<n;i++){min=INF;u=-1;for(j=0;j<n;j++)if(!v[j]&&d[j]<min){min=d[j];u=j;}if(u<0)break;v[u]=1;for(j=0;j<n;j++)if(!v[j]&&a[u][j]>=0&&a[u][j]<INF&&d[u]+a[u][j]<d[j])d[j]=d[u]+a[u][j];}printf("Shortest distances (INF=unreachable):\n");for(i=0;i<n;i++)if(d[i]==INF)printf("%d to %d = INF\n",s,i);else printf("%d to %d = %d\n",s,i,d[i]);return 0;}
