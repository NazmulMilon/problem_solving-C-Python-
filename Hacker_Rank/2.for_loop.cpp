#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a,b;
    string s[]={"zero","one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    cin>>a>>b;

    for(int i=a; i<=b; i++)
    {
        if(i<=9){
            cout<<s[i]<<endl;
        }
        else if(i%2==0){
            cout<<"even"<<endl;
        }
        else{
            cout<<"odd"<<endl;
        }
    }
    return 0;
}
