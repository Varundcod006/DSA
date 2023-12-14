# 6.1 Shorting..

# 6.1.3 The Quick Short
- First Element as Pivot
- Last Element as Pivot
- Middle Element as Pivot
- Random Element as Pivot

Case 1 First Element As Pivot
35
*p

pivot = a[start]
pivot = a[start]

Ex | 51 95 66 72 42 38 39 45 15

pivot = high
p = high ,q = low

if p >= q{
    tmp = p
    p = pivot
    pivot = tmp
} else{
    if p > element{
        stop p
    } else{
        p ++
    }

    if q < element{
        stop q
    } else{
        q++
    }
}

Programm 

partision (arr[], low,hight){
    pivot = low
    p = low+1
    q = high

    // Repate step 3 
    while(low<=high){
        while(arr[p] < pivot){
            p++
        }
        
        while(arr[q] < pivot){
            p--
        }
    }

    if(p<q){
        
    }
}