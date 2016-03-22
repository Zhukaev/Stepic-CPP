// 1.8.4

// определите только функцию power, где
//    x - число, которое нужно возвести в степень
//    p - степень, в которую нужно возвести x
//
#include <math.h>

int power(int x, unsigned p) {
    int answer = pow(x,p);
    /* считаем answer */
    return answer;
}

//1.8.8

#define MAX(x, y, r) {int mr=r,mx=x,my=y; mr=mx;if(mr<my)mr=my;r=mr;} /* присвойте в r максимум из x и y */

//1.8.10

#include <iostream>
using namespace std;

int main()
{
    // put your code here
    int a = 0;
    int b = 0;
    int t = 0;
    cin >> t;
    for (int i = 0; i<t; i++){
        cin >> a >> b;
       cout << (a + b) << endl;
    }
    return 0;
}

//1.8.11

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    double d = pow(b,2)-4*a*c;
    if (d<0){
        cout << "No real roots";
    }
    else {
        cout << (-b+sqrt(d))/(2*a) << " " << (-b-sqrt(d))/(2*a);
    // ...
    }
    return 0;
}

//1.8.12

#include <iostream>
using namespace std;

int main()
{
  //  char b = ' ';
    char c = '\0';
    while (cin.get(c)) {
        if (c==' '){
        cout << c;
            while (cin.get(c)){
                if (c!=' '){
                cout << c;
                break;
                }
                //else cout << c;
            }
        }
        else 
        cout << c;   
    }

	return 0;
}

//1.8.13


#include <iostream>
using namespace std;

int main() {
int log( int );
    int a;
    int t=0;
    cin >> t;
    for (int i = 0; i<t; i++){
        cin >> a;
        cout << log(a) << endl;
    }
    return 0;
}
int log(int a){
    int pow (int, int);
    int p = 0;
    while (pow(2,p) < a)
        p=p+1;
    return p;
    }
int pow(int x, int y){
    int powx = 1;
    for (int j = 0; j <= y; j++)
        powx=powx*x;
    return powx;
}