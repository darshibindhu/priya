#include<stdio.h>
#include<conio.h>
void main()
{
int p,r;
char i;
printf("Enter the character")
scanf("%c",&i);
p=(i=='a'||i=='e'||i=='i'||i=='o'||i=='u');
r=(i=='A'||i=='E'||i=='I'||i=='O'||i=='U');
if(p||r)
{
printf("Vowel");
}
else
{
printf("Consonant");
}
getch();
}
