

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    long long int a=1,b=2,c,ans=0;
    
    for (int i=1; i<4000000; i++) {
        c=a+b;
        a=b;
        b=c;
        if (c%2==0) {
            ans+=c;
        }
    }
    
    cout << ans << endl;
    
    return 0;
}
