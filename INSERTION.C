#include<stdio.h>
void main()
{
int n,a[100],i,j,temp,time;
time++;
printf("enter the elements");
time ++;
scanf("%d",&n);
time ++;
printf("enter the elements");
time++;
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
time++;
}
time++;
for(i=1;i<n;i++)
{
temp=a[i];
j=i-1;
time++;

while(j>=0 && a[j]>temp)
{
a[j+1]=a[j];
j--;
}

a[j+1]=temp;
}
printf("the sorted list \n");
time++;
time ++;
for(i=0;i<n;i++)
{
printf("%d \t",a[i]);
}
printf("\n space complexity is %d",((n*4)+(5*4)));
time++;
printf("\n time complexity is %d ",time+1);
}
