#include <iostream>
#include "Test2.h"
using namespace std;

void Test2::print(void)
{
	cout << "File:" <<__FILE__ << "\t"  \
			<< "Func:" << __func__  << "\t" \
			<< "Line:" << __LINE__ << endl;
}
