#include <iostream>
#include "Test1.h"
using namespace std;

void Test1::print(void)
{
	cout << "File:" <<__FILE__ << "\t"  \
			<< "Func:" << __func__  << "\t" \
			<< "Line:" << __LINE__ << endl;
}
