/*        *
         **
        ***
       ****
      *****
     ******
    *******
   ********
  *********
 **********
 
*/

#include<stdio.h>

int main()
{
	int n,row,space,star;
	printf("\n Enter the no of rows ");
	scanf("%d",&n);
	printf("\n ");
	for(row=1;row<=n;row++)
	{
	   for(space=1;space<=n-row;space++)
	        printf(" ");
	        
	   for(star=1;star<=row;star++)
	        printf("*");
	   
	   printf("\n ");
	}
	return 0;
}
