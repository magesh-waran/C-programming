/*permutation of charcter in string
input:
abc
output:
abc
acb
bac
bca
cba
cab

*/
#include<stdio.h>
#include<string.h>
void swap(char a[],int s,int e){
    char t=a[s];
    a[s]=a[e];
    a[e]=t;
}
void permute(char a[],int s,int e){
    if(s==e){
        printf("%s\n",a);
        return;
    }
    for(int i=s;i<=e;i++){
        swap(a,s,i);
        permute(a,s+1,e);
        swap(a,s,i);
    }
}
int main() {
    char a[1000];
    scanf("%s",a);
    int i,j,k,l=strlen(a);
    permute(a,0,l-1);
        
}
