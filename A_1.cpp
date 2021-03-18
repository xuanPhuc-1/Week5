#include<iostream>
using namespace std;

int main (){
	double d;
	int a[10];
	char b[10];
	int c; 
	for(int i=0; i<3; i++){
		cout << "Dia chi cua phan tu thu " << i << " trong mang a la " << &a[i] << endl;
	}
	cout << "****************" << endl;
	for(int i=0; i<3; i++){
		cout << "Dia chi cua phan tu thu " << i << " trong mang b la " <<  (void *)&b[i] << endl;
	}
	cout << "****************" << endl;
	cout << "Dia chi cua bien c la " << &c << endl;
	cout << "Dia chi cua bien d la " << &d << endl;
	return 0;
}
// Các địa chỉ ô nhớ được sắp xếp liên tục và có trật tự. Điều này cho thấy hệ điều hành sẽ 
//tìm đến 1 vùng nhớ trống trên các thiết bị lưu trữ tạm thời (RAM hoặc các vùng nhớ khác), 
//nếu tìm được vùng nhớ có khoảng trống đủ cho kích thước của biến, biến đó sẽ nắm giữ vùng 
//nhớ vừa tìm được.