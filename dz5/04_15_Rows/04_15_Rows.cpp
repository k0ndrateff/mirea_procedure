#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "russian");
	
	for (int i = 1000; i < 10000; i++) {
		int a = i / 1000;
		int b = i / 100 % 10;
		int c = i / 10 % 10;
		int d = i % 10;
		
		if (a != b && a != c && a != d && b != c && b != d && c != d) {
			cout << i << endl;
		}
	}
}

