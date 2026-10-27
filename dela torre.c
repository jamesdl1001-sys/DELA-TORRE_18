#include <stdio.h>
int main()
{
   int weeks,i;
   float saving,total=0,target;
   
   printf("Enter number of weeks:");
   scanf("%d",&weeks);
   
   printf("Enter saving target:");
   scanf("%f",&target);
   for(i=1;i <= weeks;i++)
   {
   
   printf("Enter saving for week %d:",i);
   scanf("%f",&saving);
   
   total += saving;
   }
   printf("\nTotal saving: %.2f\n",total);
   printf("Final saving: %.2f\n",total);
   
   if(total >= target) {
       printf("Target achieved!\n");
   }else{
       printf("Target not achieved\n");
   }
   
   
    return 0;
}