#include <stdio.h>
int main()
{
	int tanggal;
	int bulan;
	int tahun;
	printf("Tanggal : ");
	scanf("%d", &tanggal);
	printf("Bulan : ");
	scanf("%d", &bulan);
	printf("Tahun : ");
	scanf("%d", &tahun);
	
	printf("%d-", tanggal);
	if(bulan == 1){
		printf("Januari-");
	}else if(bulan == 2){
		printf("Februari-");
	}else if(bulan == 3){
		printf("Maret-");
	}else if(bulan == 4){
		printf("April-");
	}else if(bulan == 5){
		printf("Mei-");
	}else if(bulan == 6){
		printf("Juni-");
	}else if(bulan == 7){
		printf("Juli-");
	}else if(bulan == 8){
		printf("Agustus-");
	}else if(bulan == 9){
		printf("September-");
	}else if(bulan == 10){
		printf("Oktober-");
	}else if(bulan == 11){
		printf("November-");
	}
	else 
		printf("Desember-");
	
	printf("%d", tahun);
	return 0;
}
