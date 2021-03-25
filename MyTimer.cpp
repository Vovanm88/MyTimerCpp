#include "MyTimer.h"
MyTimer::MyTimer(){
	QueryPerformanceFrequency(&frequency);
	QueryPerformanceCounter(&start);
}
MyTimer::double elapsed(){
	QueryPerformanceCounter(&nowTmp);
	return (nowTmp.QuadPart - start.QuadPart) * 1000.0 / frequency.QuadPart;
}
MyTimer::void reset(){
	QueryPerformanceFrequency(&frequency);
	QueryPerformanceCounter(&start);
}
MyTimer::double now(){
	QueryPerformanceCounter(&nowTmp);
	return (nowTmp.QuadPart) * 1000.0 / frequency.QuadPart;
}
