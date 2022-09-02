#include<stdio.h>

void main()
{
    int lowCount=0;
    int mediumCount=0;
    int highCount=0;
    int chargeCycleCounts[100];
    int i;
    printf("Enter 5 values");
    
    for(i=0;i<5;i++)
        {
        scanf("%d",&chargeCycleCounts[i]);
        
        }
        for(i=0;i<5;i++){
    
    if (chargeCycleCounts[i]<400)
  {
      printf("low");
      lowCount=lowCount+1;
      printf("Number of low=%d\n",lowCount);
  }
  else if ((chargeCycleCounts[i]>400)&&(chargeCycleCounts[i]<919))
  {
      printf("medium");
      mediumCount=mediumCount+1;
      printf("Number of medium=%d\n",mediumCount);
  }
  else if (chargeCycleCounts[i]>920)
  {
      printf("high");
      highCount=highCount+1;
      printf("Number of high=%d\n",highCount);
  }
  else
  {
      printf("pass");
      
  }}
        
    
   
