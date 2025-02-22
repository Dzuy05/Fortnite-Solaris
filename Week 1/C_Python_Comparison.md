# BÀI 1  
- Python có code size nhỏ hơn gấp 3 lần so với code C nhưng mà về thời gian thực hiện thì Python chậm hơn C gấp khoảng 20 lần (3.6s với 0.2s).
# BÀI 2
So sánh giữa số dấu phẩy động 8 bit (Float8, Tinyfloat) và số dấu phẩy tĩnh:

| **Đặc điểm**               | **Số dấu phẩy động 8-bit (Float8, Tinyfloat)**                                                                                             | **Số dấu phẩy tĩnh**                                                                                                 |
|----------------------------|----------------------------------------------------------------------------------------------------------------------------------------------|----------------------------------------------------------------------------------------------------------------------|
| **Cấu trúc biểu diễn**     | - 1 bit dấu, một số bit cho số mũ và phần còn lại cho phần định nghĩa (mantissa).<br>- Ví dụ: 1 bit dấu, 4 bit số mũ, 3 bit mantissa.      | - Toàn bộ 8 bit dùng cho giá trị số nguyên.<br>- Vị trí dấu phẩy được cố định sau một số bit xác định.               |
| **Độ phân giải tuyệt đối**  | - Không đồng đều: bước nhảy giữa các giá trị phụ thuộc vào số mũ.<br>- Giá trị càng lớn, bước nhảy càng rộng.                             | - Đồng đều: mỗi bước nhảy luôn có cùng kích thước (ví dụ: mỗi bước là 1 đơn vị hoặc nhân với hệ số chia cố định).      |
| **Độ chính xác tương đối**  | - Gần như không đổi trên toàn dải số biểu diễn, mặc dù độ chính xác tuyệt đối thay đổi theo số mũ.                                            | - Độ chính xác tuyệt đối không thay đổi, nhưng có thể bị hạn chế khi biểu diễn dải số rộng.                            |
| **Dải số biểu diễn**       | - Rộng rãi: Nhờ có số mũ nên có thể biểu diễn được các giá trị rất nhỏ và rất lớn.                                                          | - Hẹp hơn: Phụ thuộc vào số bit có sẵn; thường chỉ đủ cho một dải số cố định và nhỏ hơn.                             |
| **Ưu điểm**                | - Có khả năng mở rộng dải số biểu diễn.<br>- Độ chính xác tương đối ổn định trên toàn dải số.                                                 | - Độ phân giải tuyệt đối đồng nhất.<br>- Triển khai đơn giản và hiệu quả trên phần cứng nhúng hoặc hệ thống cố định.    |
| **Nhược điểm**             | - Độ chính xác tuyệt đối thay đổi theo giá trị.<br>- Các số lớn có khoảng cách giữa các giá trị liên tiếp lớn hơn.                             | - Dải số biểu diễn bị giới hạn.<br>- Không thích hợp khi cần xử lý các giá trị với dải rộng (rất nhỏ đến rất lớn).     |
| **Ứng dụng**               | - Phù hợp cho các ứng dụng cần xử lý dải giá trị rất rộng (tính toán khoa học, đồ họa, AI với các số lượng lớn).                             | - Thích hợp cho các hệ thống nhúng, xử lý tín hiệu số hoặc ứng dụng đòi hỏi độ chính xác tuyệt đối đồng nhất.           |

