#include <iostream>
using namespace std;

int Key[]={111,222,111,111,222,333,111,333};
double d[]={5. ,1. ,3. ,4. ,5. ,6. ,7. ,5. };

int main(){
    int N = sizeof(Key)/sizeof(int);

    for(int i = 0; i<N-1;++i)
    for(int j = i+1;j<N;++j)
        if(Key[j]==Key[i])
        {
        d[i]+=d[j];
        Key[j]=Key[N-1];
        d[j]=d[N-1];
        --N;
        --j;
        }
}