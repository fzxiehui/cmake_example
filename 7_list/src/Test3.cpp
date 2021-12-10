#include <iostream>
#include "Test3.h"
using namespace std;

void Test3::print(void)
{
	cout << "File:" <<__FILE__ << "\t"  \
			<< "Func:" << __func__  << "\t" \
			<< "Line:" << __LINE__ << endl;
}
