#include <stdio.h>
#include <stdlib.h>
#define N 8
int x[N+1];int safe(int r,int c){int i;for(i=1;i<r;i++)if(x[i]==c||abs(x[i]-c)==abs(i-r))return 0;return 1;}int queen(int r){int c,i;if(r>N){for(i=1;i<=N;i++){for(c=1;c<=N;c++)printf(x[i]==c?"Q ":". ");printf("\n");}return 1;}for(c=1;c<=N;c++)if(safe(r,c)){x[r]=c;if(queen(r+1))return 1;}return 0;}int main(void){if(!queen(1))printf("No solution\n");return 0;}
