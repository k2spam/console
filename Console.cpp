#include <iostream>
#include <time.h>

int main()
{
	struct tm buf;
	time_t t = time(NULL);
	localtime_s(&buf, &t);

	const int n = 5;
	int arr[n][n];

	std::cout << "Generated array:\n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = i + j;
			std::cout << arr[i][j] << " ";
		}
		std::cout << '\n';
	}

	int sum = 0;
	int lineNumber = buf.tm_mday % n;

	for (int num : arr[lineNumber])
		sum += num;

	std::cout << "Line number: " << lineNumber << '\n';
	std::cout << "Line sum: " << sum << '\n';
}