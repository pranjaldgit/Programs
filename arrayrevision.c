#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int arr[6]={2,4,1,5,7,2};
    int i,j,sum=8;
    for(i=0;i<6;i++)
    {
        for(j=i+1;j<6;j++)
        {
           if(arr[i]+arr[j]==sum)
           {
               printf("found\n");
               exit;
           }
        }
    }   
}