#include<stdio.h>
//function prototype
void clear();//nhấn C de clear data của dãy và nhập dãy mới
void print();//nhấn P để in tất cả phần tử của dãy nếu ko có thì báo rỗng
void index();//nhấn I để nhập giá trị cho 1 phần tử tại vị trí k trong dãy
void delete();//nhấn D để xóa phần tử tại vị trí k trong dãy
void find();//nhấn F để kiểm tra giá trị có trong dãy không(giá trị nhập từ bàn phím)
void greatest();//nhấn G để in ra màn hình số lớn nhất
void smallest();//nhấn S để in ra màn hình số nhỏ nhất
void quit();//nhấn Q để thoát màn hình
int main(){
    //nhập số lượng phần tử 
    char lua_chon[1];
    int n;
    do{
        printf("input number of part: ");
        scanf("%d",&n);
    } while(n > 100);
    //nhập giá trị
    int arr[n];
    for(int i = 0; i < n; i++){
        printf("input part of %d is: ",i);
        scanf("%d", &arr[i]);
    }
    switch(lua_chon){
        case C:
        //clear
        break;
        case P:
        //print
        break;
        case I:
        //input
        break;
        case D:
        //delete
        break;
        case F:
        //find
        break;
        case G:
        //greatest
        break;
        case S:
        //smallest
        break;
        case Q:
        //quit
        break;
        default:
        //nhập lại
        break;
    }

}
//hàm xóa
void clear(){

}