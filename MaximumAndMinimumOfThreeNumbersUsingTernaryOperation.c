/*maximum and minimum of three numbers using ternary condition
input:
10 6 17
output:
max:17 min:6
*/
#include<stdio.h>
int main(){
    int a,b,c;
    int max,min;
    scanf("%d %d %d",&a,&b,&c);
    max=(a>b&&a>c)?a:b>c?b:c;
    min=(a<b&&a<c)?a:b<c?b:c;
    printf("max:%d min:%d",max,min);
    
}
