#include <iostream>

using namespace std;

bool perestanovka(int* urna, int n) {
    for (int i = 0; i < n; ++i) {
        if (urna[i] == i) {
            return true;
        }
    }
    return false;
}

void swap(int* a, int i, int j)
{
    int s = a[i];
    a[i] = a[j];
    a[j] = s;
}

bool NextSet(int* a, int n)
{
    int j = n - 2;
    while (j != -1 && a[j] >= a[j + 1]) j--;
    if (j == -1)
        return false; 
    int k = n - 1;
    while (a[j] >= a[k]) k--;
    swap(a, j, k);
    int l = j + 1, r = n - 1; 
    while (l < r)
        swap(a, l++, r--);
    return true;
}

int main()
{
    int ans = 0, n = 10, fac = 3628800;
    int urna[10] = { 0,1,2,3,4,5,6,7,8,9 };
    for (int i = 0; i < fac; ++i) {
        NextSet(urna, n);
        if (perestanovka(urna, n))
            ans++;
    }
    cout << ans << endl;

    return 0;
}