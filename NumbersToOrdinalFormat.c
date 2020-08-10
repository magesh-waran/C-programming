/*NUMBERS TO ORDINAL FORMAT
input:
7
output:
7th
*/
#include<stdio.h>
int main(){
int n,x,y;
scanf("%d",&n);
printf("%d",n);
x=n%10;
y=n%100;
if(x==1&&y!=11)
printf("st");
else if(x==2&&y!=12)
printf("nd");
else if(x==3&&y!=13)
printf("rd");
else
printf("th");
}
