/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
    for(int i=0;i<=9;i++){
        int count=0;
        int temp=n;
        while(temp>0){
            int digit =temp%10;
            if(digit==i){
                count++;
            }
            temp=temp/10;
        }
        if(count>0){
            printf("%d = %d \n",i,count);
        }
    }
    return 0;
}
