/*
 ============================================================================
 Name        : CGOLNEW.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	setbuf(stdout,NULL);

	int i,j,z,k;
	int arr[4][4];
printf("Enter the elements of the array containing 1 and 0 only:\n");
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			scanf("%d",&arr[i][j]);
		}}
// first generation array

printf("CGOL stage 1\n");
//for printing the array
	for(i=0;i<4;i++){
	for(j=0;j<4;j++){
		printf(" %d ",arr[i][j]);
	}
					printf("\n");

	}
//after the first generation how many generation should be continued
printf("Enter the number of generation");
scanf("%d",&k);
//rules implementation for next generations
        for(z=1;z<=k;z++)
        {
          for(i=0;i<=4;i++)
          {
	for(j=0;j<=4;j++)
	{
		int total=0;
	total=total+arr[i-1][j-1];
	total=total+arr[i-1][j];
	total=total+arr[i-1][j+1];
	total=total+arr[i][j-1];
	total=total+arr[i][j+1];
	total=total+arr[i+1][j-1];
	total=total+arr[i+1][j];
	total=total+arr[i+1][j+1];



	if(arr[i][j]==0)
	{
	                switch(total)
	                {
	                case 1:
	                 case 2:
		             arr[i][j]=0; //has two or less than 2 live neighbors remains dead or gets dead
		              break;
	                 case 3:
	              	arr[i][j]=1; //gets alive due to three live neighboring cells
	              	break;
	                case 4:
	                case 5:
	                case 6:
	                case 7:
	                 case 8:
		            arr[i][j]=0; //still remains dead

	          }
	}

	else if(arr[i][j]==1)
	{
		switch (total)
		{
		           case 1:
	               case 2:
		           arr[i][j]=0; //two or less than 2 live neighbors still gets dead
		           break;
	               case 3:
		           arr[i][j]=1; //get alive as three neighbors are alive
		           break;
	               case 4:
	               case 5:
	               case 6:
	               case 7:
	               case 8:
		           arr[i][j]=0; //live cell dies due to overcrowding
	     }
	}

	}
}
	printf("\n");
	printf("Next stage\n");
	for(i=0;i<4;i++) //printing the next generations
	{
		for(j=0;j<4;j++)
		{
			printf(" %d ",arr[i][j]);
		}
						printf("\n");
		}
        }

}
