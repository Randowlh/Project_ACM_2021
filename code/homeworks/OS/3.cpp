#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;

#define N 100
int main()
{
	int max[N][N];
	int allocation[N][N];
	int need[N][N];
	int available[N];
	int v[N];
	int m, n, n0;
	int temp;

	int finsh[N];
	int result[N];
	int flag = 1;
	int p, sum;

	cin >> m >> n;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> max[i][j];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
		{
			cin >> allocation[i][j];
			need[i][j] = max[i][j] - allocation[i][j];
		}
	for (int i = 0; i < m; i++)
		cin >> available[i];
	cin >> n0;
	int tt = 1;
	for (int j = 0; j < m; j++)
	{
		cin >> v[j];
		if (v[j] > available[j])
			tt = 0;
	}
	if (tt = 1)
	{
		for (int j = 0; j < m; j++)
		{
			need[n0][j] = need[n0][j] - v[j];
			available[j] -= v[j];
			allocation[n0][j] += v[j];
		}
	};

	for (int i = 0; i < n; i++)
	{
		finsh[i] = 0;
	};

	for (int k = 0; k < n; k++)
	{
		temp = 0x3f3f3f3f;
		for (int i = 0; i < n; i++)
		{
			if (finsh[i] == 1)
				continue;
			sum = 0;
			for (int j = 0; j < m; j++)
				sum += need[i][j];
			if (sum < temp)
			{
				temp = sum;
				p = i;
			}
		}
		for (int j = 0; j < m; j++)
		{
			if (need[p][j] > available[j])
			{
				cout << "unsafe" << endl;
				return 0;
			}
		}
		result[k] = p;
		finsh[p] = 1;
		for (int j = 0; j < m; j++)
			available[j] += allocation[p][j];
	}

	for (int i = 0; i < n; i++)
		if (finsh[i] == 0)
			flag = 0;
	if (flag == 0)
		cout << "unsafe" << endl;
	else
	{
		cout << "safe" << endl;
		for (int i = 0; i < n; i++)
		{
			printf("P%02d\n", result[i]);
		}
	}
}