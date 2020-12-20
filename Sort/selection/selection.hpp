#include <vector>
using namespace std;

int selection(vector<int> &datas)
{
    int pass = 0;
    int min;
    int size = (int)(datas.size());
    for(int i = 0 ; i < size ; i++)
    {
        min = i;
        for(int j = i+1 ; j < size ; j++)
        {
            if(datas[min] > datas[j])
                min = j;
            
            pass++;
        }
        
        int temp = datas[i];
        datas[i] = datas[min];
        datas[min] = temp;
    }
    return pass;
}
