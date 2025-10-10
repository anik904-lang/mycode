#include <stdio.h>
#include <stdlib.h>

int main()
{

   int arr[5];

   int sum=0;

   for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    sum = sum+arr[i];
   }



   printf("The sum is%d:", sum);
   printf("\nThe average number is:%.2f",(float)sum/5);


    return 0;
}
