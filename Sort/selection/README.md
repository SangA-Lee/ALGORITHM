## selection sort 

1. Wiki : [eng](https://en.wikipedia.org/wiki/Selection_sort) / [kor](https://ko.wikipedia.org/wiki/%EC%84%A0%ED%83%9D_%EC%A0%95%EB%A0%AC)

2. Time complexity : <img src="https://latex.codecogs.com/svg.latex?\Large&space;O(n^2)" title="\Large O(n^2)" width=40 height=15 />

    - The x-axis is *n* that is the size of data, y-axis is count of pass

    - When the *n* increase from 1 to 74, the pass of bubble sort is like <img src="https://latex.codecogs.com/svg.latex?\Large&space;0.37n^2" title="\Large 0.37n^2" width=40 height=15 />
    
      : the blue line is the pass of selection sort
      
      : the red line is <img src="https://latex.codecogs.com/svg.latex?\Large&space;0.37n^2" title="\Large 0.37n^2" width=40 height=15 />
    
    - For each *n*, the pass is average of 100 times
    
      : Interchange pass+1
      
      : Comparison pass+1

<p align="center">
  <img src="https://github.com/SangA-Lee/ALGORITHM/blob/main/Sort/selection/selection.jpg" title="bubble.jpg" width=200 height=200/>
  <img src="https://github.com/SangA-Lee/ALGORITHM/blob/main/Sort/selection/selection.gif" title="bubble.gif" width=200 height=200/>
</p>

3. Pseudo code

> input : array *A* that size of *n*  
> output : array *A* that sorted

(1) MinSelection

    for i=0 to n-2 {
        min=i
        for j=i+1 to n-1 {
            if(A[j]>A[min])
                min=j
        }
        A[i] <-> A[min]
    }
    return A

(2) MaxSelection

    for i=0 to n-2 {
        max=0
        for j=1 to n-i-1 {
            if(A[j]>A[max])
                max=j
        }
        A[n-i-1] <-> A[max]
    }
    return A
