#include <bits/stdc++.h>
#include "function1.cpp"
using namespace std;
// Driver code
int main()
{
	int val[3] = { 60, 100, 120 };
	int  wt[3] = { 10, 20, 30 };
	int W = 50;
	int  n = sizeof(val) / sizeof(val[0]);
	cout << knapSack(W, wt, val, n);
	return 0;
}

