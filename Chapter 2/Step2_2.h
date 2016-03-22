// 2.2.8

unsigned gcd(unsigned a, unsigned b)
{
    if (b == 0)
		return a;
	return gcd(b, a % b);
}

//2.2.10

#include <iostream>
using namespace std;
int main()
{
    int x = 0;
    cin >> x;
    if (x!=0) {
        
        main();
        cout << x << " ";
    }
    else 
        return 0;
}