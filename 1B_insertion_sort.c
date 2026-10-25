#include <stdio.h>
int main(void){int a[50],n,i,j,key;printf("Enter number of elements: ");if(scanf("%d",&n)!=1||n<1||n>50)return 1;printf("Enter elements: ");for(i=0;i<n;i++)if(scanf("%d",&a[i])!=1)return 1;for(i=1;i<n;i++){key=a[i];j=i-1;while(j>=0&&a[j]>key){a[j+1]=a[j];j--;}a[j+1]=key;}printf("Sorted array: ");for(i=0;i<n;i++)printf("%d ",a[i]);printf("\n");return 0;}
