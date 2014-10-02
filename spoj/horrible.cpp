#include <iostream>
#include <limits>
#include <cstdio>
#include <cstring>

typedef long long LL;

//Read cumulative frequency
LL read(LL idx, LL *tree)
{
	LL sum = 0;
	LL tmp = 0;
	
	while (idx > 0)
	{
		sum += tree[idx];
		tmp = (idx & -idx); //separate out the last "1" rightmost bit 
		idx -= tmp; //Move right upwards in the tree
	}
	
	return sum;
}

//Change frequency at some position and update tree
void update(LL idx, LL val, LL *tree, LL size) 
{
	if (val == 0)
		return;
		
	LL tmp = 0;
	
	while (idx <= size)
	{
		tree[idx] += val;
		tmp = (idx & -idx);//separate out the last "1" rightmost bit 
		idx += tmp; //move left upwards in the tree
	}
}

int main()
{
	LL t, n, c, b, p, q, v;
	LL min = std::numeric_limits<LL>::max(), max = std::numeric_limits<LL>::min();
	bool updated = true;
	LL arr[100000] = {0}, tmpArr[100000]= {0};
	
	std::cin >>  t;
	
	while (t--)
	{
		std::cin >> n >> c;
		
		memset(arr, 0, n);
		memset(tmpArr, 0, n);
		
		while (c--)
		{
			std::cin >> b;
			
			switch (b)
			{
				case 0:
					std::cin >> p >> q >> v;
					update(p, v, arr, n);
					 
					 if (q < n)
						update(q + 1, -v, arr, n);
				break;
				
				case 1:
					std::cin >> p >> q;
					std::cout << read(q, arr) - read(p - 1, arr) << std::endl;
				break;
			}
		}		
	}
	
	return 0;
}
