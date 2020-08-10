/*TO PRINT 2 POWER NUMBER WITHOUT USING LOOP OR RECURSION
input
5
output
32
explanation
2^5 = 32
*/
int main(){
int n;
scanf("%d",&n);
printf("%d",(2<<n-1)); //or (1<<n)
}
