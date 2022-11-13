
#include<bits/stdc++.h>
using namespace std;

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
            int que, answer;
            cin>>que;
            answer = lower_bound(str,str+N, que)-str;
            if (str[answer]==que){
               cout<<que<<" found at "<<answer+1<<endl;

            }
            else{
                cout<<que<<" not found"<<endl;
            }
        }
    }
}
