#include<stdio.h>
void main(void){
char a[100],b[100];
int i=0,j=0;
printf("\n Enter first string:");
gets(a);
printf("\nEnter second string:");
gets(b);
while(a[i]!='\0')
i++;
while(b[j]!='\0')
{
a[i]=b[j];
j++;
i++;
}
a[i]='\0';
printf("\n concatenated string is %s",a);

}