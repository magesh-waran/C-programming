/*TO FIND LCM OF TWO NUMBER
input:
50 30
output:
150*/
#include<stdio.h>
int main(){
    int a,b,i;
    scanf("%d %d",&a,&b);
    for(i=a;i%b!=0;i+=a);
    printf("%d",i);
}
