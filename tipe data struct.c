#include <stdio.h>

struct lagu { //membuat struct dengan menuliskan struct dan nama tipe data/identitas struct
	char *judul; //baris 4-6 variabel struct 
	char *penyanyi;
	int tahun;
};

void main() //kode program utama
{
	struct lagu lagu1, lagu2, lagu3, lagu4, lagu5; //mendefinisikan beberapa variabel sebagai struct lagu
	
	lagu1.judul = "Dynamite";//tanda titik digunakan untuk mengakses sub struct dari variabel sesuai dengan pendefinisian struct diatas
	lagu1.penyanyi= "BTS";
	lagu1.tahun= 2020;

	lagu2.judul = "Ice cream";
	lagu2.penyanyi= "Blackpink ft Selena Gomez";
	lagu2.tahun= 2020;
	
	lagu3.judul = "Before You Go";
	lagu3.penyanyi= "Lewis Capaldi";
	lagu3.tahun= 2019;
	
	lagu4.judul = "Maafkan Aku #Terlanjur mencinta";
	lagu4.penyanyi= "Tiara Andini";
	lagu4.tahun= 2020;
	
	lagu5.judul = "Cuek";
	lagu5.penyanyi= "Rizky Febian";
	lagu5.tahun= 2020;
	
	printf("##Top 5 Indonesia di Spotify##\n\n");
	printf("1. %s\n", lagu1.judul);
	printf("   %s\n", lagu1.penyanyi);
	printf("   %d\n", lagu1.tahun);
	
	printf("2. %s\n", lagu2.judul);
	printf("   %s\n", lagu2.penyanyi);
	printf("   %d\n", lagu2.tahun);
	
	printf("3. %s\n", lagu3.judul);
	printf("   %s\n", lagu3.penyanyi);
	printf("   %d\n", lagu3.tahun);
	
	printf("4. %s\n", lagu4.judul);
	printf("   %s\n", lagu4.penyanyi);
	printf("   %d\n", lagu4.tahun);
	
	printf("5. %s\n", lagu5.judul);
	printf("   %s\n", lagu5.penyanyi);
	printf("   %d\n", lagu5.tahun);
	
	getch();
}
