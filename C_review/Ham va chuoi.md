#KHÁI NIỆM VỀ HÀM TRONG C
rong những chương trình lớn, có thể có những đoạn chương trình viết lặp đi lặp lại nhiều lần, để tránh rườm rà và mất thời gian khi viết chương trình; người ta thường phân chia chương trình thành nhiều module, mỗi module giải quyết một công việc nào đó. Các module như vậy gọi là các chương trình con.

Một tiện lợi khác của việc sử dụng chương trình con là ta có thể dễ dàng kiểm tra xác định tính đúng đắn của nó trước khi ráp nối vào chương trình chính và do đó việc xác định sai sót để tiến hành hiệu đính trong chương trình chính sẽ thuận lợi hơn. Trong C, chương trình con được gọi là hàm. Hàm trong C có thể trả về kết quả thông qua tên hàm hay có thể không trả về kết quả.

Hàm có hai loại: hàm chuẩn và hàm tự định nghĩa. Trong chương này, ta chú trọng đến cách định nghĩa hàm và cách sử dụng các hàm đó.

Một hàm khi được định nghĩa thì có thể sử dụng bất cứ đâu trong chương trình. Trong C, một chương trình bắt đầu thực thi bằng hàm main.

Ví dụ 1: Ta có hàm max để tìm số lớn giữa 2 số nguyên a, b như sau:

```
int max(int a, int b)

{

return (a>b) ? a:b;

}

Ví dụ 2: Ta có chương trình chính (hàm main) dùng để nhập vào 2 số nguyên a,b và in ra màn hình số lớn trong 2 số

#include <stdio.h>

#include <conio.h>

int max(int a, int b)

{

return (a>b) ? a:b;

}

int main()

{

int a, b, c;

printf("\n Nhap vao 3 so a, b,c ");

scanf("%d%d%d",&a,&b,&c);

printf("\n So lon la %d",max(a, max(b,c)));

getch();

return 0;

}
```
##Hàm thư viện

Hàm thư viện là những hàm đã được định nghĩa sẵn trong một thư viện nào đó, muốn sử dụng các hàm thư viện thì phải khai báo thư viện trước khi sử dụng bằng lệnh #include <tên thư viện.h>

###Một số thư viện:

- alloc.h assert.h bcd.h bios.h complex.h

- conio.h ctype.h dir.h dirent.h dos.h

- errno.h fcntl.h float.h fstream.h grneric.h

- graphics.h io.h iomanip.h iostream.h limits.h

- locale.h malloc.h math.h mem.h process.h

- setjmp.h share.h signal.h stdarg.h stddef.h

- stdio.h stdiostr.h stdlib.h stream.h string.h

- strstrea.h sys\stat.h sys\timeb.h sys\types.h time.h

- values.h

###Ý nghĩa của một số thư viện thường dùng:

1. **stdio.h** : Thư viện chứa các hàm vào/ ra chuẩn (standard input/output). Gồm các hàm **printf(), scanf(), getc(), putc(), gets(), puts(), fflush(), fopen(), fclose(), fread(), fwrite(), getchar(), putchar(), getw(), putw()…**

2. **conio.h** : Thư viện chứa các hàm vào ra trong chế độ DOS (DOS console). Gồm các hàm **clrscr(), getch(), getche(), getpass(), cgets(), cputs(), putch(), clreol(),…**

3. **math.h**: Thư viện chứa các hàm tính toán gồm các hàm **abs(), sqrt(), log(). log10(), sin(), cos(), tan(), acos(), asin(), atan(), pow(), exp(),…**

4. **alloc.h**: Thư viện chứa các hàm liên quan đến việc quản lý bộ nhơ. Gồm các hàm **calloc(), realloc(), malloc(), free(), farmalloc(), farcalloc(), farfree(), …**

5. **io.h**: Thư viện chứa các hàm vào ra cấp thấp. Gồm các hàm **open(), _open(), read(), _read(), close(), _close(), creat(), _creat(), creatnew(), eof(), filelength(), lock(),…**

6. **graphics.h**: Thư viện chứa các hàm liên quan đến đồ họa. Gồm **initgraph(), line(), circle(), putpixel(), getpixel(), setcolor(), …**

...

Muốn sử dụng các hàm thư viện thì ta phải xem cú pháp của các hàm và sử dụng theo đúng cú pháp (xem trong phần trợ giúp của Turbo C).

###Hàm người dùng

Hàm người dùng là những hàm do người lập trình tự tạo ra nhằm đáp ứng nhu cầu xử lý của mình.

##XÂY DỰNG MỘT HÀM

###Định nghĩa hàm

####Cấu trúc của một hàm tự thiết kế:

```
<kiểu kết quả> Tên hàm ([< kiểu t số> < tham số >][,< kiểu t số >< tham số >][…])

{

[Khai báo biến cục bộ và các câu lệnh thực hiện hàm]

[return [<Biểu thức>];]

}
```

Giải thích:

- Kiểu kết quả: là kiểu dữ liệu của kết quả trả về, có thể là : int, byte, char, float, void… Một hàm có thể có hoặc không có kết quả trả về. Trong trường hợp hàm không có kết quả trả về ta nên sử dụng kiểu kết quả là void.

- Kiểu t số: là kiểu dữ liệu của tham số.

- Tham số: là tham số truyền dữ liệu vào cho hàm, một hàm có thể có hoặc không có tham số. Tham số này gọi là tham số hình thức, khi gọi hàm chúng ta phải truyền cho nó các tham số thực tế. Nếu có nhiều tham số, mỗi tham số phân cách nhau dấu phẩy (,).

- Bên trong thân hàm (phần giới hạn bởi cặp dấu {}) là các khai báo cùng các câu lệnh xử lý. Các khai báo bên trong hàm được gọi là các khai báo cục bộ trong hàm và các khai báo này chỉ tồn tại bên trong hàm mà thôi.

- Khi định nghĩa hàm, ta thường sử dụng câu lệnh return để trả về kết quả thông qua tên hàm.

Lệnh return dùng để thoát khỏi một hàm và có thể trả về một giá trị nào đó.

Cú pháp:

```
return ; /*không trả về giá trị*/

return <biểu thức>; //Trả về giá trị của biểu thức

return (<biểu thức>); //Trả về giá trị của biểu thức
```
Nếu hàm có kết quả trả về, ta bắt buộc phải sử dụng câu lệnh return để trả về kết quả cho hàm.

Ví dụ 1: Viết hàm tìm số lớn giữa 2 số nguyên a và b

```
int max(int a, int b)

{

return (a>b) ? a:b;

}
```

Ví dụ 2: Viết hàm tìm ước chung lớn nhất giữa 2 số nguyên a, b. Cách tìm: đầu tiên ta giả sử UCLN của hai số là số nhỏ nhất trong hai số đó. Nếu điều đó không đúng thì ta giảm đi một đơn vị và cứ giảm như vậy cho tới khi nào tìm thấy UCLN

```
int ucln(int a, int b)

{

int u;

if (a<b)

u=a;

else

u=b;

while ((a%u !=0) || (b%u!=0))

u--;

return u;

}
```

####Sử dụng hàm

Một hàm khi định nghĩa thì chúng vẫn chưa được thực thi trừ khi ta có một lời gọi đến hàm đó.

Cú pháp gọi hàm: <Tên hàm>([Danh sách các tham số])

Ví dụ: Viết chương trình cho phép tìm ước số chung lớn nhất của hai số tự nhiên.
```
#include<stdio.h>

unsigned int ucln(unsigned int a, unsigned int b)

{

unsigned int u;

if (a<b)

u=a;

else

u=b;

while ((a%u !=0) || (b%u!=0))

u--;

return u;

}

int main()

{

unsigned int a, b, UC;

printf(“Nhap a,b: ”);scanf(“%d%d”,&a,&b);

UC = ucln(a,b);

printf(“Uoc chung lon nhat la: ”, UC);

return 0;

}
```

#####Lưu ý: Việc gọi hàm là một phép toán, không phải là một phát biểu.

###Nguyên tắc hoạt động của hàm

Trong chương trình, khi gặp một lời gọi hàm thì hàm bắt đầu thực hiện bằng cách chuyển các lệnh thi hành đến hàm được gọi. Quá trình diễn ra như sau:

- Nếu hàm có tham số, trước tiên các tham số sẽ được gán giá trị thực tương ứng.

- Chương trình sẽ thực hiện tiếp các câu lệnh trong thân hàm bắt đầu từ lệnh đầu tiên đến câu lệnh cuối cùng.

- Khi gặp lệnh return hoặc dấu } cuối cùng trong thân hàm, chương trình sẽ thoát khỏi hàm để trở về chương trình gọi nó và thực hiện tiếp tục những câu lệnh của chương trình này.

TRUYỀN THAM SỐ CHO HÀM

Mặc nhiên, việc truyền tham số cho hàm trong C là truyền theo giá trị; nghĩa là các giá trị thực (tham số thực) không bị thay đổi giá trị khi truyền cho các tham số hình thức

Ví dụ 1: Giả sử ta muốn in ra nhiều dòng, mỗi dòng 50 ký tự nào đó. Để đơn giản ta viết một hàm, nhiệm vụ của hàm này là in ra trên một dòng 50 ký tự nào đó. Hàm này có tên là InKT.

```
#include <stdio.h>

#include <conio.h>

void InKT(char ch)

{

int i;

for(i=1;i<=50;i++) printf(“%c”,ch);

printf(“\n”);

}

int main()

{

char c = ‘A’;

InKT(‘*’); // In ra 50 dau * 

InKT(‘+’);

InKT(c);

return 0;

}
```
Lưu ý:

- Trong hàm InKT ở trên, biến ch gọi là tham số hình thức được truyền bằng giá trị (gọi là tham trị của hàm). Các tham trị của hàm coi như là một biến cục bộ trong hàm và chúng được sử dụng như là dữ liệu đầu vào của hàm.

- Khi chương trình con được gọi để thi hành, tham trị được cấp ô nhớ và nhận giá trị là bản sao giá trị của tham số thực. Do đó, mặc dù tham trị cũng là biến, nhưng việc thay đổi giá trị của chúng không có ý nghĩa gì đối với bên ngoài hàm, không ảnh hưởng đến chương trình chính, nghĩa là không làm ảnh hưởng đến tham số thực tương ứng.

Ví dụ 2: Ta xét chương trình sau đây:

```    
#include <stdio.h>

#include <conio.h>

int hoanvi(int a, int b)

{

int t;

t=a; //Đoạn này hoán vị giá trị của 2 biến a, b

a=b;

b=t;

printf("\Ben trong ham a=%d , b=%d",a,b);

return 0;

}

int main()

{

int a, b;

clrscr();

printf("\n Nhap vao 2 so nguyen a, b:");

scanf("%d%d",&a,&b);

printf("\n Truoc khi goi ham hoan vi a=%d ,b=%d",a,b);

hoanvi(a,b);

printf("\n Sau khi goi ham hoan vi a=%d ,b=%d",a,b);

getch();

return 0;

}
```
####Kết quả thực hiện chương trình:

>***SORRY, THIS MEDIA TYPE IS NOT SUPPORTED.***

####Giải thích:

- Nhập vào 2 số 6 và 5 (a=6, b=5)

- Trước khi gọi hàm hoán vị thì a=6, b=5

- Bên trong hàm hoán vị a=5, b=6

- Khi ra khỏi hàm hoán vị thì a=6, b=5

##### * Lưu ý

Trong đoạn chương trình trên, nếu ta muốn sau khi kết thúc chương trình con giá trị của a, b thay đổi thì ta phải đặt tham số hình thức là các con trỏ, còn tham số thực tế là địa chỉ của các biến.

Lúc này mọi sự thay đổi trên vùng nhớ được quản lý bởi con trỏ là các tham số hình thức của hàm thì sẽ ảnh hưởng đến vùng nhớ đang được quản lý bởi tham số thực tế tương ứng (cần để ý rằng vùng nhớ này chính là các biến ta cần thay đổi giá trị).

Người ta thường áp dụng cách này đối với các dữ liệu đầu ra của hàm.

Ví dụ: Xét chương trình sau đây:

```
#include <stdio.h>

#include <conio.h>

long hoanvi(long *a, long *b)

// Khai báo tham số hình thức *a, *b là các con trỏ kiểu long 

{

long t;

t=*a; //gán nội dung của x cho t

*a=*b; //Gán nội dung của b cho a

*b=t; //Gán nội dung của t cho b

printf("\n Ben trong ham a=%ld , b=%ld",*a,*b);

//In ra nội dung của a, b

return 0;

}

int main()

{

long a, b;

clrscr();

printf("\n Nhap vao 2 so nguyen a, b:");

scanf("%ld%ld",&a,&b);

printf("\n Truoc khi goi ham hoan vi a=%ld ,b=%ld",a,b);

hoanvi(&a,&b); // Phải là địa chỉ của a và b 

printf("\n Sau khi goi ham hoan vi a=%ld ,b=%ld",a,b);

getch();

return 0;

}
```
    
#####Kết quả thực hiện chương trình:

>***SORRY, THIS MEDIA TYPE IS NOT SUPPORTED.***

#####Giải thích:

- Nhập vào 2 số 5, 6 (a=5, b=6)

- Trước khi gọi hàm hoanvi thì a=5, b=6

- Trong hàm hoanvi (khi đã hoán vị) thì a=6, b=5

- Khi ra khỏi hàm hoán vị thì a=6, b=6

######Lưu ý: Kiểu con trỏ và các phép toán trên biến kiểu con trỏ sẽ nói trong phần sau.

##HÀM ĐỆ QUY

#####Định nghĩa

Một hàm được gọi là đệ quy nếu bên trong thân hàm có lệnh gọi đến chính nó.

Ví dụ: Người ta định nghĩa giai thừa của một số nguyên dương n như sau:

>n!=1* 2 * 3 *…* (n-1) *n = (n-1)! *n (với 0!=1)

Như vậy, để tính n! ta thấy nếu n=0 thì n!=1 ngược lại thì n!=n * (n-1)!

Với định nghĩa trên thì hàm đệ quy tính n! được viết:

```
#include <stdio.h>

#include <conio.h>

/*Hàm tính n! bằng đệ quy*/

unsigned int giaithua_dequy(int n)

{

if (n==0)

return 1;

else

return n*giaithua_dequy(n-1);

}

//Hàm tính n! không đệ quy

unsigned int giaithua_khongdequy(int n)

{

unsigned int kq,i;

kq=1;

for (i=2;i<=n;i++)

kq=kq*i;

return kq;

}

int main()

{

int n;

clrscr();

printf("\n Nhap so n can tinh giai thua ");

scanf("%d",&n);

printf("\nGoi ham de quy: %d != %u",n,giaithua_dequy(n));

printf("\nGoi ham khong de quy: %d != %u",

n,giaithua_khongdequy(n));

getch();

return 0;

}
```

####Đặc điểm cần lưu ý khi viết hàm đệ quy

- Hàm đệ quy phải có 2 phần:

Phần dừng hay phải có trường hợp nguyên tố. Trong ví dụ ở trên thì trường hợp n=0 là trường hợp nguyên tố.
Phần đệ quy: là phần có gọi lại hàm đang được định nghĩa. Trong ví dụ trên thì phần đệ quy là n>0 thì n! = n * (n-1)!
- Sử dụng hàm đệ quy trong chương trình sẽ làm chương trình dễ đọc, dễ hiểu và vấn đề được nêu bật rõ ràng hơn. Tuy nhiên trong đa số trường hợp thì hàm đệ quy tốn bộ nhớ nhiều hơn và tốc độ thực hiện chương trình chậm hơn không đệ quy.

- Tùy từng bài có cụ thể mà người lập trình quyết định có nên dùng đệ quy hay không (có những trường hợp không dùng đệ quy thì không giải quyết được bài toán).
