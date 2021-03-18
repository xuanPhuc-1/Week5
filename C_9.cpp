#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
void rand(int n, int k){ 
	time_t t;
	srand((unsigned) time(&t));
   	for(int i = 0 ; i < n ; i++ ) 
   	{
      	cout << rand() % k ;
   	}
   
}
int main()
{
   	int n, k;
	n = 1;
	cin >> k;
	rand(n,k);
  	return 0;
   
   
}