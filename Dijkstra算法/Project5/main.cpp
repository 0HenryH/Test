#include"Dijkstra.h"
int main()
{
	int a;
	cout << "����������ͼ���м�������" << endl;
	cin >> a;
	Dijkstra D(a);
	D.set();   //�������
	D.calculate(); //���㵽ÿ��������·
	D.print();  //��ӡһ������ �ֱ�Ϊv1������������·����һ����Ϊv1����
	system("pause");
	return 0;
}