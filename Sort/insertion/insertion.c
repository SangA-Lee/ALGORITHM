void insertion(int* datas, int size)
{
    int cur;
    for(int i = 1 ; i < size ; i++)
    {
        cur = datas[i];
        int j = i - 1;
        while(j >= 0 && datas[j] > cur)
        {
            datas[j+1] = datas[j];
            j--;
        }
        datas[j+1] = cur;
    }
    return;
}
