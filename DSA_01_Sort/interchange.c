main()
{
    int i,a[50],n,j;
    printf("Nhap n");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf("Nhap a[%d]",i+1);
        scanf("%d",&a[i]);
    }


      for ( i = 0; i < n-1; i++)
      for (j = i+1; j < n; j++)
         if (a[i] > a[j]) swap(&a[i],&a[j]);



        for (i=0;i<n;i++)
        printf(" %d ",a[i]);


}
void swap(int *x,int *y)
{
    *x=*x+*y;
    *y=*x-*y;
    *x=*x-*y;
}
