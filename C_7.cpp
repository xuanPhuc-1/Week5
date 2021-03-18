#include<iostream>
using namespace std;
void tamgiac(int n){
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = -n; j <= n; j++)
            if (abs(j) < i) cout << "*";
            else cout << " ";
        cout << endl;
    }
}
int main (){
	int n;
	cin >> n;
	while(n <= 0){
		cout << "Nhap lai n: ";
		cin >> n;
	}
	tamgiac(n);
	return 0;
}