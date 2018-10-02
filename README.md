# Strange theory
The program checks how much digits are contained in all of integers between 0 to `FLOOR_TENS * 10` using [BigInt.h](https://github.com/kasparsklavins/bigint) by [Kaspars](https://github.com/kasparsklavins).

Counting takes very a long time on integers greater 10^6, since program doesn't use optimization.

TODO: add optimization :), add a module to run on a multi-core cpu (or multi-thread mode, i don't know which is better), add a module to run on CUDA-compatible gpu.

## Example
Suppose, we want to count how much integers in interval from 0 to 10^4 content digit 7. So, we change content of the `main.cpp` as follows:
```c++
  ...
  const int DIGIT = 7, FLOOR_TENS = 4;
  ...
```
Then we compile and run the program. After she has finished work we can see result:
```
1) 0.1
2) 0.19
3) 0.271
4) 0.3439
```
where we can see number of integers that content digit 7 in intervals (0, 10), (10, 100) i.e.

## Features
All of constants that you can change located in `main.cpp`.

To change integer that you want to count change `const DIGIT`.

Program can print all of integers that contents digit that you want to count. To see their, change `const PRINT_INTEGERS`.

To change ceiling of interval of integers, change the value of `const FLOOR_TENS`.
