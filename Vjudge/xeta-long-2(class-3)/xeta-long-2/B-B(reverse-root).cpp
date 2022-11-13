

#include<bits/stdc++.h>
using namespace std;

void reverse_root()
{
    int a;
    if (scanf("%d", &a) != 1){
        return;
    }
    reverse_root();
    printf("%lf\n", sqrt(a));
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    reverse_root();
    return 0;
}
