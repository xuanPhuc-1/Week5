#include <iostream>
using namespace std;
void array(int x[])
{
    for (int i = 0; i < 5; i++) 
	cout << &x[i] << " ";
    cout << endl;
}
	void s_tring(string s)
{
    cout << &s << endl;
}
int main()
{
    int a[5] = {8,9,10,11,12};
    for (int i = 0; i < 5; i++) cout << &a[i] << " ";
    cout << endl;
    string s;
    array(a);
    cout << &s << endl;
    s_tring(s);
    return 0;
    // Cả 2 đều được truyền theo phương thức pass by reference tức là cả 2 mảng và string sau khi
    // được hàm thay đổi thì giá trị bên trong hàm main cũng sẽ thay đổi theo 
}