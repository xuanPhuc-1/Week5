#include<iostream>
using namespace std;
void check(int b)
{
	cout << "Dia chi cua b truoc khi gan la: " << &b << endl;
	b=2;
	cout << "Dia chi cua b sau khi gan la: " << &b << endl;
}
int main ()
{
	int a=1;
	cout << "Gia tri cua a truoc khi dua vao ham la: " << a << endl;
	cout << "Dia chi cua a truoc khi dua vao ham la: " << &a << endl;
	check(a);
	cout << "Gia tri cua a sau khi dua vao ham la: " << a << endl;
	cout << "Dia chi cua a sau khi dua vao ham la: " << &a << endl;
	return 0;
}
// a)  Phương pháp pass by value cho thấy giá trị và địa chỉ của cả biến trong hàm main
// được chuyền đi và biến được gọi trong hàm cũng không thay đổi, đó là sự độc lập 
// trong phương pháp này