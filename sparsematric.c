#include<stdio.h>
void main()
{
int i,j,m=1,r,c;
printf("enter the order of matrics");
scanf("%d%d",&r,&c);
int a[10][10],b[10][3];
printf("enter the elements");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&a[i][j]);
}}
printf("row coloum value \n");
b[0][0]=i;
b[0][1]=j;
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
 if (a[i][j]!=0)
 {
 b[m][0]=i;
 b[m][1]=j;
 b[m][2]=a[i][j];
 m++;
 }}
 b[0][2]=m-1;
 for(i=0;i<m;i++)
 {
 for(j=0;j<3;j++)
 {
 printf("\t %d",b[i][j]);
 }
 printf("\n");
 }}

