#include <stdio.h>
#define N 10
#define INF 999
int main(void){int a[N][N],n,i,j,k;printf("Vertices (1-10): ");if(scanf("%d",&n)!=1||n<1||n>N)return 1;printf("Adjacency matrix (999=no edge):\n");for(i=0;i<n;i++)for(j=0;j<n;j++)if(scanf("%d",&a[i][j])!=1)return 1;for(k=0;k<n;k++)for(i=0;i<n;i++)for(j=0;j<n;j++)if(a[i][k]<INF&&a[k][j]<INF&&a[i][k]+a[k][j]<a[i][j])a[i][j]=a[i][k]+a[k][j];printf("Shortest path matrix (999=unreachable):\n");for(i=0;i<n;i++){for(j=0;j<n;j++)printf("%d ",a[i][j]);printf("\n");}return 0;}
