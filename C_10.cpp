#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void change(int f[], int k)
{
    for (int i = 0; i < k - 2; i++)
        for (int j = i + 1; j < k - 1; j++)
            for (int l = j + 1; l < k; l++)
                if ((f[i] + f[j] + f[l]) % 25 == 0)
                    cout << f[i] << " " << f[j] << " " << f[l] << endl;
}
using namespace std;
int main()
{
    srand(time(NULL));
    int k;
    cin >> k;
    int* f;
    f = new int[k];
    for (int i = 0; i < k; i++) 
	f[i] = rand() % 49 + 0;
    for (int i = 0; i < k; i++) 
	cout << f[i] << " ";
    cout << endl;
    change(f, k);
    return 0;
}