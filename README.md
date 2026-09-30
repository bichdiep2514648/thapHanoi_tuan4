# thapHanoi_tuan4
## Algorithm explanation

- In order to move n disks from Org rod to Des rod, possibly using Mid rod:
 - Base case : n = 1
     - Move disk 1 from Org rod to Des rod
 - For n > 1 :
     - Move n-1 disk(s) from  Org rod to Mid rod
     - Move disk n from Org rod to Des rod
     - Move n-1 disk(s) from Mid rod to Des rod
## Test Case
   
> Disk are numbered from the top to the bottom
### Test case 1
> input : n=


    1
 
> output:

    Move disk 1 from A to C

---
### Test case 2

> input: n=

    2
 
> output:

    Move disk 1 from A to B
    Move disk 2 from A to C
    Move disk 1 from B to C

---    
### Test case 3

> input: n=

    3

>output:

    Move disk 1 from A to C  
    Move disk 2 from A to B
    Move disk 1 from C to B
    Move disk 3 from A to C
    Move disk 1 from B to A
    Move disk 2 from B to C
    Move disk 1 from A to C
---
### Test case 4

> input : n=

    4
> ouput:

    Move disk 1 from A to B
    Move disk 2 from A to C
    Move disk 1 from B to C
    Move disk 3 from A to B
    Move disk 1 from C to A
    Move disk 2 from C to B
    Move disk 1 from A to B
    Move disk 4 from A to C
    Move disk 1 from B to C
    Move disk 2 from B to A
    Move disk 1 from C to A
    Move disk 3 from B to C
    Move disk 1 from A to B
    Move disk 2 from A to C
    Move disk 1 from B to C
