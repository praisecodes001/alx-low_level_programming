#include <main.h>
void findAbsolute(int N)
{
	if (N < 0)
	{
		N = (-1) * N;
	}
	cout << " " << N;
}
int main()
{
	int N = -10;

	findAbsolute(N);
	return 0;
}
