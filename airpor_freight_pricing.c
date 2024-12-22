#include <stdio.h>
#include <stdlib.h>

int main()
{
	int bavul, el,fiyat=0;
	printf("bavulunuz kac kg ?:");
	scanf_s("%d", &bavul);
	printf("elinizdeki esyalar kac kg ?:");
	scanf_s("%d", &el);
	if (bavul <= 15 && bavul>=0)
	{
		printf("ek bir ucret odemenize gerek yoktur");	
	}
	else if (bavul<0)
	{
		printf("lutfen bavulun kilosunu duzgun giriniz");
	}
	else if (bavul > 15)
	{
		int fazlalik = bavul - 15;
		for (int i = 1; i <= fazlalik; i++)
		{
			fiyat = fiyat + 5;
			
		}
		printf("odemeniz gereken ucret budur:%d", fiyat);
	}
	else
	{
		printf("lutfen duzgun bir islem yapin");
	}
	
	getch();
	
}
//SON GITHUB PROJESI
