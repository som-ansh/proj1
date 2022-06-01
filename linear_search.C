#include<stdio.h>
#include<stdlib.h>

int main()
{ int a[1000], i, key, count=0;
for(i=0; i<1000; i++)
{
    a[i]=rand();
}
key=rand();

for(i=0;i<1000;i++)
{
    count++;
    if(a[i]==key)
    printf("element found");
    else 
    printf("not");
    
}
printf("\n%d",count);
return 0;
}