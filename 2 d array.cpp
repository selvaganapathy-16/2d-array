#include<stdio.h>
 main()
 {
 	int pointer[3][3];
 	int i,j,m=3,n=3,sum=0;
 	printf("enter the elements\n");
 	for(i=0;i<3;i++)
 	{
 	  for(j=0;j<3;j++)
 	  {
 	  	scanf("%d",(*(pointer + i)+j));
	   }
	 }
	 printf("elements are\n");
	 for(i=0;i<3;i++)
 	{
 	  for(j=0;j<3;j++)
 	  {
 	  	printf("%d\t",*(*(pointer + i)+j));
	   }
	   printf("\n");
	 }
	 
	 for(i=0;i<3;i++)
	 {
	 		sum=sum + pointer[i][i];
	 }
	 printf("sum of diagonal elements are\t%d",sum);
 	return 0;
 }
