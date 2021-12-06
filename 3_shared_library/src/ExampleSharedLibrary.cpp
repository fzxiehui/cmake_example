#include <iostream>
#include "ExampleSharedLibrary.h"
using namespace std;

void ExampleSharedLibrary::print(void)
{
	cout << "File:" <<__FILE__ << "\t"  \
			<< "Func:" << __func__  << "\t" \
			<< "Line:" << __LINE__ << endl;
}
