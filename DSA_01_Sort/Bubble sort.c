#include <stdio.h>
#include <math.h>
main()
{
int i, j,n,a[30];
printf("Nhap n:");
scanf("%d",&n);
for (i = 0 ; i < n; i++)
    {printf("Nhap a[%d]:",i+1);
    scanf("%d",&a[i]);}
for (i = 0; i < n-1; i++)
   for (j = n-1; j > i; j--)
      if (a[j-1] > a[j]) //nghịch thế
         swap(&a[j],&a[j-1]); //đổi chỗ
for (i = 0 ; i < n; i++)
    printf("%d ",a[i]);
}
void swap(int *x,int *y)
{
    *x=*x+*y;
    *y=*x-*y;
    *x=*x-*y;
}
