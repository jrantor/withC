#include<stdio.h>

int main()
{
 int array[20],i, n;

 printf("Enter number of elements in array\n");
   scanf("%d", &n);

   printf("Enter %d elements\n", n);

   for (i = 0; i < n; i++)
      scanf("%d", &array[i]);



 for (i=0;i<n;i++){
 printf("\n %d ", array[i]);
 }
return 0;

}
