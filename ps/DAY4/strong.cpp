#include<bits/stdc++.h>
using namespace std;
int factorial[] = { 1, 1, 2, 6, 24, 120,
					720, 5040, 40320, 362880 };
bool isStrong(int N)
{
	string num = to_string(N);
	int sum = 0;

	for(int i = 0; i < num.length(); i++)
	{
		sum += factorial[num[i] - '0'];
	}
	return sum == N;
}
void printStrongNumbers(int N)
{
	for(int i = 1; i <= N; i++)
	{
		if (isStrong(i))
		{
			cout << i << " ";
		}
	}
}
int main()
{
	int N;
    cout<<"enter no.";
    cin>>N;
	
	printStrongNumbers(N);
	
	return 0;
}
