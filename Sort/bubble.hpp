#include <vector>
using namespace std;

int bubble(vector<int> &datas)
{
	int pass = 0;
	int size = (int)(datas.size() - 1);
	for(int i = 0 ; i < size ; i++)
	{
		for(int j = 0 ; j < size - i ; j++)
		{
			if(datas[j] > datas[j+1])
			{
				int temp = datas[j];
				datas[j] = datas[j+1];
				datas[j+1] = temp;
				
				pass++;
			}
		}
	}
	return pass;
}
