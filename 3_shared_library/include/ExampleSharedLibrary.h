#ifndef EXAMPLE_SHARED_LIBRARY_H
#define EXAMPLE_SHARED_LIBRARY_H

#ifndef EXAMPLE_DLL
# ifdef _WIN32
#  if defined( BUILD_DLL )
#    define EXAMPLE_DLL __declspec(dllexport)
#  elif defined( USE_DLL )
#    define EXAMPLE_DLL __declspec(dllimport)
#  else
#    define EXAMPLE_DLL
#  endif
# else
#  define EXAMPLE_DLL
# endif
#endif

class EXAMPLE_DLL ExampleSharedLibrary
{
	public:
		void print(void);
};
#endif
