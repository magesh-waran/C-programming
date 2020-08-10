/*number left rotation
input:
7867
output:
7786
6778
8677
7867
*/
#include<stdio.h>
#include<math.h>
int main(){
    int n,count=0,w;
    scanf("%d",&n);
    int k=n,rem,div,i;
    while(k){
        count++;
        k/=10;
    }
    for(i=0;i<count;i++){
        rem=n%10;
        div=n/10;
        n=(pow(10,count-1))*rem+div;
        printf("%d\n",n);
    }
}
