/*
Sanjana, Srujana and Samatha are best friends. Samatha’s father is a farmer. For every Pongal
Holidays, Sanjana and Srujana visit Samatha’s parents house and celebrate the festival in the
village along with crops, cows and what not!!
Due to recent floods, Samatha’s family severely got effected economically, they are not in a
position to pay the college fee.
Sanjana and Srujana thought deeply about it and finally came to one decision. They started looking
at their annual savings.
Given both of their savings, they want to join left-half of Sanjana’s savings and right half of the
Srujana’s savings and give that amount to Samatha as small contribution from them. 

Algorithm
---------
1.Read the number.
2.Check whether the given two numbers are even or not by if loop and proceed to next step.
3.Take the count of the number of digits in the given two numbers.
4.Take the left half part of the first number using for loop.
5.Take the right half part of the second number using for loop.
6.Combine te above seperated parts.
7.Print the output.
*/
#include<stdio.h>
int countof(int x)
{
    int i,count=0;
    while(x>0)
    {
        count++;
        x=x/10;
    }
    return count;
}

void num2(int r , int s)
{
    int j,b[100];
    for(j=0;j<s;j++)
    {
        b[j] = r%10;
        r=r/10;
        
    }
    
    for(j=s - 1;j>=s/2;j--)
    {
        printf("%d",b[j]);
    }
}
void num1(int p , int q)
{
    int i,a[100];
    for(i=0;i<q;i++)
    {
       a[i] = p%10;
       p = p/10;
    }
    for(i=(q/2) - 1;i>=0;i--)
    {
        printf("%d",a[i]);
    }
}

int main()

{
    int sa1,sr1,i,c1,c2,a[100],b[100];
    scanf("%d %d",&sa1,&sr1);
    c1 = countof(sa1);
    c2 = countof(sr1);
    
    if(c1%2==0 && c2%2==0)
    {
        
        num2(sa1,c1);
        num1(sr1,c2);
        
        
    }
    
    
}
