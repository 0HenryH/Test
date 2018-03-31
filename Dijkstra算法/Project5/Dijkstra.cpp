#include"Dijkstra.h"
Dijkstra::Dijkstra(int a)
{
	n = a;
}

void Dijkstra::set()
{
	int i, j;
	dist = new int*[n];
	for (i = 0; i < n; i++)
	{
		dist[i] = new int[n];
	}
	cout << "���������� 0��ʾ���ܵ���" << endl;
	for (i = 0; i < n; i++)
	{
		cout << "��������v" << i + 1 << "���������" << endl;
		for (j = 0; j < n; j++)
		{
			cin >> dist[i][j];
			if (dist[i][j] == 0)
			{
				dist[i][j] = M;
			}
		}
	}
}

void Dijkstra::calculate()
{
	int i, j, k;  //k������������
	k = 0;
	for (i = 0; i < n; i++)
	{
		dmin[i] = M;
		dmin[0] = 0;
	}                         //��ʼ��
	int min = 2 * M;
	for (i = 1; i < n; i++)
	{
		min = 2 * M;
		for (j = 1; j < n; j++)
		{
			dmin[j] = ((dmin[j]) >(min0 + dist[k][j])) ? (min0 + dist[k][j]) : dmin[j];
		}
		for (j = 1; j < n; j++)
		{
			if (dmin[j] < min)
			{
				min = dmin[j];
				k = j;
			}
		}
		rmin[k] = min;
		min0 = min;
		dmin[k] = M;
	}
}

void Dijkstra::print()
{
	int i;
	cout << rmin[0] << " ";
	for (i = 1; i < n; i++)
	{
		cout << rmin[i] << " ";
	}
	cout << endl;
}
