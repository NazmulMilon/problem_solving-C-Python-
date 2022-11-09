
#include<bits/stdc++.h>
using namespace std;

typedef long long LL;
int main()
{
    int N,Q,cas=0;
    while(cin>>N>>Q)
    {
        if(N==0 &&Q==0){
            break;
        }
        printf("CASE# %d:\n", ++cas);
        int str[10005];
        for (int i = 0; i<N; i++)
        {
            cin>>str[i];
        }
        sort(str, str+N);
        while(Q--){
            int que, ans;
            cin>>que;
            ans = lower_bound(str,str+N, que)-str;
            if (str[ans]==que){
                printf("%d found at %d\n", que, ans+1);

            }
            else{
                printf("%d not found\n", que);
            }
        }
    }
}
