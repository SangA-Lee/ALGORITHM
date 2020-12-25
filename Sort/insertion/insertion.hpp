#include <vector>
using namespace std;

int insertion(vector<int> &datas)
{
    int pass = 0;
    int cur;
    int size = (int)(datas.size());
    
    for(int i = 1 ; i < size ; i++)
    {
        cur = datas[i];
        int j = i - 1;
        while(j >= 0 && datas[j] > cur)
        {
            datas[j+1] = datas[j];
            j--;
            
            pass++;
        }
        datas[j+1] = cur;
    }
    
    return pass;
}
