#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int n,j,s=0;
printf("Enter the natural numbers:");
scanf("%d",&n);
{
for(j=1;j<=n;j++)
s+=j;
}
printf("Sum=%d",s);
return 0;
getch();
}
};
