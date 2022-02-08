/*
In Bharath Apartments there is a beautiful culture. 
Once in 4 years, on Feb 29th, they celebrate uniquely 
by respecting and felicitating eldest person among all 
flats within their apartments. 
They have ‘m’ floors and ‘n’ flats in each floor.
Age of eldest member of each family is gathered by Mr. 
Ranga, watchman of Bharath Apartments. 
See the below table for reference considering 
Bharath apartment has 5 floors and each floor contains 5 flats.
bharathElderMembers[5][5] =
32 		24 		65 		42 		23
18 		92 		89 		96 		90
34 		35 		36 		37 		38
40 		32 		90.5 	91.5 	83
83.5 	78.3 	90.5 	98.5 	72.5
bharathElderMembers[0][0] represents age of 
eldest person of floor#0, flat#0, bharathElderMembers[4][5] 
represents age of eldest person of floot#4, flat#5, and so on…
Now being a C Programmer, please help apartment committee 
to identify which person needs to be felicitated on coming Feb 29th. 
If multiple people are there with same age, 
all needs to be felicitated.
In the above example, Floor#4, Flat#3 person needs to be felicitated.
*/

/*
Algorithm
---------
1. Read rows and columns.
2. Read age of all residents.
3. Find maximum of the resident age.
4. If age is equal to maximum age 
   display the floor and flat of the resident.
*/
#include<stdio.h>
int main()
{
    float b[10][10],max=0;
    int i,j,x,y,flo,flat;
    scanf("%d %d",&flo,&flat);
    for(i=0;i<flo;i++)
    {
        for(j=0;j<flat;j++)
        {
            scanf("%f",&b[i][j]);
        }
    }
    
    for(i=0;i<flo;i++)
    {
        for(j=0;j<flat;j++)
        {
            if(b[i][j]>=max || max==0 ){
                max=b[i][j];
                
            }
        }
    }
       for(i=0;i<flo;i++)
    {
        for(j=0;j<flat;j++)
        {
            if(max==b[i][j] ){
            printf("Floor#%d Flat#%d \n",i,j);  
            }
        }
    }
    return 0;
}
