/* 
Explaination of the problem :-

It is JJ's birthday and you decide to gift him a string S (consisting of English alphabet only) of length N. But you also know that JJ does not like palindromes so you decide that none of the substrings of S of length =2 should be a palindrome.

Can you find any suitable string which can be gifted to JJ?

Recall that a string is called palindrome if it reads the same backwards and forwards, for e.g. noon and level are palindromic strings.

Input Format
The first line contains T - the number of test cases. Then the test cases follow.
The first and only line of each test case contains an integer N - the length of the string S to be constructed.
Output Format
For each test case, output a string S of length N such that none of its substrings (of length =2) is a palindrome.

If there are multiple strings which satisfy the condition, print any.

Constraints
1=T=100
1=N=1000

Sample Input 1 
3
2
2
4

Sample Output 1 
gl
hf
waow
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	char gifts[t];
	while(t--)
	{
		int n;
		cin>>n;
		string gift="";
		char cur='a';
	for(int i=0;i<n;i++)
	{
	gift+=cur;
	if (cur=='z')
{
	cur='a';
}
	cur++;
	}
	cout<<gift<<"\n";
	}

	return 0;
}
