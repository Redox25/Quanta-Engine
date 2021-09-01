#pragma once
#include <iostream>

#ifdef QE_PLATFORM_WINDOWS
	#ifdef QE_BUILD_DLL
		#define QE_API __declspec(dllexport) 
	#else 
		#define QE_API __declspec(dllimport) 
	#endif // QE_BUILD_DLL
#else 
	#error Support for  Specified Platform Currently in Development
#endif // QE_BUILD_WINDOWS

