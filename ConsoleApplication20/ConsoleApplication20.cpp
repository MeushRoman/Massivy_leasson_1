// ConsoleApplication20.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <limits>
#include <locale.h>


using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	


		int a[5] = { 1,2,6,4,5 };
		int z;

		for (int i = 0; i < 2; i++)
		{
			
			/*z = a[i];
			a[i] = a[5 - 1 - i];
			a[5 - 1 - i] = z;*/
			
			swap(a[i], a[5 - 1 - i]); 
		}

		for (int i = 0; i < 5; i++)
		{
			cout << a[i] << " ";
		}



	//for (int i = 0; i < 5; i++)
	//{
	//	
	//	
	//		if (a[i] == a[10 - 1 - i])
	//			sum++;
	//
	//	//if (a[i] < min_v) min_v = a[i];

	//}
	//if (sum == 5) cout << "симетричный" << endl; else cout << "не симетричный" << endl;
	////cout << min_v << endl;

	//system("pause");
	//return 0;
}



