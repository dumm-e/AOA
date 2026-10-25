#include <stdio.h>
#define N 10
#define INF 999
int main(void){int a[N][N],v[N]={0},n,i,j,k,u,w,min,cost=0;printf("Vertices (1-10): ");if(scanf("%d",&n)!=1||n<1||n>N)return 1;printf("Adjacency matrix (999=no edge):\n");for(i=0;i<n;i++)for(j=0;j<n;j++)if(scanf("%d",&a[i][j])!=1)return 1;v[0]=1;for(i=0;i<n-1;i++){min=INF;u=w=-1;for(j=0;j<n;j++)if(v[j])for(k=0;k<n;k++)if(!v[k]&&a[j][k]>=0&&a[j][k]<min){min=a[j][k];u=j;w=k;}if(w<0){printf("Graph is disconnected\n");return 0;}printf("%d - %d : %d\n",u,w,min);cost+=min;v[w]=1;}printf("Minimum cost = %d\n",cost);return 0;}
