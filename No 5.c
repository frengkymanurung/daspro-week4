#include <stdio.h>
int main()
{
	char motor[50];
	int jumlah_beli;
	int harga_satuan;
	int total_bayar;
	int uang_bayar;
	int uang_kembali;

	printf("Nama Motor   : ");
	scanf("%[^\n]", &motor); // ini yang membuat kalimat secara keseluruhan dapat dibaca
	printf("Jumlah Beli  : ");
	scanf("%d", &jumlah_beli);
	printf("Harga Satuan : Rp.");
	scanf("%d", &harga_satuan);
	// total_bayar = jumlah_beli*harga_satuan;
	// printf("Total Bayar  : Rp.%d\n", total_bayar);
	printf("Total Bayar  : Rp.");
	scanf("%d", &total_bayar);
	printf("Uang Bayar   : Rp.");
	scanf("%d", &uang_bayar);
	printf("\n");

	total_bayar = jumlah_beli * harga_satuan;
	uang_kembali = uang_bayar - total_bayar;

	printf("Jumlah Uang kembalian Rp.%d", uang_kembali);
	return 0;
}
