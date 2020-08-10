/*TO FIND WHETHER NUMBER IS KAPRIKER NUMBER
INPUT
45
OUTPUT
KAPERKAR NUMBER
EXAPANATION
45^2=2025
split the number and add them when we get the input then the number is kaprekar number
20+25=45*/
#include<stdio.h>
int main(){
    int n,sq,flag=0,b=10;
    scanf("%d",&n);
    sq=n*n;
    while(sq/b){
        if(sq/b+sq%b==n)
            flag=1;
        b=b*10;
    }
    (flag==1)?printf("KAPREKAR NUMBER"):printf("NOT A KAPREKAR NUMBER");
}
