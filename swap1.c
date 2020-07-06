/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("\n please enter the value of a and b\n");
    scanf("%d%d",&a,&b);
    printf("\n before swap:a=%d b=%d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\n after swap::a=%d b=%d\n",a,b);
    getch();
}

