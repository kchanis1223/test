#include<iostream>
using namespace std;

int main()
{
	int N, M, K;
	cin >> N >> M >> K;
	int count = 0;
	
	while (count < K){
		if (N >= 2 * M)
		{N -= 1;}
		else
		{M -= 1;}
		count += 1;
	}
	if (N >= 2 * M)
	{cout << M;}
	else
	{cout << N / 2;}
		return 0;
}