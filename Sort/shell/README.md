## shell sort 

1. Wiki : [eng](https://en.wikipedia.org/wiki/Shellsort) / [kor](https://ko.wikipedia.org/wiki/%EC%85%B8_%EC%A0%95%EB%A0%AC)

2. Time complexity : <img src="https://latex.codecogs.com/svg.latex?\Large&space;O(n^2)" title="\Large O(n^2)" width=40 height=15 />

    - The x-axis is *n* that is the size of data, y-axis is count of pass

    - When the *n* increase from 1 to 373, the pass of bubble sort is like <img src="https://latex.codecogs.com/svg.latex?\Large&space;n^{1.28}" title="\Large n^{1.28}" width=40 height=15 />
    
      : the blue line is the pass of insertion sort
      
      : the red line is <img src="https://latex.codecogs.com/svg.latex?\Large&space;n^{1.28}" title="\Large n^{1.28}" width=40 height=15 />
    
    - For each *n*, the pass is average of 100 times
      
      : Comparison pass+1

<p align="center">
  <img src="https://github.com/SangA-Lee/ALGORITHM/blob/main/Sort/shell/shell.jpg" title="bubble.jpg" width=200 height=200/>
  <img src="https://github.com/SangA-Lee/ALGORITHM/blob/main/Sort/shell/shell.gif" title="bubble.gif" width=200 height=200/>
</p>

3. Pseudo code

> input : array *A* that size of *n*  
> output : array *A* that sorted

    for each gap h = [h_0>h_1>h_2>...>h_k=1] {
      for i=h to n-1 {
        CurrentElement = A[i]
        j = i
        while (j >= 0) and (A[j-h] > CurrentElement) {
          A[j] = A[j-h]
          j = j-h
        }
        A[j] = CurrentElement
      }
    }
    return A