#include <stdio.h>
#define N 20
#define WMAX 100
int main(void){int wt[N+1],val[N+1],dp[N+1][WMAX+1],n,W,i,w,x,y;printf("Items (0-20): ");if(scanf("%d",&n)!=1||n<0||n>N)return 1;printf("Weights: ");for(i=1;i<=n;i++)if(scanf("%d",&wt[i])!=1||wt[i]<0)return 1;printf("Profits: ");for(i=1;i<=n;i++)if(scanf("%d",&val[i])!=1)return 1;printf("Capacity (0-100): ");if(scanf("%d",&W)!=1||W<0||W>WMAX)return 1;for(i=0;i<=n;i++)for(w=0;w<=W;w++){if(i==0||w==0)dp[i][w]=0;else if(wt[i]<=w){x=val[i]+dp[i-1][w-wt[i]];y=dp[i-1][w];dp[i][w]=x>y?x:y;}else dp[i][w]=dp[i-1][w];}printf("Maximum profit = %d\n",dp[n][W]);return 0;}
