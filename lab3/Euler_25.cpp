#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    int a=1,b=1,c,cnt=2;
    
    while(1) {
        c=a+b;
        a=b;
        b=c;
        cnt++;
        if (c>999) {
            cout << cnt;
            return 0;
        }
    }
}
