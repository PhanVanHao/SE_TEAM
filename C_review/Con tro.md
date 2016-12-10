#Giới thiệu con trỏ C
Mỗi biến trong một vùng nhớ nhất định và mỗi vùng nhớ này có địa chỉ có nó được định nghĩa để dễ dàng trong việc truy cập sử dụng toán tử (&), tương ứng với địa chỉ của nó trong bộ nhớ. Xem xét ví dụ dưới đây, sẽ in ra địa chỉ của biến được định nghĩa:
```
#include <stdio.h>

int main ()
{
   int  bien1;
   char bien2[25];

   printf("Dia chi cua bien1 la: %x\n", &bien1  );
   printf("Dia chi cua bien2 la: %x\n", &bien2  );
   
   printf("\n===========================\n");
   return 0;
}
```
Kết quả in trên màn hình sẽ là 
>Dia chi cua bien1 la:22f4eu
>Dia chi cua bien2 la:0ff033

#Định nghĩa cơ bản
##Con trỏ là gì?
Một con trỏ - pointer là một biến mà trong đó giá trị của nó là địa chỉ của biến khác. Ví dụ như địa chỉ của vùng nhớ. Giống như các biến và hằng số, bạn phải khai báo con trỏ trước khi bạn có thể sử dụng nó để lưu trữ bất kì địa chỉ của biến nào. Dạng tổng quát của việc khai báo con trỏ như sau:
```
kieu_du_lieu *ten_bien;
```
Ở đây, kieu_du_lieu là kiểu dữ liệu cơ bản con trỏ, nó là kiểu hợp lệ trong ngôn ngữ C và var-ten_bien là tên giá trị của con trỏ. Phần ký tự * sử dụng trong khai báo con trỏ giống như việc bạn sử dụng cho phép nhân. Mặc dù vậy, trong khai báo này, ký tự * được thiết kế để sử dụng các biến của con trỏ. Dưới đây là một số cách khai báo hợp lệ của con trỏ:
```
int    *contro;        /* con tro tro toi mot so nguyen */
double *phithuebao;    /* con tro tro toi mot so double */
float  *hocphi;        /* con tro tro toi mot so float */
char   *ho, *ten;     /* con tro tro toi mot ky tu */
```

Kiểu dữ liệu thực sự của giá trị của tất cả các con trỏ, có thể là số nguyên, float, ký tự, hoặc kiểu khác như một số thập lục phân dài - Long hexa biểu diễn một địa chỉ bộ nhớ. Điểm khác nhau duy nhất của các con trỏ của các kiểu dữ liệu khác nhau là kiểu dữ liệu của biến hoặc hằng số mà con trỏ chỉ tới.


##Cách sử dụng con trỏ trong C ?
Có một vài phép toán quan trọng, sẽ giúp chúng ta làm việc với con trỏ một cách thường xuyên: a) chúng ta định nghĩa biến con trỏ, b) gán địa chỉ của biến đến một con trở và c) cuối cùng truy cập các giá trị biến địa chỉ trong biến con trỏ. Điều này được thực hiện bởi toán tử * trả về giá trị các các biến chứa trong địa chỉ được xác định bởi toán tử này. Dưới đây là các sử dụng những phép toán trên:
```
#include <stdio.h>

int main ()
{
   int  bien = 20;   // phan khai bao bien thuc su 
   int  *contro;        // phan khai bao bien con tro 

   contro = &bien;  // luu tru dia chi cua bien trong con tro 

   printf("Dia chi cua bien la: %x\n", &bien  );

   // dia chi duoc luu tru trong bien con tro 
   printf("Dia chi duoc luu tru trong bien contro la: %x\n", contro );

   // Truy cap gia tri boi su dung con tro 
   printf("Gia tri cua bien *contro la: %d\n", *contro );
   
   printf("\n===========================\n");


   return 0;
}
```

Biên dịch và chạy chương trình C trên sẽ cho kết quả:

>Dia chi cua bien la: 22f4eu
>Dia chi duoc luu tru trong bien contro la: 22f4eu
>Gia tri cua bien *contro la:20

###Con trỏ NULL trong C
Có một cách thực hành tốt khi chúng ta gán giá trị NULL cho biến con trở trong trường hợp bạn không có địa chỉ chính xác để được gán. Điều này thường xảy ra trong quá trình khai báo. Một con trỏ được gán giá trị NULL được gọi là con trỏ null.

Con trỏ null là một hằng số với giá trị 0 được định nghĩa trong một vài thư viện chuẩn. Xem chương trình dưới đây:
```
#include <stdio.h>

int main ()
{
   int  *contro = NULL;

   printf("Gia tri cua contro la: %x\n", contro  );
 
   return 0;
}
```
Biên dịch và chạy chương trình C trên sẽ cho kết quả:
>Gia tri cua contro la: 0 

Trong hầu hết các hệ thống, chương trình không cho phép truy cập và ô nhớ có địa chỉ 0 bởi vì bộ nhớ này dùng để dự trữ cho hệ điều hành. Nếu con trỏ tới giá trị null, nó được coi là không trỏ tới đâu cả.

Để kiểm tra có phải là con trỏ null hay không bạn có thể sử dụng lệnh if như sau:
```
if(contro)     // la true neu contro khong phai la null 
if(!contro)    // la true neu contro la null 
```
##Chi tiết về con trỏ trong C
Con trỏ có nhiều nhưng dễ dàng trong việc định nghĩa và rất quan trọng trong lập trình ngôn ngữ C. Dưới đây là những định nghĩa quan trọng mà rõ ràng về con trỏ trong ngôn ngữ lập trình C:

|              Khái niệm             	| Miêu tả                                                                                                                                          	|
|:----------------------------------:	|--------------------------------------------------------------------------------------------------------------------------------------------------	|
| Con trỏ số học trong C             	| Có 4 toán tử đại số mà có thể được sử dụng trên các con trỏ là: ++, --, +, -                                                                     	|
| Mảngcác con trỏ trong C            	| Bạn có thể định nghĩa các mảng để giữ các con trỏ.                                                                                               	|
| Con trỏ trỏ tới con trỏ trong C    	| C cho phép bạn trỏ tới một con trỏ ...                                                                                                           	|
| Truyền các con trỏ tới hàm trong C 	| Truyền một tham số bởi tham chiếu hoặc địa chỉ: cả hai cho các tham số được truyền khả năng có thể được thay đổi trong hàm gọi bởi hàm được gọi. 	|
| Trả về con trỏ từ hàm trong C      	| C cho phép một hàm trả về một con trỏ tới biến cục bộ, biến tĩnh và cũng như bộ nhớ được cấp phát động.                                          	|
