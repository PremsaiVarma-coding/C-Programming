#include<stdio.h>
#include<string.h>
struct data
{
    int age;
    char gen;
};

int main()
{
    int num,i,kil,tsum[100],total=0;
    char arr[10];
    scanf("%d",&num);
    
    struct data tic[num];
    for(i=0;i<num;i++)
    {
        scanf("%d %c",&tic[i].age,&tic[i].gen);
    }
    printf("Enter (SAC)for Second AC or (TAC) for Third AC or (SC) for Second class :");
    getchar();
    scanf("%s",arr);
    
    
    if(strcmp("SAC",arr)==0)
    {
        printf("Please enter the number of kilometers you want to travel :");
        scanf("%d",&kil);
        for(i=0;i<num;i++)
        {
            tsum[i]=0;
            if(tic[i].age>6 && tic[i].age<12)
            {
                tsum[i]= 0.5*kil*50;
                
            }
            else if(tic[i].age>=12 && tic[i].age<55)
            {
                tsum[i]= 50*kil;
                
            }
            else if(tic[i].age>=55 && tic[i].gen == 'F')
            {
                tsum[i]= 0.5*kil*50;
                
            }
            else if(tic[i].age>=60 && tic[i].gen == 'M')
            {
                tsum[i]= 0.5*kil*50;
                
            }
            else if(tic[i].age>=55 && tic[i].age<60 && tic[i].gen== 'M' )
            {
                tsum[i]= 50*kil;
               
            }
          
            
            
        }
        for(i=0;i<num;i++)
       {
        total=total+tsum[i]; 
       }
       printf("The total amount is %d",total);
    }
    
    
    else if(strcmp("TAC",arr)==0)
    {
        printf("Please enter the number of kilometers you want to travel :");
        scanf("%d",&kil);
        for(i=0;i<num;i++)
        {
            tsum[i]=0;
            if(tic[i].age>6 && tic[i].age<12)
            {
                tsum[i]= 0.5*kil*25;
                
            }
            else if(tic[i].age>=12 && tic[i].age<55)
            {
                tsum[i]= 25*kil;
                
            }
            else if(tic[i].age>=55 && tic[i].gen == 'F')
            {
                tsum[i]= 0.5*kil*25;
                
            }
            else if(tic[i].age>=60 && tic[i].gen == 'M')
            {
                tsum[i]= 0.5*kil*25;
                
            }
            else if(tic[i].age>=55 && tic[i].age<60 && tic[i].gen== 'M' )
            {
                tsum[i]= 25*kil;
               
            }
          
            
            
        }
         for(i=0;i<num;i++)
       {
        total=total+tsum[i]; 
        }
        printf("The total amount is %d",total);
    }
   
    
    else if(strcmp("SC",arr)==0)
    {
        printf("Please enter the number of kilometers you want to travel :");
        scanf("%d",&kil);
        for(i=0;i<num;i++)
        {
            tsum[i]=0;
            if(tic[i].age>6 && tic[i].age<12)
            {
                tsum[i]= 0.5*kil*15;
                
            }
            else if(tic[i].age>=12 && tic[i].age<55)
            {
                tsum[i]= 15*kil;
                
            }
            else if(tic[i].age>=55 && tic[i].gen == 'F')
            {
                tsum[i]= 0.5*kil*15;
                
            }
            else if(tic[i].age>=60 && tic[i].gen == 'M')
            {
                tsum[i]= 0.5*kil*15;
                
            }
            else if(tic[i].age>=55 && tic[i].age<60 && tic[i].gen== 'M' )
            {
                tsum[i]= 15*kil;
               
            }
          
            
            
        }
    }
    for(i=0;i<num;i++)
    {
        total=total+tsum[i]; 
    }
    printf("The total amount is %d",total);
    return 0;
    
}
