#ifndef MYTIMER_H
#define MYTIMER_H
#include <windows.h>                // for Windows APIs
class MyTimer{
	private:
		LARGE_INTEGER frequency;        // ticks per second
		LARGE_INTEGER start, nowTmp;           // ticks
	public:
		MyTimer();
		double elapsed();
		void reset();
		double now();
};
#endif // MYTIMER_H
