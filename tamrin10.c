#include<stdio.h>
#include<conio.h>
#include<string.h>
void copy(char*str1,char*str2);
int main(){
char s1[5],s2[5];
printf(" Enter String1: ");
scanf("%s",s1);
printf(" Enter String2: ");
scanf("%s",s2) ;
copy(s1,s2);
getch();
return 0 ;
}
void copy(char*str1,char*str2){
int i;
char *savestr1=str1;
for (i = 0; *str1; i++)
*(str2 + i) = *str1++;
*(str2 + i) = '\0';
printf("String1 is :%s\n",savestr1);
printf("String2 is :%s ",str2);
}