#include <iostream>
#include "ExampleStaticLibrary.h"
using namespace std;

void ExampleStaticLibrary::print(void)
{
	cout << "File:" <<__FILE__ << "\t"  \
			<< "Func:" << __func__  << "\t" \
			<< "Line:" << __LINE__ << endl;
}
