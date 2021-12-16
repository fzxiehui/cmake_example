#include <iostream>
using namespace std;

int main(void) {
#ifdef DEBUG
	cout << "File:" <<__FILE__ << "\t"  \
			<< "Func:" << __func__  << "\t" \
			<< "Line:" << __LINE__ << endl;
#endif
	cout << "hello world!" << endl;
	return 0;
}
