#include <math.h>

int shell(int* datas, int size)
{
    int hibbard_size = 5;
    int* hibbard_gap = (int*)malloc(sizeof(int)*hibbard_size);
    for(int i = 1 ; i < hibbard_size ; i++)
        hibbard_gap[i] = pow(2,i)-1;
    
    int pass = 0;
    for(int idx = 0 ; idx < hibbard_size ; idx++)
    {
        int h = hibbard_gap[idx];
        for(int i = h ; i < size - 1 ; i++)
        {
            int cur = datas[i];
            int j = i;
            while(j >= h && datas[j-h] > cur)
            {
                datas[j] = datas[j-h];
                j = j-h;
                
                pass++;
            }
            datas[j] = cur;
        }
    }
    
    return pass;
}
