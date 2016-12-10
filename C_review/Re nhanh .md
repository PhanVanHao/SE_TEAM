#1.Rẽ nhánh 
##Cấu trúc if…else

Như chính tên gọi của nó. Cấu trúc này có hai thành phần. 
Thành phần đầu tiên là từ khoá if chứa một biểu thức, tiếp đó là khối lệnh đang chờ được thực thi của nó. 
Thành phần thứ hai là từ khoá else cũng kèm theo khối lệnh đang chờ thực thi. Vì cấu trúc rất rõ ràng mạch lạc như đã nêu
nên bên cạnh cấu trúc if…else còn có các cấu trúc khác như if, if lồng if, else if,….
Tất cả các cấu trúc này đều phục vụ với mục đích chung đó là giúp bạn kiểm soát được chương trình của chính mình. 
Vì những dòng mã được thực thi hay không là dựa vào điều kiện đúng hay sai mà kết quả của biểu thức trong if trả về. 
Do đó, giúp cho lập trình viên dễ dàng quản lí chương trình của mình hơn.

Như chính tên gọi của nó. Cấu trúc này có hai thành phần. Thành phần đầu tiên là từ khoá if chứa một biểu thức, tiếp đó là khối lệnh đang chờ được thực thi của nó. Thành phần thứ hai là từ khoá else cũng kèm theo khối lệnh đang chờ thực thi. Vì cấu trúc rất rõ ràng mạch lạc như đã nêu nên bên cạnh cấu trúc if…else còn có các cấu trúc khác như if, if lồng if, else if,….Tất cả các cấu trúc này đều phục vụ với mục đích chung đó là giúp bạn kiểm soát được chương trình của chính mình. Vì những dòng mã được thực thi hay không là dựa vào điều kiện đúng hay sai mà kết quả của biểu thức trong if trả về. Do đó, giúp cho lập trình viên dễ dàng quản lí chương trình của mình hơn.

##Cú pháp cấu trúc if…else

Muốn sử dụng cấu trúc if…else, bạn chỉ cần nhớ cú pháp sau:

`if (điều kiện)
{
	câu lệnh;
  }
else
{
	câu lệnh; 
}`

Ví dụ:
```
void vidu()
{
	int a, b, max;
	a = 5;
	b = 10;
 
	if ( a > b)
	{
		max = a;
	}
	else 
	{
		max = b;
	}
}
```
##Nguyên tắc hoạt động của cấu trúc if…else

Biểu thức nguyên trong từ khoá if sẽ được tính toán sau đó trả về giá trị boolean. Nếu giá trị trả về bằng true thì những statement thuộc khối lệnh của từ khoá if sẽ được thực thi. Ngược lại, nếu biểu thức trả về giá trị là false thì những statement thuộc khối lệnh của từ khoá else sẽ được thực thi.


#2.Vòng lặp for

##Cú pháp.
~~~
for ( khoi_tao_bien; dieu_kien; tang/giam )
{
   cac_lenh;
}
~~~
###Dưới đây miêu tả dòng điều khiển của vòng lặp for:

- Bước khoi_tao_bien được thực hiện đầu tiên và chỉ một lần. Bước này cho phép bạn khai báo và khởi tạo bất kỳ biến điều khiển vòng lặp nào. Bạn không được yêu cầu để đặt một lệnh ở đây, miễn là một dấu hai chấm xuất hiện.

- Tiếp theo, dieu_kien được ước lượng. Nếu điều kiện là true, phần thân vòng lặp được thực thi. Nếu nó là false, phần thân vòng lặp không được thực thi và dòng điều khiển nhảy tới lệnh tiếp theo ngay sau vòng lặp for.

- Sau khi phần thân vòng lặp for thực thi, dòng điều khiển nhảy tới lệnh tang/giam. Lệnh này cho phép bạn cập nhật bất kỳ biến điều khiển vòng lặp nào. Lệnh này có thể để trống, miễn là một dấu hai chấm xuất hiện sau điều kiện.

- dieu_kien bây giờ được ước lượng lần nữa. Nếu là true, vòng lặp thực thi và tiến trình lặp đi lặp lại chính nó (phần thân vòng lặp, sau đó là tang/giam, và sau đó kiểm tra điều kiện lần nữa). Sau khi điều kiện trở thành false, vòng lặp for kết thúc.


Ví dụ:
```
#include <stdio.h>
 
int main ()
{
   /* phan thuc thi vong lap for */
   for( int a = 4; a < 16; a = a + 1 )
   {
      printf("Gia tri cua a la: %d\n", a);
   }
   printf("\n===========================\n");
   printf("VietJack chuc cac ban hoc tot! \n");
 
   return 0;
}
```


