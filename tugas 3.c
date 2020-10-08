#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct data{
	char nama[30], npm[15], prodi[20], fak[20], agama[20], askot[20];
	int umur;
} data[100];
int a,b,c,d;

void inputdata()
{
	printf("Masukkan jumlah data yang akan diinput"); scanf("%d",&b);
	d=0;
	for(c=0;c<b;c++){
		d=d+1;
		printf("Data ke- %d\n",d);
		printf("Nama\t: ");scanf("%s",&data[a].nama);
		printf("NPM\t: ");scanf("%s",&data[a].npm);
		printf("Umur\t: ");scanf("%d",&data[a].umur);
		printf("Agama: ");scanf("%s",&data[a].agama);
		printf("Asal Kota: ");scanf("%s",&data[a].askot);
		printf("Program Studi: ");scanf("%s",&data[a].prodi);
		printf("Fakultas: ");scanf("%s",&data[a].fak);
		a++;
	} clscr();
}

void lihatdata(){
	int i,j;
	j=0;
	for(i=0;i<a;i++){
		j=j+1;
		printf("%d Nama\t: ",j);scanf("%s",&data[a].nama);
		printf("NPM\t: ");scanf("%s",&data[a].npm);
		printf("Umur\t: ");scanf("%d",&data[a].umur);
		printf("Agama: ");scanf("%s",&data[a].agama);
		printf("Asal Kota: ");scanf("%s",&data[a].askot);
		printf("Program Studi: ");scanf("%s",&data[a].prodi);
		printf("Fakultas: ");scanf("%s",&data[a].fak);	
	}
		getch();clrscr();
}

void hapusdata(){
	int i,x,y;
	printf("Hapus data ke- ");scanf("%d",&x);
	y=x-1;
	a--;
	for(i=y;i<a;i++){
		data[i]=data[i+1];
	}
	clrscr();
	printf("\n\n\n\n\n\n\n\n\n\n Data ke- %d Terhapus ",x);
	getch();clrscr();
}

void editdata(){
	int k,l;
	printf("Masukkan data yang akan di edit: ");scanf("%d",&k);
	l=k-1;
		printf("Nama\t: ");scanf("%s",&data[a].nama);
		printf("NPM\t: ");scanf("%s",&data[a].npm);
		printf("Umur\t: ");scanf("%d",&data[a].umur);
		printf("Agama: ");scanf("%s",&data[a].agama);
		printf("Asal Kota: ");scanf("%s",&data[a].askot);
		printf("Program Studi: ");scanf("%s",&data[a].prodi);
		printf("Fakultas: ");scanf("%s",&data[a].fak);
	lihatdata();
}

int main(){
	int pilih;
	char w;
	printf("\n\nProgram struktur Data\n\n");
	getch();clrscr();
	awal:
		printf("Menu\n");
		printf("1.Masukkan data\n");
		printf("2.Hapus Data\n");
		printf("3.Lihat data\n");
		printf("4.Edit data\n");
		printf("5.Keluar\n\n");
		printf("Masukkan pilihan:");scanf("%d",&pilih);
		if(pilih==1){
			clrscr();inputdata();goto awal;
		}
		if(pilih==2){
			clrscr();hapusdata();goto awal;
		}
		if(pilih==3){
			clrscr();lihatdata();goto awal;
		}
		if(pilih==4){
			clrscr();editdata();goto awal;
		}
		if(pilih==5){
			clrscr();
			printf("Apakah ada yakin ingin keluar?[Y]/[N]\n");
			scanf("%s",&w);
			if(w=='y'||w=='Y')
			{clrscr();
				printf("\n\nProgram Selesai");
			}
			if(w=='n'||w=='N')
			{clrscr();goto awal;
			}
		}
		else{
			clrscr();
			printf("Pilihan 1-5"); getch(); clrscr(); goto awal; 
		}
}
	
