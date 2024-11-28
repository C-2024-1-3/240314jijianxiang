#include"mytemperature.h"
double ceitofah(double cel)
{
	double fah = cel * 1.8 + 32;
	return fah;
}
double fahtocei(double fah)
{
	double cel = (fah - 32) / 1.8;
	return cel;
}