#include <stdio.h>
int main(void) {
 int a[50],n,i,j,min,temp;
 printf("Enter number of elements: "); if(scanf("%d",&n)!=1||n<1||n>50)return 1;
 printf("Enter elements: "); for(i=0;i<n;i++)if(scanf("%d",&a[i])!=1)return 1;
 for(i=0;i<n-1;i++){min=i;for(j=i+1;j<n;j++)if(a[j]<a[min])min=j;temp=a[i];a[i]=a[min];a[min]=temp;}
 printf("Sorted array: ");for(i=0;i<n;i++)printf("%d ",a[i]);printf("\n");return 0;
}
