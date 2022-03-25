#include <stdio.h>
main() {
  int i;
  int hap=0; 
  float sum=0;
  for(i=5;i<104;i=i+1)
  {
    hap=hap+(i-3)+(i-2); 
    sum=sum+(float)i/hap;   
  } 
  printf("result = %f\n",sum); 
}
