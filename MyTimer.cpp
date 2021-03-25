#include "MyTimer.h"
MyTimer::MyTimer(){
	QueryPerformanceFrequency(&frequency);
	QueryPerformanceCounter(&start);
}
double MyTimer::elapsed(){
	QueryPerformanceCounter(&nowTmp);
	return (nowTmp.QuadPart - start.QuadPart) * 1000.0 / frequency.QuadPart;
}
void MyTimer::reset(){
	QueryPerformanceFrequency(&frequency);
	QueryPerformanceCounter(&start);
}
double MyTimer::now(){
	QueryPerformanceCounter(&nowTmp);
	return (nowTmp.QuadPart) * 1000.0 / frequency.QuadPart;
}
