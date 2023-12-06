/*Thông tin của sinh viên có 6 thuộc tính sau:
- ID: Mã định danh duy nhất để phân biệt từng học sinh với tổng số lượng 10000
sinh viên.
- Họ và tên: Chuỗi có ký tự Space
- Tuổi: Số nguyên dương có giá trị lớn nhất là 100.
- Giới tính: Nam hoặc Nữ.
- Lớp Mã: Chuỗi có độ dài 5 hiển thị ký tự.
- Điểm trung bình: Giá trị comoma.
Viết chương trình sử dụng bàn phím để nhập 6 thuộc tính của sinh viên. Sau đó
đầu vào, chương trình sẽ hiển thị từng thuộc tính trên một dòng.
Một số yêu cầu về màn hình định dạng:
+ Màn hình ID có 5 chữ số (nếu giá trị không đủ 5 chữ số thì thêm 0 làm
đầu ngôn ngữ tiếp theo).
+ Giới tính có thể được hiển thị dưới dạng giá trị nguyên 0 hoặc 1.
+ Điểm trung bình được hiển thị với 1 chữ số chính xác.
Chú ý: Xóa stdin sau mỗi lần quét để đảm bảo mỗi dữ liệu đầu vào không bị bỏ qua.*/
#include<stdio.h>
int main(){
    char name[50],sex[3],pass[6];
    unsigned char age;
    int temp,id;
    float avgMark;
    //input id
    printf("input id: ");
    scanf("%d",id);
    getc(stdin);
    //input name
    printf("press your name: ");
    gets(name);
    //input age
    printf("input your age: ");
    scanf("%d",&temp);
    age = (unsigned char)temp;
    //input your gender
    printf("input your gender: ");
    gets(sex);
    //input your passcode
    printf("input your passcode: ");
    gets(pass);
    //input your average mark
    printf("input your average mark: ");
    scanf("%f",&avgMark);
    getc(stdin);


    //output your information
    printf("\n\n---------------------------\n");
    printf("your id is: %05d", id);
    printf("your name is: %s\n", name);
    printf("your age is: %d\n", age);
    printf("your id is: %s\n", sex);
    printf("your id is: %s\n", pass);
    printf("your id is: %.1f", avgMark);
}