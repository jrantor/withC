#include<stdio.h>

main (){
int a[10] = {5,10,20,10,15}, i,n,c=0;
scanf("%d \n",&n);
for (i=0;i<5;i++){
 if(n==a[i]){
     c++;
 printf("%d is found \n", n);
}
 else{
   continue;
 }
}
return 0;
}
