def bubble_min(datas):
    size = len(datas)
    for i in range(0,size):
        min = i
        for j in range(i,size):
            if datas[min] > datas[j]:
                min = j
                
        temp = datas[i]
        datas[i] = datas[min]
        datas[min] = datas[i]

def bubble_max(datas):
    size = len(datas)
    for i in range(0,size):
        max = 0
        for j in range(1,size-i):
            if datas[max] < datas[j]:
                max = j
                
        temp = datas[size-i-1]
        datas[size-i-1] = datas[max]
        datas[max] = datas[size-i-1]
