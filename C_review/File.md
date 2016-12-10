#Đọc - Ghi File trong C
Chương trước đã giải thích về các thiết bị nhập – xuất tiêu chuẩn được xử lý bởi ngôn ngữ C. Ở chương này chúng ta sẽ thấy cách lập trình viên tạo, mở và đóng các file văn bản hoặc file nhị phân với các dữ liệu lưu trữ.

Một file biểu diễn một chuỗi các bytes, không kể đó là file văn bản hay file nhị phân. Ngôn ngữ lập trình C cung cấp các hàm truy cập mức độ cao cũng như thấp (mức hệ điều hành) để thao tác với file trên thiết bị lưu trữ. Chương này sẽ đưa bạn đến những cách gọi hàm quan trọng cho việc quản lý file.
Mở file trong C
Bạn có thể sử dụng hàm fopen() để tạo file mới hoặc để mở các file đã tồn tại. Cách gọi này sẽ khởi tạo đối tượng loại FILE, mà bao gồm thông tin cần thiết để điều khiển luồng. Dưới đây là một cách gọi hàm:
```
FILE *fopen( const char * ten_file, const char * che_do );
```
Ở đây, ten_file là một chuỗi, được coi như tên file và giá trị che_do truy cập có thể là những giá trị dưới đây:

| Mode 	|                                                                                    Miêu tả                                                                                   	|
|:----:	|:----------------------------------------------------------------------------------------------------------------------------------------------------------------------------:	|
|   r  	|                                                                    Mở các file đã tồn tại với mục đích đọc                                                                   	|
|   w  	|            Mở các file với mục đích ghi. Nếu các file này chưa tồn tại thi file mới được tạo ra. Ở đây, chương trình bắt đầu ghi nội dung từ phần mở đầu của file            	|
|   a  	| Mở file văn bản cho việc ghi ở chế độ ghi tiếp theo vào cuối, nếu nó chưa tồn tại thì file mới được tạo. Đây là chương trình ghi nội dung với phần cuối của file đã tồn tại. 	|
|  r+  	|                                                                   Mở file văn bản với mục đích đọc và ghi.                                                                   	|
|  w+  	|                           Mở một file văn bản cho chế độ đọc và ghi. Nó làm trắng file đã tồn tại nếu file này có và tạo mới nếu file này chưa có.                           	|
|  a+  	|          Mở file đã tồn tại với mục đích đọc và ghi. Nó tạo file mới nếu không tồn tại. Việc đọc file sẽ bắt đầu đọc từ đầu nhưng ghi file sẽ chỉ ghi vào cuối file.         	|


Nếu bạn thao tác với các file nhị phân, bạn có thể có các cách truy xuất thay cho các trường hợp trên như sau:
```
"rb", "wb", "ab", "rb+", "r+b", "wb+", "w+b", "ab+", "a+b"
```
Đóng file trong C
Để đóng 1 file bạn có thể sử dụng hàm fclose() dưới đây:

``` 
int fclose( FILE *fp );
```
Hàm fclose( ) trả về giá trị zero nếu thành công hoặc EOF nếu có lỗi trong quá trình đóng file. Hàm này thực tế xóa các dữ liệu trong bộ đệm đối với file, đóng file và giải phóng bộ nhớ được sử dụng với file. EOF là một hằng số được định nghĩa trong phần stdio.h.

Có nhiều hàm đa dạng được cung cấp bởi thư viện chuẩn của ngôn ngữ C để đọc và ghi từng ký tự và trong một dạng với số lượng ký tự cố định. Chúng ta sẽ xem xét trong ví dụ sau đây:

Ghi tới một file trong C
Dưới đây là hàm đơn giản nhất để thực hiện việc ghi các ký tự riêng tới một luồng:

```
int fputc( int c, FILE *fp );
```
Hàm fputc() ghi các ký tự với giá trị tham số c đến một luồng ra tham chiếu bởi con trỏ fp. Nó sẽ trả về ký tự được ghi nếu thành công hoặc EOF nếu có lỗi. Bạn có thể sử dụng hàm sau đây để ghi một chuỗi kết thúc bằng ký tự null đến một luồng:

```
int fputs( const char *s, FILE *fp );
```
Hàm fputs() ghi chuỗi s đến một luồng ra tham chiếu bởi fp. Nó trả về một giá trị không âm nếu thành công và trả về ký tự EOF nếu xảy ra một lỗi. Bạn có thể sử dụng hàm int fprintf(FILE *fp,const char *format, ...) để ghi một chuỗi ra file . Thử ví dụ dưới đây:

Bạn phải chắc chắn bạn có thư mục /tmp, nếu không có, bạn phải tạo thư mục này trên máy bạn.
```
#include <stdio.h>

main()
{
   FILE *fp;

   fp = fopen("vidu.txt", "w+");
   fprintf(fp, "Vi du kiem tra ham fprintf ...\n");
   fputs("Vi du kiem tra ham fputs ...\n", fp);
   fclose(fp);
}
```
Khi đoạn code trên được biên dịch và thực hiện, nó tạo file mới là vidu.txt và ghi vào đó 2 dòng của 2 hàm khác nhau. Cùng đọc file này ở phần tiếp theo.

Đọc file trong C
Dưới đây là hàm đơn giản nhất để đọc một ký tự riêng rẽ từ file:

>int fgetc( FILE * fp );
Hàm fgetc() đọc một ký tự từ một file tham chiếu bởi con trở fp. Giá trị trả về là ký tự đọc được nếu thành công, và trong trường hợp lỗi trả về EOF. Hàm dưới đây cho phép bạn đọc chuỗi từ một luồng:

>char *fgets( char *buf, int n, FILE *fp );
Hàm fgets() đọc n-1 ký tự từ một luồng vào tham chiếu bởi fp. Nó copy chuỗi đọc đến bộ đệm buf, gán ký tự null vào kết thúc chuỗi.

Nếu hàm gặp phải một ký tự newline (dòng mới) (xuống dòng) '\n' hoặc ký tự EOF trước khi đọc được số lượng tối đa các ký tự, nó sẽ chỉ trả về các ký tự cho đến ký tự xuống dòng và ký tự xuống dòng mới. Bạn có thể sử dụng hàm int fscanf(FILE *fp, const char *format, ...) để đọc chuỗi từ một file, nhưng dừng việc đọc ở khoảng trắng đầu tiên gặp phải:
```
#include <stdio.h>

main()
{
   FILE *fp;
   char buff[255];

   fp = fopen("vidu.txt", "r");
   fscanf(fp, "%s", buff);
   printf("1 : %s\n", buff );

   fgets(buff, 255, (FILE*)fp);
   printf("2: %s\n", buff );
   
   fgets(buff, 255, (FILE*)fp);
   printf("3: %s\n", buff );
   fclose(fp);

}
```
Biên dịch và chạy chương trình C trên, đầu tiên nó đọc từ file được tạo từ khu vực trước và in ra kết quả sau đây:

File I/O trong C
Cùng xem một chút chi tiết hơn về điều đã xảy ra tại đây. Đầu tiên fscanf() chỉ đọc This bởi vì sau đó nó gặp phải dấu cách, tiếp theo hàm fgets() trả về các dòng còn lại cho đến khi gặp ký tự cuối file. Cuối cùng nó gọi hàm fgets() để đọc hoàn toàn dòng thứ 2.

Hàm Nhập – Xuất nhị phân trong C
Dưới đây là hai hàm, có thể sử dụng cho việc input và output nhị phân:
```
size_t fread(void *ptr, size_t kich_co_cua_cac_phan_tu, 
             size_t so_phan_tu, FILE *ten_file);
             
size_t fwrite(const void *ptr, size_t kich_co_cua_cac_phan_tu, 
             size_t so_phan_tu, FILE *ten_file);
```             
Cả 2 hàm trên được sử dụng để đọc và ghi các khối bộ nhớ, thường là các mảng hoặc cấu trúc.
