#Bài 4: Dữ liệu kiểu mảng
##1.Khái niệm:
- Mảng được hiểu là một tập hợp các giá trị có cùng kiểu dữ liệu nằm liên tiếp nhau trong bộ nhớ máy tính
- Mảng được coi như một biến mảng và tên mảng được đặt theo quy tắc đặt tên biến 
- Mảng có những thành phần sau:
- Kiểu dữ liệu của các phần tử trong mảng
- Tên mảng
- Số chiều và kích thước của mỗi chiều
##2. Cách khai báo biến mảng
	<kiểu_dl> <tên_mảng>[<ds các chiều của mảng>]
	-VD: 	
  
			int A[10]; 
      
//mảng 1 chiều A gồm 10 phần tử kiểu số nguyên

			float B[2] [3];
      
// Mảng 2 chiều B gồm 2 hàng và 3 cột, các phần tử có kiểu số thực

##3.Cách tổ chức và truy xuất đến phần tử mảng
Phần tử của mảng được xác định thông qua chỉ số. Chỉ số của phần tử trong mảng luôn là một số nguyên không vượt qua kích thước của mảng
Các phần tử của mảng được sắp xếp liền nhau trong bộ nhớ của máy tính và chỉ cho phép truy cập đến địa chỉ trực tiếp của phần tử đối với mảng một chiều. Cách truy cập theo địa chỉ 

```&tên_biến[i] 
```

trong đó i là chỉ số của phần tử

 VD:  	a= &a[0]
 
//Tên mảng chỉ tới địa chỉ phần tử đầu tiên của mảng

##4. Cách xuất nhập dữ liệu trên mảng
Nhập xuất trực tiếp ứng dụng cho mảng một chiều và mảng hai chiều có phần tử kiểu int thông qua địa chỉ 
Nhập dữ liệu cho mảng

```for( i=0;i<5;i++) {
			printf(“Phan tu thu %d= ”,i);
			scanf(“%d”, &a[i]);
		}
``` 
		
- In các phần tử của mảng ra màn hình

```for(i=0;i<n;i++)  printf(“%6d”,a[i])
```		
  
  ###Nhập xuất dữ liệu gián tiếp thông qua một biến trung gian đối với mảng một chiều và mảng đa chiều
  
```		for(i=0;i<2;i++)
		for(j=0;j<3;j++) {
			printf(“a[%d,%d]”, i, j);
			scanf(“%f”,&temp);
			a[i] [j] = temp;}
```
		
#Kiểu mảng

###Khi làm việc với các cấu trúc dữ liệu dạng dãy hay danh sách các phần tử, ta sử dụng kiểu mảng (array)
- Mảng 1 chiều: một vec-tơ các phần tử
- Mảng nhiều chiều: một bảng các phần tử
###Mảng một chiều
- Dãy các phần tử có cùng kiểu dữ liệu
- Các phần tử được sắp xếp theo trật tự nhất định

##Cú pháp khai báo mảng một chiều

```kiểu_dữ_liệu tên_mảng[số_phần_tử_của_mảng];
```
	
Ví dụ
```int ai[10];
float af[100];
```
Số phần tử mảng được xác định khi khai báo
Sử dụng toán tử [] để truy cập phân tử của mảng
Ví dụ: ai[2], af[10], …
Chỉ số các phần tử mảng được đánh số từ 0
c 	
Ví dụ 
Nhập danh sách các giá trị nguyên vào một mảng, sau đó tìm phần tử có giá trị nhỏ nhất trong mảng
```
#include <stdio.h>
#define N 10
main()
{	
  int x[N], min;
    int i;
    for (i=0; i <= N-1; i++){	
	printf(" x[%d]= ", i);
	scanf("%d", &x[i]);
    }
  min = x[0];
    for (i=1; i < N; i++)
	if (min > x[i]) min = x[i];
  printf("\n min= %d", min);
}
``` 

- Khởi tạo mảng
+ Mảng có thể được khởi tạo giá trị ngay khi khai báo
+ Cú pháp
kiểu_dữ_liệu   tên_mảng[số_phần_tử_của_mảng] = {danh_sách_các_giá_trị_khởi_tạo}; 
+ Khi khai báo mảng có khởi tạo giá trị thì có thể không cần chỉ ra số phần tử mảng
+ Ví dụ
	int ai[3] = {2, 4, 5};
 + Hoặc
	int ai[] = {2, 4, 5}; /*không khai báo số phần tử mảng*/ 

###Định nghĩa kiểu mới – từ khóa typedef
+ Có thể sử dụng từ khóa typedef để định nghĩa các kiểu dữ liệu mới
+ Kiểu dữ liệu mới sẽ được sử dụng để khai báo dữ liệu 
+ Ví dụ
	+typedef int kieunguyen; 
	+typedef float mangthuc10[10]; 
- sử dụng
+ kieunguyen x, a[100];
+ mangthuc10 x, y;

- Mảng và địa chỉ
+ Toán tử & dùng để lấy địa chỉ một biến
+ Toán tử & cũng được dùng để lấy địa chỉ của một phần tử mảng
+ Các phần tử trong mảng được bố trí các ô nhớ liên tiếp nhau trên bộ nhớ
+ Nếu biết được địa chỉ phần tử thú i sẽ xác định được địa chỉ phần tử thú i+1
+ Địa chỉ phần tử đầu tiên là địa chỉ của mảng
- Tên mảng mang địa chỉ của mảng đó
-Mảng và địa chỉ
+ Ví dụ
float a[100];
float *pa;
+ Các cách viết sau là tương đương:
a  &a[0]
a + i  &a[i]
*(a + i)  a[i]
+ Các phép gán hợp lệ
pa = a;
pa = &a[0];

- Mảng là tham số của hàm
+ Khi sử dụng mảng là tham số của hàm, ta có thể khai báo, chẳng hạn:
		int a[]
Hoặc
		int *a
+ Như thế, hai cách sau là tương đương:
f(int a[]) { … }
f(int *a) { … }
+ Khi sử dụng, có thể gọi:
	f(a);
Hoặc
	f(&a[0]);
	
+ ví dụ
```
void nhap_mang(int *x, int n)
{
	int i;
	/* Đọc các giá trị mảng */
	for (i=0; i <= n-1; i++)
	{	
		printf(" x[%d]= ", i);
		scanf("%d", &x[i]); 
	}
}
```


```
void xuat_mang(int *x, int n)
{
	int i;
	/* In các giá trị mảng */
	for (i=0; i <= n-1; i++)
		printf(" x[%d]= %d\n", i, x[i]);
} 
```
