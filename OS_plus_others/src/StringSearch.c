#include<stdio.h>

#include<string.h>

int main()
{
 char ch[100],key[100];
 int i=0,j=0;

 printf("Enter a String: \n");
 gets(ch);

 printf("\nEnter a word to search: \n");
 gets(key);

 while(ch[i]!='\0')
 {
     if(ch[i]==key[j] && key[j]!='\0' && ch[i]!=' ')
     {
         j++;
     }
    else{
    j=0;
    }
    i++;
 }

 if(j==strlen(key))
 {
     printf("\n Word Found \n");
 }
 else{
  printf("\n Word not Found \n");
 }
 return 0;
}
