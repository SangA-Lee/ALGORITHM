void selection_min(int* datas, int size)
{
    int min;
    for(int i = 0 ; i < size ; i++)
    {
        min = i;
        for(int j = i+1 ; j < size ; j++)
        {
            if(datas[min] > datas[j])
                min = j;
        }
        
        int temp = datas[i];
        datas[i] = datas[min];
        datas[min] = temp;
    }
    return;
}

void selection_max(int* datas, int size)
{
    int max;
    for(int i = 0 ; i < size ; i++)
    {
        max = 0;
        int j = 0;
        while(j < size-i)
        {
            if(datas[max] < datas[j++])
                max = j-1;
        }
        
        int temp = datas[j-1];
        datas[j-1] = datas[max];
        datas[max] = temp;
    }
    return;
}
