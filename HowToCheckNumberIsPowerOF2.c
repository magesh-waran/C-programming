/*Chech given number is a power of 2 using bitwise
input:
16
output:
number is a power of 2
*/
#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    if((num&(num-1))==0)
    printf("number is a power of 2");
    else
    printf("number is not a power of 2");
}
