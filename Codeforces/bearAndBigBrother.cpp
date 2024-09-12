#include <cstdio>  
using namespace std;
inline short bearAndBigBrother(short a , short b){
    short count =0;
    while(a <= b){
        a=a*3;
        b=b*2;
        count++;
    }
    return count;
}
int main()
{
    
    short x,y;
    scanf("%hd %hd", &x, &y);
    printf("%hd", bearAndBigBrother(x, y));
    return 0;
}

