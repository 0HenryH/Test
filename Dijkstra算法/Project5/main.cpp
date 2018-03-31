#include"Dijkstra.h"
int main()
{
	int a;
	cout << "请输入有向图共有几个顶点" << endl;
	cin >> a;
	Dijkstra D(a);
	D.set();   //输入矩阵
	D.calculate(); //计算到每个点的最短路
	D.print();  //打印一个数组 分别为v1到各个点的最短路（第一个点为v1本身）
	system("pause");
	return 0;
}