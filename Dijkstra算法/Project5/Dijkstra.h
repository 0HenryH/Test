#include<iostream>
#include<cmath>
#define M 10000
#include<string>
using namespace std;
class Dijkstra
{
private:
	int min0;
	int dmin[30] = { 0 };
	int rmin[30] = { 0 };
	int n;
	int **dist;
public:
	Dijkstra(int a);
	void set();
	void calculate();
	void print();
};