
#include<algorithm>
#include <stdio.h>
using namespace std;

int main(){
    short t;
    scanf("%hd",&t);
    short s[4];
    while(t--){
        
        for (short i = 0; i < 4; i++){
            scanf("%hd",&s[i]);
        }
    
    short sorted[4];
    for (short i = 0; i < 4; i++) {
            sorted[i] = s[i];
        }
        sort(sorted, sorted + 4);

        short h1 = sorted[3];
        short h2 = sorted[2];


        if((max(s[0],s[1])==h1 && max(s[2],s[3])==h2) || (max(s[0],s[1]) == h2 && max(s[2],s[3])==h1)) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
        
    }
    return 0;
}
