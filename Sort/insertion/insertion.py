def insertion(datas):
    size = len(datas)
    for i in range(1,size):
        cur = datas[i]
        j = i-1
        while j >= 0 and cur < datas[j]:
            datas[j+1] = datas[j]
            j = j-1
        datas[j+1]=cur
