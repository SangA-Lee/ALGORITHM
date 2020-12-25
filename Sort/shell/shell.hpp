int shell(vector<int> &datas)
{
    int hibbard_size = (int)(datas.size()/10)+2;
    vector<int> hibbard_gap;
    for(int i = hibbard_size ; i >= 1 ; i--)
        hibbard_gap.push_back((int)pow(2,i)-1);
    
    int pass = 0;
    int size = (int)(datas.size());
    for(int idx = 0 ; idx < hibbard_gap.size() ; idx++)
    {
        int h = hibbard_gap[idx];
        for(int i = h ; i < size ; i++)
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
