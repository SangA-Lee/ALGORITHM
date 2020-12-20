def bubble(datas):
    size = len(datas)-1
    for i in range(0,size):
        for j in range(0,size-i):
            if datas[j] > datas[j+1]:
                temp = datas[j]
                datas[j] = datas[j+1]
                datas[j+1] = datas[j]
