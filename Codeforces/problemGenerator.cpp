#include <stdio.h>


int problemGenerator(){
short n;
scanf("%hd",&n);
short m;
short count;
scanf("%hd",&m);
char rank[8] = {'A', 'B', 'C', 'D', 'E', 'F', 'G','\0'};
char arr[n];
 for (int i = 0; i < n; i++) {
        scanf("%s", arr[i]);
    }


short i=0,j=0;
short found = 0;
while(i<7 && j<n) {
    j=0;count = m;
    if (found == count) break;
    while (count!=0)
    {
        if (rank[i]==arr[j]) found++;
        

        
    }
    
    
}

}

int main() {
    short t;
   scanf("%hd", &t);
    
    while (t--) {
        
        printf("%hd",problemGenerator());
    }
    return 0;
}