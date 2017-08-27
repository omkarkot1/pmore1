//programe to display ascii charactos from 40 to 127.
#include<stdio.h>
#include<conio.h>
void main()
{
int i;
clrscr();                       //clear screen.
for(i=40;i<150;i++)
{
   printf("%d=%c\t",i,(char)i);//for printing ascii char upto40 to 150.
}
getch();
}
