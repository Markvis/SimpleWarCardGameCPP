#include "stdafx.h"
#include "war.h"
#include "cstdlib"
#include "time.h"
deck::deck()
{
	int i = 0;
	for(i = 0; i<13; i++)
	{
		c[i].setcard(i,'C');
	}
	for(i = 13; i<26; i++)
	{
		c[i].setcard(i-13,'S');
	}
	for(i = 26; i<39; i++)
	{
		c[i].setcard(i-26,'H');
	}
	for(i = 39; i<52; i++)
	{
		c[i].setcard(i-39,'D');
	}

	for(i = 0; i<52; i++)
		d[i] = 0;
}
void deck::resetdeck()
{
	for(int i = 0; i<52; i++)
		d[i] = 0;
}
void card::setcard(int a, char b)
{
	pip = a;
	suit = b;
}
//card deck::dealacard()
//{
//	srand(time(NULL));
//	int x = (rand() % 52);
//	card temp[26];
//
//	for(int i=0; i<26;i++)
//	{
//		while (d[x] != 0)
//		{
//			x = (rand() % 52);
//		}
//		temp[i].setcard(c[x].getpip(),c[x].getsuit());
//		d[x] = 1;
//	}
//
//	return temp[26];
//}
card deck::dealacard()
{
	srand(time(NULL));
	int x = (rand() % 52);
	card temp;

	while (d[x] != 0)
	{
		x = (rand() % 52);
	}

	temp.setcard(c[x].getpip(),c[x].getsuit());
	d[x] = 1;

	return temp;
}