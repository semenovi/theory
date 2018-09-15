# Strange theory
Program checks how much digits contents in all of integers in interval from 0 to `FLOOR_TENS * 10` using [BigInt.h](https://github.com/kasparsklavins/bigint).

## Example
Suppose, we want to count how much integer 7 contents in interval from 0 to 10^4. So, we change content of the `main.cpp` as follows:
```c++
  ...
  const int DIGIT = 7, FLOOR_TENS = 4;
  ...
```
Then we compile and run the program. After she has finished work we can see on the screen something as this:
![1) 0.1...](https://github.com/semenovi/theory/blob/master/screenshot.png "Screenshot")

## Features
All of constants that you can change located in `main.cpp`.

To change integer that you want to count change `const DIGIT`.

Program can print all of integers that contents digit that you want to count. To see their, change `const PRINT_INTEGERS`.

To change ceiling of interval of integers, change the value of `const FLOOR_TENS`.
