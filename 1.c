include <stdio.h>

//main program
int main()
{

  //variable value
  long Gaji_Pokok = 4000000 ;
  long Tunjangan = 1000000 ;
  long Tunjangan_Istri = 200000 ;
  long Tunjangan_Anak = 100000 ;

  //variable to store values
  float Gaji_Pokok, Tunjangan, Tunjangan_Istri, Tunjangan_Anak;
  float Potongan_Pensiun, Potongan_BPJS;
	float total;
	float pajak;
	float Gaji_Sementara;
	float Gaji_Bersih;


	//input required fields
	printf("Gaji_Pokok (Rp): ");
	scanf("%f",&Gaji_Pokok);
	printf("Tunjangan (Rp): ");
	scanf("%f",&Tunjangan);
	printf("Tunjangan_Istri (Rp): ");
	scanf("%f",&Tunjangan_Istri);
	printf("Tunjangan_Anak (Rp): ");
	scanf("%f",&Tunjangan_Anak);

	//input required fields
	printf("Potongan_Pensiun (Rp): ");
	scanf("%f",&Potongan_Pensiun);
	printf("Potongan_BPJS (Rp): ");
	scanf("%f",&Potongan_BPJS);


	//calculate total
	total = Gaji_Pokok + Tunjangan + Tunjangan_Istri + Tunjangan_Anak;
  printf("total (Rp): ");
  scanf("%f",&total);

	//calculate pajak
	pajak = (total*10)/100;
  printf("pajak (Rp): ");
  scanf("%f",&pajak);

	//calculate Gaji Sementara
  Gaji_Sementara = total - pajak;
  printf("Gaji_Sementara (Rp) ");
  scanf("%f",&Gaji_Sementara);

  //input required fields
  printf("Potongan_Pensiun (Rp): ");
  scanf("%f",&Potongan_Pensiun);
  printf("Potongan_BPJS (Rp): ");
  scanf{"%f",&Potongan_BPJS);

  //calculate Gaji Bersih
	Gaji_Bersih = Gaji_Sementara - Potongan_Pensiun - Potongan_BPJS;
  printf("Gaji_Bersih (Rp): ");
  scanf("%f",&Gaji_Bersih);

  //printing Net salary
	printf("Gaji_Bersih adalah : Rp %.2f\n",Gaji_Bersih);


	return 0;
