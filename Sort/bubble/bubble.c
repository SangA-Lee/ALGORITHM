void bubble(int* datas, int _size)
{
    int size = _size - 1;
    for(int i = 0 ; i < size ; i++)
    {
        for(int j = 0 ; j < size - i ; j++)
        {
            if(datas[j] > datas[j+1])
            {
                int temp = datas[j];
                datas[j] = datas[j+1];
                datas[j+1] = temp;
            }
        }
    }
    return;
}
