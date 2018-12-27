#include <iostream>
#include<algorithm>
using namespace std;
int main()  {
    int long n,i;
    int long *l,*s;
    cin >> n;
    int long A[n];
    for(i = 0 ;i < n ;i++) {
        cin >> A[i];
    }
    int long inst;
    if(n > 2) {
    l = std::max_element(A,A+n-1);
    s = std::min_element(A,A+n);
    inst = *l-*s;
    cout<<inst;
    }
    else if(n >= 1 && n!=2) {
    cout<<A[0];
    }
    else
    cout<<0;
    return 0;
}
