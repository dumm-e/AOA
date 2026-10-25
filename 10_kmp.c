#include <stdio.h>
#include <string.h>
int main(void){char s[100],p[50];int lps[50],i,j,len,k,found=0;printf("Enter text: ");if(scanf("%99s",s)!=1)return 1;printf("Enter pattern: ");if(scanf("%49s",p)!=1)return 1;k=(int)strlen(p);len=0;i=1;lps[0]=0;while(i<k){if(p[i]==p[len]){len++;lps[i++]=len;}else if(len)len=lps[len-1];else lps[i++]=0;}i=j=0;while(s[i]){if(s[i]==p[j]){i++;j++;}if(j==k){printf("Pattern found at index %d\n",i-j);found=1;j=lps[j-1];}else if(s[i]&&s[i]!=p[j]){if(j)j=lps[j-1];else i++;}}if(!found)printf("Pattern not found\n");return 0;}
