#include "problem2.h"

int findElement(int arr[], int ranges[][2], int rotations, int index){
    //write your code here
 int item;
for(int i=0;i<rotations;i++)
{
int l=ranges[i][0];
int u=ranges[i][1];
  
item=arr[u];
  
for(int j=u-1;j>=l;j--)
{
arr[j+1]=arr[j];
}
arr[l]=item;
}
  
return(arr[index]);
}   
}
