#include <iostream>
#include <windows.h>
#include <fstream>
#include <stdlib.h>

using namespace std;

struct variabel{
    int pilih, hari, sewa, mbayar, kembali, kurang, input, pencari, angka, unit;
    string nama, alamat, user, nomor_telepon;
    int kodebus[9]={7171, 7172, 7173, 7174, 7175, 7176, 7177, 7178, 7179};
    int i=0;
    int n=9;
    float a[9]={7173, 7178, 7179, 7174, 7175, 7176, 7177, 7171, 7172};
}x;

int nggolet(){
	cout << "Cari Tipe Bus Berdasarkan Nomor Kode : ";
	cin >> x.pencari;
	for(x.i=0;x.i<9;x.i++){
		if(x.kodebus[x.i]==x.pencari)
			x.angka=x.kodebus[x.i];
	}
	if(x.angka==x.pencari){
		cout << "Tipe bus dengan nomor kode " << x.pencari << " ditemukan " << endl;
	}else{
		cout << "Tipe bus dengan nomor kode " << x.pencari << " tidak ditemukan" << endl;
	}
}

void judul(){
    cout << "============================= \n";
    cout << "   DATA IDENTITAS PENYEWA  \n";
    cout << "============================= \n\n";
}

void identitas(){
	judul();
    ofstream outfile;
    ifstream infile;
    outfile.open("datapenyewa.txt", ios::trunc);

    cout << "Masukkan Nomor Telepon : ";
    cin >> x.nomor_telepon;
    cout << "Masukkan Nama          : ";
    cin.ignore();
    getline(cin, x.nama);
    cout << "Masukkan Alamat        : ";
    getline(cin, x.alamat);

    cout << endl;

    outfile <<  x.nama << endl;
    outfile <<  x.alamat << endl;
    outfile <<  x.nomor_telepon << endl;
    outfile.close();

    infile.open("datapenyewa.txt");
    string tmp;
    while(getline(infile, tmp)){
        cout << tmp << " | ";
    }
    infile.close();
    cout << endl;
}

void mb1626(){
    identitas();
    cout << "============================= \n\n";
    cout << "TIPE BUS       : DAC HOLIDAY HDD MERCEDES-BENZ OH 1626" << endl;
    cout << "NO. PLAT       : R 7173 US" << endl;
    cout << "HARGA SEWA     : Rp 3.700.000/hari" << endl;
    cout << "============================= \n\n";
    cout << "Masukkan Hari  			      : ";
    cin >> x.hari;
    cout << "Masukkan banyak unit yang akan disewa : ";
    cin >> x.unit;
    x.sewa=(x.unit*x.hari)*3700000;
    mbayarr:
    cout << "Biaya Sewa   			      : Rp " << x.sewa << endl;
    cout << "================================================== \n";
    cout << "Jumlah Pembayaran                     : Rp ";
    cin >> x.mbayar;
    x.kembali=x.mbayar-x.sewa;
    if(x.mbayar == x.sewa){
        cout << "Pembayaran Pas. Terima kasih atas kepercayaan anda.";
    }else if(x.mbayar > x.sewa){
        cout << "Kembali                               : Rp " << x.kembali;
        cout << endl;
        cout << "Terimakasih atas kepercayaan anda." << endl;
    }else{
        cout << "Maaf, pembayaran masih kurang";
        cout << endl;
        goto mbayarr;
    }
    cout << endl;

}

void mb500(){
    identitas();
    cout << "============================= \n\n";
    cout << "TIPE BUS       : DAC HOLIDAY SDD MERCEDES-BENZ OC 500 RF " << endl;
    cout << "NO. PLAT       : R 7178 US" << endl;
    cout << "HARGA SEWA     : Rp 10.500.000/hari" << endl;
    cout << "============================= \n\n";
    cout << "Masukkan Hari                         : ";
    cin >> x.hari;
    cout << "Masukkan banyak unit yang akan disewa : ";
    cin >> x.unit;
    x.sewa=(x.unit*x.hari)*10500000;
    mbayarr:
    cout << "Biaya Sewa                            : Rp " << x.sewa << endl;
    cout << "================================================== \n";
    cout << "Jumlah Pembayaran                     : Rp ";
    cin >> x.mbayar;
    x.kembali=x.mbayar-x.sewa;
    if(x.mbayar == x.sewa){
        cout << "Pembayaran Pas. Terima kasih atas kepercayaan anda.";
    }else if(x.mbayar > x.sewa){
        cout << "Kembali                               : Rp " << x.kembali;
        cout << endl;
		cout << "Terimakasih atas kepercayaan anda." << endl;
    }else{
        cout << "Maaf, pembayaran masih kurang";
        cout << endl;
        goto mbayarr;
    }
    cout << endl;

}

void vb11r(){
    identitas();
    cout << "============================= \n\n";
    cout << "TIPE BUS       : DAC HOLIDAY UHD VOLVO B11R" << endl;
    cout << "NO. PLAT       : R 7179 US" << endl;
    cout << "HARGA SEWA     : Rp 10.500.000/hari" << endl;
    cout << "============================= \n\n";
    cout << "Masukkan Hari                         : ";
    cin >> x.hari;
    cout << "Masukkan banyak unit yang akan disewa : ";
    cin >> x.unit;
    x.sewa=(x.unit*x.hari)*10500000;
    mbayarr:
    cout << "Biaya Sewa                            : Rp " << x.sewa << endl;
    cout << "================================================== \n";
    cout << "Jumlah Pembayaran                     : Rp ";
    cin >> x.mbayar;
    x.kembali=x.mbayar-x.sewa;
    if(x.mbayar == x.sewa){
        cout << "Pembayaran Pas. Terima kasih atas kepercayaan anda.";
    }else if(x.mbayar > x.sewa){
        cout << "Kembali                               : Rp " << x.kembali;
        cout << endl;
        cout << "Terima kasih atas kepercayaan anda." << endl;
    }else{
        cout << "Maaf, pembayaran masih kurang";
        cout << endl;
        goto mbayarr;
    }
    cout << endl;

}

void mb1836(){
    identitas();
    cout << "============================= \n\n";
    cout << "TIPE BUS       : DAC HOLIDAY SHD MERCEDES-BENZ OH 1836 " << endl;
    cout << "NO. PLAT       : R 7174 US" << endl;
    cout << "HARGA SEWA     : Rp 3.800.000/hari" << endl;
    cout << "============================= \n\n";
    cout << "Masukkan Hari                         : ";
    cin >> x.hari;
    cout << "Masukkan banyak unit yang akan disewa : ";
    cin >> x.unit;
    x.sewa=(x.unit*x.hari)*3800000;
    mbayarr:
    cout << "Biaya Sewa                            : Rp " << x.sewa << endl;
    cout << "================================================== \n";
    cout << "Jumlah Pembayaran                     : Rp ";
    cin >> x.mbayar;
    x.kembali=x.mbayar-x.sewa;
    if(x.mbayar == x.sewa){
        cout << "Pembayaran Pas. Terima kasih atas kepercayaan anda.";
    }else if(x.mbayar > x.sewa){
        cout << "Kembali                               : Rp " << x.kembali;
        cout << endl;
        cout << "Terima kasih atas kepercayaan anda." << endl;
    }else{
        cout << "Maaf, pembayaran masih kurang";
        cout << endl;
        goto mbayarr;
    }
    cout << endl;

}

void scaniak360(){
    identitas();
    cout << "============================= \n\n";
    cout << "TIPE BUS       : DAC HOLIDAY SHD SCANIA K360iB" << endl;
    cout << "NO. PLAT       : R 7175 US" << endl;
    cout << "HARGA SEWA     : Rp 5.800.000/hari" << endl;
    cout << "============================= \n\n";
    cout << "Masukkan Hari                         : ";
    cin >> x.hari;
    cout << "Masukkan banyak unit yang akan disewa : ";
    cin >> x.unit;
    x.sewa=(x.unit*x.hari)*5800000;
    mbayarr:
    cout << "Biaya Sewa                            : Rp " << x.sewa << endl;
    cout << "================================================== \n";
    cout << "Jumlah Pembayaran                     : Rp ";
    cin >> x.mbayar;
    x.kembali=x.mbayar-x.sewa;
    if(x.mbayar == x.sewa){
        cout << "Pembayaran Pas. Terima kasih atas kepercayaan anda.";
    }else if(x.mbayar > x.sewa){
        cout << "Kembali                               : Rp " << x.kembali;
        cout << endl;
        cout << "Terima kasih atas kepercayaan anda." << endl;
    }else{
        cout << "Maaf, pembayaran masih kurang";
        cout << endl;
        goto mbayarr;
    }
    cout << endl;

}

void pc500rf(){
    identitas();
    cout << "============================= \n\n";
    cout << "TIPE BUS       : DAC HOLIDAY PREMIUM CLASS OC 500 RF" << endl;
    cout << "NO. PLAT       : R 7176 US" << endl;
    cout << "HARGA SEWA     : Rp 7.800.000/hari" << endl;
    cout << "============================= \n\n";
    cout << "Masukkan Hari                         : ";
    cin >> x.hari;
    cout << "Masukkan banyak unit yang akan disewa : ";
    cin >> x.unit;
    x.sewa=(x.unit*x.hari)*7800000;
    mbayarr:
    cout << "Biaya Sewa                            : Rp " << x.sewa << endl;
    cout << "================================================== \n";
    cout << "Jumlah Pembayaran                     : Rp ";
    cin >> x.mbayar;
    x.kembali=x.mbayar-x.sewa;
    if(x.mbayar == x.sewa){
        cout << "Pembayaran Pas. Terima kasih atas kepercayaan anda.";
    }else if(x.mbayar > x.sewa){
        cout << "Kembali                               : Rp " << x.kembali;
        cout << endl;
        cout << "Terima kasih atas kepercayaan anda. " << endl;
    }else{
        cout << "Maaf, pembayaran masih kurang";
        cout << endl;
        goto mbayarr;
    }
    cout << endl;

}

void pck410ib(){
    identitas();
    cout << "============================= \n\n";
    cout << "TIPE BUS       : DAC HOLIDAY PREMIUM CLASS SCANIA K410iB" << endl;
    cout << "NO. PLAT       : R 7177 US" << endl;
    cout << "HARGA SEWA     : Rp 9.500.000/hari" << endl;
    cout << "============================= \n\n";
    cout << "Masukkan Hari                         : ";
    cin >> x.hari;
    cout << "Masukkan banyak unit yang akan disewa : ";
    cin >> x.unit;
    x.sewa=(x.unit*x.hari)*9500000;
    mbayarr:
    cout << "Biaya Sewa                            : Rp " << x.sewa << endl;
    cout << "================================================== \n";
    cout << "Jumlah Pembayaran                     : Rp ";
    cin >> x.mbayar;
    x.kembali=x.mbayar-x.sewa;
    if(x.mbayar == x.sewa){
        cout << "Pembayaran Pas. Terima kasih atas kepercayaan anda.";
    }else if(x.mbayar > x.sewa){
        cout << "Kembali                               : Rp " << x.kembali;
        cout << endl;
        cout << "Terima kasih atas kepercayaan anda. " << endl;
    }else{
        cout << "Maaf, pembayaran masih kurang";
        cout << endl;
        goto mbayarr;
    }
    cout << endl;

}

void minibus(){
    identitas();
    cout << "============================= \n\n";
    cout << "TIPE BUS       : DAC HOLIDAY MERCEDES-BENZ SPRINTER (MINIBUS)" << endl;
    cout << "NO. PLAT       : R 7171 US" << endl;
    cout << "HARGA SEWA     : Rp 1.350.000/hari" << endl;
    cout << "============================= \n\n";
    cout << "Masukkan Hari                         : ";
    cin >> x.hari;
    cout << "Masukkan banyak unit yang akan disewa : ";
    cin >> x.unit;
    x.sewa=(x.unit*x.hari)*1350000;
    mbayarr:
    cout << "Biaya Sewa                            : Rp " << x.sewa << endl;
    cout << "================================================== \n";
    cout << "Jumlah Pembayaran                     : Rp ";
    cin >> x.mbayar;
    x.kembali=x.mbayar-x.sewa;
    if(x.mbayar == x.sewa){
        cout << "Pembayaran Pas. Terima kasih atas kepercayaan anda.";
    }else if(x.mbayar > x.sewa){
        cout << "Kembali                               : Rp " << x.kembali;
        cout << endl;
        cout << "Terima kasih atas kepercayaan anda. " << endl;
    }else{
        cout << "Maaf, pembayaran masih kurang";
        cout << endl;
        goto mbayarr;
    }
    cout << endl;

}

void medium(){
    identitas();
    cout << "============================= \n\n";
    cout << "TIPE BUS       : DAC HOLIDAY MERCEDES-BENZ OF 917 (MEDIUM)" << endl;
    cout << "NO. PLAT       : R 7172 US" << endl;
    cout << "HARGA SEWA     : Rp 2.500.000/hari" << endl;
    cout << "============================= \n\n";
    cout << "Masukkan Hari                         : ";
    cin >> x.hari;
    cout << "Masukkan banyak unit yang akan disewa : ";
    cin >> x.unit;
    x.sewa=(x.unit*x.hari)*2500000;
    mbayarr:
    cout << "Biaya Sewa                            : Rp " << x.sewa << endl;
    cout << "================================================== \n";
    cout << "Jumlah Pembayaran                     : Rp ";
    cin >> x.mbayar;
    x.kembali=x.mbayar-x.sewa;
    if(x.mbayar == x.sewa){
        cout << "Pembayaran Pas. Terima kasih atas kepercayaan anda.";
    }else if(x.mbayar > x.sewa){
        cout << "Kembali                               : Rp " << x.kembali;
        cout << endl;
        cout << "Terima kasih atas kepercayaan anda. " << endl;
    }else{
        cout << "Maaf, pembayaran masih kurang";
        cout << endl;
        goto mbayarr;
    }
    cout << endl;

}

void menu(){
    cout << "============================= \n";
    cout << "       PO. DAC HOLIDAY        \n";
    cout << "============================= \n\n";
    cout << "DAFTAR TIPE BUS : \n\n";
    cout << " 1. DAC HOLIDAY HDD MERCEDES-BENZ OH 1626                : Rp 3.700.000/hari \n";
    cout << " 2. DAC HOLIDAY SDD MERCEDES-BENZ OC 500 RF              : Rp 10.500.000/hari \n";
    cout << " 3. DAC HOLIDAY UHD VOLVO B11R                           : Rp 10.500.000/hari \n";
    cout << " 4. DAC HOLIDAY SHD MERCEDES-BENZ OH 1836                : Rp 3.800.000/hari \n";
    cout << " 5. DAC HOLIDAY SHD SCANIA K360iB                        : Rp 5.800.000/hari \n";
    cout << " 6. DAC HOLIDAY PREMIUM CLASS 0C 500 RF		         : Rp 7.800.000/hari \n";
    cout << " 7. DAC HOLIDAY PREMIUM CLASS SCANIA K410iB              : Rp 9.500.000/hari \n";
    cout << " 8. DAC HOLIDAY MERCEDES-BENZ SPRINTER (MINIBUS)         : Rp 1.350.000/hari \n";
    cout << " 9. DAC HOLIDAY MERCEDES-BENZ OF 917 (MEDIUM)            : Rp 2.500.000/hari \n";
    cout << endl;

    cout << "Masukkan Pilihan Anda      : ";
    cin >> x.pilih;
    if(x.pilih == 1){
        mb1626();
    }else if(x.pilih == 2){
        mb500();
    }else if(x.pilih == 3){
        vb11r();
    }else if(x.pilih == 4){
        mb1836();
    }else if(x.pilih == 5){
        scaniak360();
    }else if(x.pilih == 6){
		pc500rf();
	}else if(x.pilih == 7){
		pck410ib();
	}else if(x.pilih == 8){
		minibus();
	}else if(x.pilih == 9){
		medium();
	}
	else{
        cout << "Input Salah!" <<endl;
    }
}

void selectSort(float arr[], int n){

    int pos_min;
    float temp;

    for (int i=0; i<n-1; i++){
        pos_min = i;
        for(int j=(i+1); j<n; j++){

            if (arr[j]<arr[pos_min])
                pos_min = j;
            }

            if (pos_min !=i){

                temp=arr[i];
                arr[i]=arr[pos_min];
                arr[pos_min]=temp;
            }
        }
    }


void print_array(float a[], int n){

    for(int i=0; i<n; i++){

        cout << a[i] << endl;
    }
    cout << endl;
}

void sortingg(){
    selectSort(x.a, x.n);

    cout << "Urutan Kode Bus : " << endl;
    cout << endl;
    print_array(x.a, x.n);
    }

int main(){
    system("cls");
    a:
    cout << "============================= \n";
    cout << "       PO. DAC HOLIDAY            \n";
    cout << "============================= \n\n";
    cout << "1. Sewa Bus ";
    cout << endl;
    cout << "2. Cari Tipe Bus ";
    cout << endl;
    cout << "3. Urutan Kode Bus ";
    cout << endl;
    cout << "4. Exit       ";
    cout << endl;
    cout << "============================= \n\n";
    cout << "Masukkan Pilihan : ";
    cin >> x.input;

    switch(x.input){
    case 1:
    menu();
    cout << endl;
    goto a;

    case 2:
    cout << "DAFTAR TIPE BUS & KODE: \n\n";
    cout << " 1. DAC HOLIDAY HDD MERCEDES-BENZ OH 1626                : 7173 \n";
    cout << " 2. DAC HOLIDAY SDD MERCEDES-BENZ OC 500 RF              : 7178 \n";
    cout << " 3. DAC HOLIDAY UHD VOLVO B11R                           : 7179 \n";
    cout << " 4. DAC HOLIDAY SHD MERCEDES-BENZ OH 1836                : 7174 \n";
    cout << " 5. DAC HOLIDAY SHD SCANIA K360iB                        : 7175 \n";
    cout << " 6. DAC HOLIDAY PREMIUM CLASS 0C 500 RF		         : 7176 \n";
    cout << " 7. DAC HOLIDAY PREMIUM CLASS SCANIA K410iB              : 7177 \n";
    cout << " 8. DAC HOLIDAY MERCEDES-BENZ SPRINTER (MINIBUS)         : 7171 \n";
    cout << " 9. DAC HOLIDAY MERCEDES-BENZ OF 917 (MEDIUM)            : 7172 \n";
    cout << endl;
    nggolet();
    goto a;

    case 3:
    sortingg();
    goto a;
    
    case 4:
    cout << "Anda telah keluar dari program" << endl;

    }

return 0;
}
