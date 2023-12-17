#include <iostream>

using namespace std;

/*
You are given two numbers a and b where 0 ≤ a ≤ b. Imagine you construct an array of all the integers from a to b inclusive. You need to count the number of 1s in the binary representations of all the numbers in the array.

Example

	For a = 2 and b = 7, the output should be
	solution(a, b) = 11.

	Given a = 2 and b = 7 the array is: [2, 3, 4, 5, 6, 7]. Converting the numbers to binary, we get [10, 11, 100, 101, 110, 111], which contains 1 + 2 + 1 + 2 + 2 + 3 = 11 1s.

Input/Output

	[execution time limit] 0.5 seconds (cpp)

	[memory limit] 1 GB

[input] integer a

	Guaranteed constraints:
	0 ≤ a ≤ b.

[input] integer b

	Guaranteed constraints:
	a ≤ b ≤ 10.

[output] integer
*/

int solution(int a, int b) {
    int res = 0;

    for (; a <= b; a++){
        int x = 0;
        int i = 0;
        while (x < 4){
            int tmp = a >> x;
			tmp &= 1;
           	i += tmp;
			x++;
        }
        res += i;
    }
    return res;
}

// url https://app.codesignal.com/arcade/code-arcade/corner-of-0s-and-1s/eC2Zxu5H5SnuKxvPT
