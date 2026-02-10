
This project has been created as partof the 42 curriculum by haskalov (Hana Skalova)

Description


This project is about sorting elements in linked-list stack.


you can sort elements by these operations:

sa : swap a - Swap the first 2 elements at the top of stack A. Do nothing if there is only one or no elements.
sb : swap b - Swap the first 2 elements at the top of stack B. Do nothing if there is only one or no elements.
ss : sa and sb at the same time.
pa : push a - take the first element at the top of b and put it at the top of a. Do nothing if B is empty.
pb : push b - take the first element at the top of a and put it at the top of b. Do nothing if A is empty.
ra : rotate a - shift up all elements of stack A by 1. The first element becomes the last one.
rb : rotate b - shift up all elements of stack B by 1. The first element becomes the last one.
rr : ra and rb at the same time.
rra : reverse rotate a - shift down all elements of stack A by 1. The last element becomes the first one.
rrb : reverse rotate b - shift down all elements of stack B by 1. The last element becomes the first one.
rrr : rra and rrb at the same time.

example: 

./push_swap 5 8 3 6 4

ra
sa
pb
ra
sa
pb
sa
pa
pa



Instructions


Compilation

Compile program use make (or make re)


Sorting of a Small Stack

2 - 5 numbers are sorted by tiny sort

Sorting of a Large Stack

more numbers are sorted by radix sort


use: 

./push_swap 5 8 3 6 4
./push_swap "5 8 3 6 4"
./push_swap "222" 1 3 5 "6 7"


function should write "Error" if there is:

- some not-number character   (example: ./push_swap 5 8 aaa)
- duplicated number (example: ./push_swap 2 2  ./push_swap 1 001)
- longer number than int (example: ./push_swap -2147483649)
- non-integer number (example: ./push_swap 2.222222)
-  > 1 sign / sign between numbers (example: ./push_swap ++5 ./push_swap 2-2)
- empty arg / arg with only space/nl/tab (example: ./push_swap ""   ./push_swap " ")


if there are no operations needed, function write nothing.

example: 

./push_swap 1 
./push_swap 1 2
./push_swap 1 2 3 4 5 6



Resources


push_swap tutorial https://www.youtube.com/watch?v=OaG81sDEpVk

AI - chatgpt used as an advisor for helping find segfaults and checking errors


testers 


push_swap tester used for basic check https://github.com/gemartin99/Push-Swap-Tester 
	
valgrind checker used for checking memory leaks https://valgrind.org/



