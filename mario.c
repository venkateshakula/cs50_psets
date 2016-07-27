#include <stdio.h>
#include<cs50.h>

int main(void)
{
	int i,j,k,height;
	
	//state the height value
	printf("height: \n");
	height = GetInt();
	
	//checking boundary conditions on height value
	while(height < 0 || height > 23)
	{
		printf("height: ");
		height = GetInt();
	}
	
	for(i = 1;i <= height;i++)
	{
		for(k = 0;k <= height-i-1;k++)
		{
			printf(" ");
		}
		for(j = 0;j <= i;j++)
		{
			printf("#");
		}
		printf("\n");
	}
}