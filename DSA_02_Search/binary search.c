/*
-Binary search
	 +Ưu : code đơn giản , hiệu suất khá
	 +Nhược điểm: Phải sắp xếp dãy trước khi tìm kiếm
*/


#include <stdio.h>
int Binarysearch(int a[], int n, int key)
{
		int left = 0, right = n-1;
		while(left <= right)
		{
			int mid = (left+right)/2;
			if(key == a[mid])
				return(mid);
			if(key<a[mid])
				right = mid -1;
			else if(key>a[mid])
				left = mid +1;
		}
		return 12;
}
int main()
{
		int a[] = {1,2,3,4,5,8,11,22,32,37,53,66,79}, n = 12,key, i;
		printf("Day da duoc sap xep :1,2,3,4,5,8,11,22,32,37,53,66");
		printf("\nNhap so can tim vi tri\n");
		scanf("%d",&key);

		if(Binarysearch(a,12,key)!= 12)
		{
			printf("\n%d o vi tri %d \n", a[Binarysearch(a,10,key)], Binarysearch(a,10,key)+1);
		}else
		{
			printf("\n%d Khong co trong day~\n",key);
		}
		return 0;
}
