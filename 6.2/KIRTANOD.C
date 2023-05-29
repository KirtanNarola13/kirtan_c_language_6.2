#include<conio.h>
#include<stdio.h>
void main()
{
int a=1;
int n;
clrscr();
printf("Enter the number : ");
scanf("%d",&n);
do{
  if(a%2==0){
      printf("\n%d\n",a);
  }
  a++;
}
while(a<=n);

getch();
}