#include<iostream>
#include<math.h>
using namespace std;

bool check(int n){
	 if (n <= 1) return 0;
    else 
     for(int i = 2;i <= sqrt(n);i++)
      if (n%i == 0) return 0;
    return 1;
}

int main () {
	int n; 
	cin >> n;
	cout << check (n);
	return 0;
}