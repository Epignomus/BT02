A2. Thiếu base case để chặn đầu cho hàm đệ quy, stack_overflow.
A3. Ngoại trừ n=1 trả về 1, hầu hết các giá trị khác của n dẫn đến stack overflow.
    Lỗi do công thức tại dòng 3, chương trình chạy đến khi stack overflow.
A4. Với N đủ lớn sẽ dẫn đến stack overflow do số stack phải thực hiện quá nhiều.
A6. Kích thước mảng càng lớn thì càng sớm tràn bộ nhớ.