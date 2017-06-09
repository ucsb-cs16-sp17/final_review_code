# Converting hex to bin

There are two ways to convert hexidecimal to binary
1. Convert hexidecimal to decimal, then decimal to binary
2. Convert directly to binary

The first option is much more complicating and hard to calculate. Luckily there is a trick to make the second option easy.

First we need to look at how many bits are needed to represent a digit in hexidecimal. Hexidecimal digits range from 0 to 9 and A to F. This means that a single digit represents a value from 0 to 15. A nice property of this is that it is an exact power of 2, 2^4. By converting each digit to binary, we perfectly representing that digit.

An example: 

0x39:
first convert 9 -> 1001
then convert 3 -> 0011
then put them together: 0x39 -> 0011 1001

This works for numbers of any size:

0x5AC
C -> 1100
A -> 1010
5 -> 0101
0x5AC -> 0101 1010 1100

# Converting bin to hex

The same thing we applied above works the other way as well. Example:

1100 0100 1000
1000 -> 8
0100 -> 4
1100 -> C
1100 0100 1000
0xC48

What if you are given 110011?
Break up the first part:
0011 -> 3
When you get to the second part (11), fill in the front with 0s:
11 -> 0011
Then conver to hex:
0011 -> 3
11 0011 -> 0x33

