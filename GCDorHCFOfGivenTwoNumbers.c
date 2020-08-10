/*GCD or HCF of given two numbers using euclidean theorem
input:
12 6
output:
6
*/
#include<stdio.h>
int gcd(int a,int b){
    return b==0?a:gcd(b,a%b);
}
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",gcd(a,b));
}
