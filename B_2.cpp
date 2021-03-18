#include <iostream>
using namespace std;

bool eqt(int a[],int b[],int n)
{
    for (int i = 0;i < n;i++)
     for (int j = i;j <=i ;j++)
      if (a[i] != b[j])
       return false;
    return true;       
}
int main () {
int n;
    cin >> n;
    int a[n],b[n];
    for (int i = 0;i < n;i++) cin >> a[i];
    for (int i = 0;i < n;i++) cin >> b[i];
    cout << eqt(a,b,n);
    return 0;
}