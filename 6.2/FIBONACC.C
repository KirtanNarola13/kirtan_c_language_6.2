#include<stdio.h>
#include<conio.h>
void main ()
{
int i;
int a=0;
int b=1;
int c;
int n;
clrscr();
printf("Enter the number of your last range : ");
scanf("%d",&n);
for(i=0;i<=n;i++){
if(i<=1){
    c=i;
}
else {
    c=a+b;
    a=b;
    b=c;
    printf("%d\t",c);
    }
}
getch();
}