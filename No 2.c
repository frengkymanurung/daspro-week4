//Studio musik Baji

#include <stdio.h>
int main()
{
	int tarif1 = 200000;
	int tarif2 = (200000*25)/100;
	int sewa;
	sewa = (tarif1 + (tarif2*5));
	
	printf("Lama Sewa : 6 jam\n");
	printf("Total Bayar : Rp.%d", sewa);
	
	return 0;
}
