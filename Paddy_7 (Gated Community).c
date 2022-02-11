/*
Oxygen Towers is a Gated Community for Apartment Complex 
where there are multiple apartments (blocks), 
each apartment with fixed number of floors and each 
floor with fixed number of flats.
Following figure indicates maintenance amount as per 
Apartment’s plinth area in thousands. 
Here is the Apartment complex with 3 blocks, 
each block containing 3 floors and each floor is having 3 flats.
Maintenance amount of flat 2 in floor 1 in block 2 is 14K
Operations Manager of the Apartment complex need to 
submit monthly report quiting how much money is generated 
from Maintenance charges for each block and for overall Apartment complex.
Now being a C programmer, please assist the operations 
Manager to arrive at this output.
Block 1 Maintenace:
45
Block 2 Maintenance:
126
Block 3 Maintenance:
205
All three apartments put together, gives the figure how much 
this gated comminity is genetaing money out of Maintenance amount.
Overall Amount:
376
*/

/*
Algorithm
---------
1. Read the number of rows, columns and blocks.
2. Read Maintenance charges.
3. Add Maintenance charges of each block and display.
4. Display overall Maintenance charges.
*/
#include <stdio.h>

int main(){
	int blo[10][10][10]i,j,k,sum=0,fsum=0;

	for (i=0;i<3;i++)
	for (j=0;j<3;j++)
	for (k=0;k<3;k++)
	scanf("%d",&blo[i][k][j]);
	
	    for (i=0;i<m;i++)
	    {
		for (j=0;j<n;j++)
		for (k=0;k<o;k++)
		sum+=arr[i][j][k];
		printf("Block %d Maintenace: %d\n",i+1,sum);
		fsum+=sum;
		sum=0;
  	    }
	
	printf("Overall Amount: %d\n",fsum);
	
	return 0;
}
