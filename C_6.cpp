#include<iostream>
using namespace std;
int gcd(int a, int b){
    
    if (a == 0 || b == 0){
        return a + b;
    }
    while (a != b){
        if (a > b){
            a -= b; 
        }else{
            b -= a;
        }
    }
    return a; 
}
int main (){
	int a, b;
	cin >> a >> b;
	while(a < 0 && b < 0)
	{
		cout << "Nhap lai a va b: ";
		cin >> a >> b;
	}
	cout << gcd(a,b);
}