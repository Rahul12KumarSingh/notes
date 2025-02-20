Professor X had actually invented a model of a general Turing Machine, that with an infinitely long tape. Professor X was also a time traveller. He often travels back in time to get the chocolate which he loved so much when he was small but is no longer in production right now. Now he fired up the Turing machine and gave it a difficult problem to solve, a problem which has no known solution in the literature. 
As Professor X expected, the Turing machine did not halt even after 6 hours of computation. So Professor X got a brainwave. He will travel a 100 years in the future to see whether the Turing Machine has finally halted. To his surprise, 100 years into the future, the machine has halted. The excited Professor examines the tape. As expected the tape had an infinitely long string of Os and is printed. However, the Professor observed that a bunch of few characters tend to repeat themselves infinitely to form the string on the tape, Formally speaking there is a string s = 01001 so the tape on the Turing machine looks like this 010010100101001... Professor X often has an obsessive feeling of asking challenging questions and answer them. In a similar feat, he asked himself as to how many prefixes of the string on the tape are present in which the number of 1s are x in number for an integer x? 
Input Format 
• The first line of input consists of 2 space separated integers N and x, denoting the length of s and the number x respectively. 
. The next line consists of string s

Constraints 
1<=N<10 
0<X<= 10 
Output Format 
You have to print a single integer, denoting the number of prefixes of the string on the tape are present in which the number of ones(1s) are x in number for an integer x. 
If the number of such prefixes that satisfy the condition are infinite, output -1 
Evaluation Parameters 



Input 
4  3 
1101 
Output 
1 
Explanation 
The string on the tape can be represented as 1101110111011101..... As we see the only desirable prefix is of length 4(ie. 1101 has 3 ones) 



Input 
3  0 
000