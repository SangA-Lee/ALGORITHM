def shell(datas):
    size = len(datas)

    hibbard_size = int(size/10)+2;
    hibbard_gap=[]

    for i in range(hibbard_size, 0, -1):
        hibbard_gap.append(int(pow(2,i))-1);

    for h in hibbard_gap:
        for i in range(h,size):
            cur = datas[i]
            j = i
            while j >= h and datas[j-h] > cur:
                datas[j] = datas[j-h]
                j = j-h
            datas[j] = cur
