mình copy cả thuật toán vào đây để tiện cho xem lại sau này , ưu nhược mình ghi cuối mỗi phần
#1 Selection sort.

###1. Bài toán
Cho dãy X = {X1, X1, ..., Xn}, hãy sắp xếp dãy theo chiều không giảm.

###2. Ý tưởng
Chọn phần tử nhỏ nhất trong n phần tử ban đầu, đưa phần tử này về vị trí đúng là đầu tiên của dãy hiện hành. Sau đó không quan tâm đến nó nữa, xem dãy hiện hành chỉ còn n-1 phần tử của dãy ban đầu, bắt đầu từ vị trí thứ 2. Lặp lại quá trình trên cho dãy hiện hành đến khi dãy hiện hành chỉ còn 1 phần tử. 
Do dãy ban đầu có n phần tử, vậy tóm tắt ý tưởng thuật toán là thực hiện n-1 lượt việc đưa phần tử nhỏ nhất trong dãy hiện hành về vị trí đúng ở đầu dãy.

###3. Giải thuật
- Bước 1: i = 1;
- Bước 2: Tìm X[min] trong dãy X[i] ... X[n]
- Bước 3: Đỗi chổ X[i] cho X[min], nếu min trùng với i thì bỏ qua bước này.
- Bước 4: 
* Nếu i <= n-1 thì tăng i lên 1 vị trí (i = i +1), quay lại Bước 2.
* Ngược lại, dừng, dãy đã cho đã sắp xếp đung vị trí.
#2 Interchange sort.



##Ưu :- Dễ hiểu


##Nhược - Phải thực hiện nhiều phép toán ( n*j lần)

 
#2 Interchange sort
###1. Nghịch thế

Một cặp giá trị (a, b) được gọi là nghịch thế khi a và b không thỏa điều kiện sắp thứ tự

Ví dụ: Cho mảng a gồm 6 phần tử: 14 29 -1 10 5 23
Yêu cầu: Liệt kê các cặp giá trị nghịch thế trong mảng sau, biết rằng yêu cầu là sắp xếp mảng tăng dần
– Kết quả:
+ (14, -1) – (14, 10) – (14, 5)
+ (29, -1) – (29, 10) – (29, 5) – (29, 23)
+ (10, 5)

###2. Tư tưởng thuật toán

– Thuật toán Interchange Sort sẽ duyệt qua tất cả các cặp giá trị trong mảng và hoán vị 2 giá trị trong 1 cặp nếu cặp giá trị đó là nghịch thế.

##Ưu :- Dễ hiểu


##Nhược - Phải thực hiện nhiều phép toán ( n*j lần)



#3 Buble sort.

Sắp xếp nổi bọt (tiếng Anh: bubble sort) là một thuật toán sắp xếp đơn giản, 
với thao tác cơ bản là so sánh hai phần tử kề nhau, 
nếu chúng chưa đứng đúng thứ tự thì đổi chỗ (swap). 
Có thể tiến hành từ trên xuống (bên trái sang) hoặc từ dưới lên (bên phải sang). 
Sắp xếp nổi bọt còn có tên là sắp xếp bằng so sánh trực tiếp. 
Nó sử dụng phép so sánh các phần tử nên là một giải thuật sắp xếp kiểu so sánh.

Sắp xếp từ trên xuống
Giả sử dãy cần sắp xếp có n phần tử. Khi tiến hành từ trên xuống, ta so sánh hai phần tử đầu, nếu phần tử đứng trước lớn hơn phần tử đứng sau thì đổi chỗ chúng cho nhau. Tiếp tục làm như vậy với cặp phần tử thứ hai và thứ ba và tiếp tục cho đến cuối tập hợp dữ liệu, nghĩa là so sánh (và đổi chỗ nếu cần) phần tử thứ n-1 với phần tử thứ n. 
Sau bước này phần tử cuối cùng chính là phần tử lớn nhất của dãy.

Sau đó, quay lại so sánh (và đổi chố nếu cần) hai phần tử đầu cho đến khi gặp phần tử thứ n-2....

Ghi chú: Nếu trong một lần duyệt, không phải đổi chỗ bất cứ cặp phần tử nào thì danh sách đã được sắp xếp xong.

##ưu : Code ngắn gọn nhất

##nhược : thời gian chạy code lâu



#4 Merge sort.


Thuật toán sắp xếp trộn (Merge Sort) là một trong các thuật toán sắp xếp hay được sử dụng. 
Gần giống với thuật toán sắp xếp nhanh (Quick Sort) về việc sắp xếp bằng việc tách mảng ban đầu thành 2 nửa, 
nhưng với Quick Sort thì dùng phần tử giữa làm mốc so sánh còn Merge Sort thì chia hẳn ra, 
sắp xếp từng mảng rồi mới “trộn” 2 mảng đã sắp xếp lại.
 ##Ưu : hiệu suất cao , thời gian chạy ít
 ##Nhược : code dài , hơi khó hiểu.

#5 Heap sort.

Thuật toán Heap sort hay còn gọi là thuật toán vun đống, 
đây là một thuật toán kinh điển với độ phức tạp cao hơn Bubble sort nhưng hiệu quả cao hơn.
Thuật toán Heap sort sử dụng cây nhị phân để giải thuật. 
Cây nhị phân này hoạt động theo nguyên tắc, phần tử trên cùng luôn là lớn nhất.

Đặc điểm của heap được sắp xếp:
a. Khi cắt bỏ các phần tử ở ngoài cùng thì nó vẫn là heap.
b. Phần tử ở đầu a1 luôn là phần tử lớn nhất của heap


Giả sử ta có một mảng a[1...x phần tử],
a. Cây cực đại khi a[i]>=a[2*i] và a[i]>=a[2*i+1] với mọi i =1..int(n/2).
b. Cây cực tiểu khi a[i]<=a[2*i] và a[i]<=a[2*i+1]

Để sắp xếp chúng ta có thuật toán sau:
Giả sử chúng ta có một heap với n phần tử
- B1. Đưa phần tử lớn nhất ra cuối dãy, đem phần tử lớn nhất ra một biến tạm
- B2. Biến phần còn lại trở thành 1 heap với số phần tử mới r=n-1
- B3. Nếu r>1 thì vẫn là heap còn phần tử, lặp lại bước 1. Ngược lại thì dừng, xuất ra biến tạm đã sắp xếp


##Ưu điểm: Hiệu suất của thuật toán cao
##Nhược điểm: Code phức tạp

#6 Quick sort.
Giải thuật sắp xếp nhanh (Quick Sort) là một giải thuật hiệu quả cao 
và dựa trên việc chia mảng dữa liệu thành các mảng nhỏ hơn. 
Giải thuật sắp xếp nhanh chia mảng thành hai phần bằng cách so sánh từng phần tử 
của mảng với một phần tử được chọn gọi là phần tử chốt (Pivot): một mảng bao gồm các phần tử nhỏ hơn
hoặc bằng phần tử chốt và mảng còn lại bao gồm các phần tử lớn hơn hoặc bằng phần tử chốt.

Tiến trình chia này diễn ra tiếp tục cho tới khi độ dài của các mảng con đều bằng 1.
Giải thuật sắp xếp nhanh tỏ ra khá hiệu quả với các tập dữ liệu lớn 
khi mà độ phức tạp trường hợp trung bình và trường hợp xấu nhất là O(nlogn) với n là số phần tử.

####Kỹ thuật chọn phần tử chốt trong giải thuật sắp xếp nhanh (Quick Sort)
Kỹ thuật chọn phần tử chốt ảnh hưởng khá nhiều đến khả năng rơi vào các vòng lặp vô hạn đối với các trường hợp đặc biệt. Tốt nhất là chọn phần tử chốt (pivot) nằm ở trung vị của danh sách. Khi đó, sau log2(n) lần chia chúng ta sẽ đạt tới kích thước các mảng con bằng 1.

Dưới đây là các cách chọn phần tử chốt:

- Chọn phần tử đứng đầu hoặc đứng cuối làm phần tử chốt.

- Chọn phần tử đứng giữa danh sách làm phần tử chốt.

- Chọn phần tử trung vị trong ba phần tử đứng đầu, đứng giữa và đứng cuối làm phần tử chốt.

- Chọn phần tử ngẫu nhiên làm phần tử chốt. Tuy nhiên cách này rất dễ dẫn đến khả năng rơi vào các trường hợp đặc biệt.

## Ưu : sắp xếp khá nhanh phụ thuộc vào  cách chọn pivot
## Nhược : Code dài , phức tạp và khơi khó hiểu 
