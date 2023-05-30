#include<stdio.h>
#include<conio.h>
void main ()
{
int i;
int a=-1;
int b=1;
int c;
int n;
clrscr();
printf("Enter the number of your last range : ");
scanf("%d",&n);
for(i=1;i<=n;i++){
    c=a+b;
    a=b;
    b=c;
    printf("%d\t",c);
    }
}
getch();
}
