#include<stdio.h>
void main()
{
	int i,largest,smallest, arr[50],num;
	printf("Enter the no. of elements in the array : ");
	scanf("%d",&num);
	printf("Enter elements of array:\n");
	for(i=0;i<num;i++)
	{
 	scanf("%d",&arr[i]);
 	}
   largest=arr[0];
   for(i=1;i<num;i++)
   {
   if (arr[i]> largest)
   {
       largest = arr[i];
   }
     
   }
   printf("largest number=%d\n",largest);
   smallest=arr[0];
   for(i=1;i<num;i++)
   {
   	if(arr[i]<smallest)	
       {
        smallest = arr[i];
       }
   }
   printf("smallest number=%d\n",smallest);

}