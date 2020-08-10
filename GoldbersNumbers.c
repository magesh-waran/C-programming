/* GOLDENBERG number
(!)given number is odd number we have to check the condition num-2 if num-2 is also a prime number it is goldenber gnumber
(!)given number is even under even number we have to check three condition the given number is 2 we directly print the notgolden bergnumber if number is 4 we print 2,2 and the last condition is we have to find the two prime number condition is isprime(i)&&isprime(n-i)
   odd+even=odd
   even+even=even
   odd+odd=even
   2 is the only even prime number
   */
#include<stdio.h>
#include <stdlib.h>
int isprime(int num){
    for(int factors=2;factors*factors<=num;factors++)
    if(num%factors==0)
    return 1;
    return 0;
}
int main()
{
    int num,i;
    scanf("%d",&num);
    if(num%2!=0){
        if(isprime(num-2)==0)
        printf("2 %d",num-2);
        else
        printf("is not goldbergs number");
    }
    else{
        if(num==2)
        printf("is not goldbergs number");
        else if (num==4)
        printf("2 2");
        else{
            for(i=3;;i+=2){
                if(isprime(i)==0&&isprime(num-i)==0){
                printf("%d %d",i,num-i);
                break;
            }
            }
        }
        
    }
}
