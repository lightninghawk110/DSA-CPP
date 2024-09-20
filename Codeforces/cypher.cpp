#include<stdio.h>

void cypher(){
    short n;
    short Earr[n];
    short Rarr[n];
    short n_mov;
    for (short i = 0; i < n; i++)
    {
        scanf("%hd", &Earr[i]);
    }

    for (short i = 0; i < n; i++)
    {
        
        scanf("%hd", &n_mov);
        char mov[n_mov];
        for (short i = 0; i < n_mov; i++)
        {
            scanf("%c", mov+1);
        }
         for (short i = 0; i < n_mov; i++)
        {
             if (mov[i] == 'D')
        {
            if (Earr[i] == 9)
            {
                Earr[i] = 0;
            }else {
                Earr[i] = Earr[i]++;
            }
            
        } else{
             if (Earr[i] == 0)
            {
                Earr[i] = 9;
            }else {
                Earr[i] = Earr[i]--;
            }
        }
        }
      
        

    }
    
    
}