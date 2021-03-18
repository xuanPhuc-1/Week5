#include <iostream>
using namespace std;
int main () {
	int a = 1, c=2;
	int &ref=a;
	//int &ref1; Không thể khai báo một tham chiếu mà chưa chiếu ngay nó tới một biến thường
	cout << "Gia tri cua a la: " << a << endl;
	cout << "Dia chi cua a la: " << &a << endl;
	ref++;
	//&ref=c; Không thể thay đổi biến mà tham chiếu đã chiếu đến trước đó
	cout << "Gia tri cua a sau khi thay doi la: " << a << endl;
	cout << "Dia chi cua ref la: " << &ref << endl;
}
// Ta có thể thấy biến tham chiếu và biến nó chỉ tới trong hàmlà một biến tương đương với 1
// ô nhớ trong bộ nhớ