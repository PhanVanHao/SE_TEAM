main()
{

int i, j,n,a[30],min;
printf("Nhap n:");
scanf("%d",&n);
for (i = 0 ; i < n; i++)
    {printf("Nhap a[%d]:",i+1);
        scanf("%d",&a[i]);}
for(i = 0; i < n-1; i++)
{
   min = i;
   for(j = i+1; j < n; j++)
      if(a[j] < a[min])
         min = j; //tìm min trong các phần tử còn lại
   if(min != i)
     swap(&a[i], &a[min]); //đổi chỗ nếu tìm thấy min



}
for (i = 0 ; i < n; i++)
printf("%d ",a[i]);
}
void swap(int *x,int *y)
{
    *x=*x+*y;
    *y=*x-*y;
    *x=*x-*y;
}
