#include<iostream>
#include <stdlib.h>
#include <iomanip>
#include <Windows.h>
using namespace std;
struct detail{
        string drname;
        bool cf,taste,classic;
        int price;
    };
void showallmenu (detail menu[]);
void select();
void recomend(detail menu[]);
void srcname(detail menu[]);
void struk(detail menu[]);
void edit(detail menu[]);
void pilihan (detail menu[]);
void final(int sum);
struct basket{
int kode;
int jumlah;
};
basket order[100];
string name;

int main(){
detail menu[30];
menu[0].drname ="Arabica White Coffee";
menu[0].classic =1;
menu[0].cf=1;
menu[0].taste=1;
menu[0].price=48000;
menu[1].drname ="Luwak White Coffee";
menu[1].classic =1;
menu[1].cf=1;
menu[1].taste=1;
menu[1].price=50000;
menu[2].drname ="Hazelnut Latte";
menu[2].classic =0;
menu[2].cf=1;
menu[2].taste=1;
menu[2].price=52000;
menu[3].drname ="Espresso";
menu[3].classic =0;
menu[3].cf=1;
menu[3].taste=0;
menu[3].price=35000;
menu[4].drname ="Flat White";
menu[4].classic =1;
menu[4].cf=1;
menu[4].taste=0;
menu[4].price=33000;
menu[5].drname ="Almondmilk Hazelnut Latte";
menu[5].classic =0;
menu[5].cf=1;
menu[5].taste=1;
menu[5].price=52000;
menu[6].drname ="Caffe Mocha";
menu[6].classic =0;
menu[6].cf=1;
menu[6].taste=1;
menu[6].price=55000;
menu[7].drname ="Caramel Macchiato";
menu[7].classic =0;
menu[7].cf=1;
menu[7].taste=1;
menu[7].price=59000;
menu[8].drname ="Cold Foam Iced Espresso";
menu[8].classic =1;
menu[8].cf=1;
menu[8].taste=0;
menu[8].price=50000;
menu[9].drname ="Americano Coffee";
menu[9].classic =1;
menu[9].cf=1;
menu[9].taste=0;
menu[9].price=40000;
menu[10].drname ="Asian Dolce Latte";
menu[10].classic =0;
menu[10].cf=1;
menu[10].taste=0;
menu[10].price=56000;
menu[11].drname ="Long Black";
menu[11].classic =1;
menu[11].cf=1;
menu[11].taste=0;
menu[11].price=48000;
menu[12].drname ="Coffee Frapucino";
menu[12].classic =0;
menu[12].cf=1;
menu[12].taste=1;
menu[12].price=44000;
menu[13].drname ="Caramel Latte";
menu[13].classic =0;
menu[13].cf=1;
menu[13].taste=1;
menu[13].price=52000;
menu[14].drname ="Cappucino";
menu[14].classic =1;
menu[14].cf=1;
menu[14].taste=1;
menu[14].price=46000;
menu[15].drname ="Dolce Latte";
menu[15].classic =1;
menu[15].cf=1;
menu[15].taste=0;
menu[15].price=55000;
menu[16].drname ="Brown Sugar Latte";
menu[16].classic =0;
menu[16].cf=1;
menu[16].taste=1;
menu[16].price=65000;
menu[17].drname ="Kopi Susu";
menu[17].classic =1;
menu[17].cf=1;
menu[17].taste=1;
menu[17].price=25000;
menu[18].drname ="Fresh Brewed Coffee";
menu[18].classic =1;
menu[18].cf=1;
menu[18].taste=0;
menu[18].price=23000;
menu[19].drname ="Iced Dolce Misto";
menu[19].classic =1;
menu[19].cf=1;
menu[19].taste=0;
menu[19].price=24000;
menu[20].drname ="Brewed Tea";
menu[20].classic =1;
menu[20].cf=0;
menu[20].taste=0;
menu[20].price=25000;
menu[21].drname ="Lemon Tea";
menu[21].classic =0;
menu[21].cf=0;
menu[21].taste=1;
menu[21].price=41000;
menu[22].drname ="Green Tea";
menu[22].classic =0;
menu[22].cf=0;
menu[22].taste=1;
menu[22].price=50000;
menu[23].drname ="Earl Gray";
menu[23].classic =1;
menu[23].cf=0;
menu[23].taste=0;
menu[23].price=45000;
menu[24].drname ="Black Tea";
menu[24].classic =1;
menu[24].cf=0;
menu[24].taste=0;
menu[24].price=40000;
menu[25].drname ="Signature Chocolate";
menu[25].classic =0;
menu[25].cf=0;
menu[25].taste=1;
menu[25].price=54000;
menu[26].drname ="Cookies and Cream";
menu[26].classic =0;
menu[26].cf=0;
menu[26].taste=1;
menu[26].price=51000;
menu[27].drname ="Red Velvet";
menu[27].classic =0;
menu[27].cf=0;
menu[27].taste=1;
menu[27].price=46000;
menu[28].drname ="Caramel";
menu[28].classic =0;
menu[28].cf=0;
menu[28].taste=1;
menu[28].price=44000;
menu[29].drname ="Choco Banana";
menu[29].classic =0;
menu[29].cf=0;
menu[29].taste=1;
menu[29].price=47000;
    int a;
    string kode;
cout<<"===== ===== ===== ===== ===== =====     ===== =    = ===== ====="<<endl;
cout<<"=     =   = =     =     =     =         =     =    = =   = =   ="<<endl;
cout<<"=     =   = ===== ===== ===== =====     ===== ====== =   = ===="<<endl;
cout<<"=     =   = =     =     =     =             = =    = =   = ="<<endl;
cout<<"===== ===== =     =     ===== =====     ===== =    = ===== =\n\n\n"<<endl;

cout<<"Selamat datang di coffee shop kami"<<endl;
cout<<"Silahkan masukkan nama Anda : ";
cin>>name;
pilihan(menu);
return 0;
}

void pilihan (detail menu[]){
char slcmain;
cout<<"\nHai "<<name<<", Silahkan masukkan pilihan kopi Anda"<<endl<<endl;
cout<<"1. Tampilkan Semua Menu"<<endl;
cout<<"2. Rekomendasi kopi"<<endl;
cout<<"3. Saya akan memasukkan kode secara manual\n\n"<<endl;
cout<<"Silahkan masukkan pilihan Anda : ";
cin>>slcmain;

switch (slcmain){
case '1':
    showallmenu(menu);
    break;
case '2':
    recomend(menu);
    break;
case '3':
    select();
    break;
default:
    cout<<"Input yang anda masukkan salah"<<endl;
    break;
}
struk(menu);
edit(menu);
struk(menu);
edit(menu);
}

void showallmenu(detail menu[]){
int s,awal;
char next;
system("CLS");
s=5;
awal=0;
do{
 cout<<"============================================================================================\n";
 cout<<"| Kode |          Nama                           |               Harga                     |\n";
 cout<<"============================================================================================\n";
 for(int i=awal;i<s;i++){
        if (i>29){
                cout<<"Anda telah melihat semua menu"<<endl;
                cout<<"Kami akan mengarahkan Anda ke daftar menu awal dalam 5 detik ..."<<endl;
                Sleep(5000);
                system("CLS");
                showallmenu(menu);
        }
  cout<<"| "<<setiosflags(ios::left)<<setw(5)<<i+1<<"|";
  cout<<" "<<setiosflags(ios::left)<<setw(40)<<menu[i].drname<<"|";
  cout<<" "<<setiosflags(ios::left)<<setw(40)<<menu[i].price<<"|";
  cout<<"\n============================================================================================\n";
 }
 select();
 cout<<"lanjut? (y/n) : ";
  cin>>next;
s=s+5;
awal=awal+5;
  system("cls");
}while(next != 'n');
}

void select(){
char interes,next;
cout<<"Ada menu yang Anda pilih? (y/n) : ";
 cin>>interes;
 if (interes=='y'){
     int i=0;
    do{
            if (order[i].kode!=0 || order[i].jumlah!=0){i++;}else{
            cout<<"masukkan kode pesanan \t\t: ";
            cin>>order[i].kode;
            cout<<"Masukkan jumlah \t\t: ";
            cin>>order[i].jumlah;
            cout<<"Ada lagi? \n...ya (y) \n...menu selanjutnya (n) \t: ";
            cin>>next;
            i++;
            }
    }while(next != 'n');
 }
}
void display(detail menu[],int i){
  cout<<"| "<<setiosflags(ios::left)<<setw(5)<<i+1<<"|";
  cout<<" "<<setiosflags(ios::left)<<setw(40)<<menu[i].drname<<"|";
  cout<<" "<<setiosflags(ios::left)<<setw(40)<<menu[i].price<<"|";
  cout<<"\n============================================================================================\n";
 }
void recomend(detail menu[]){
    system("CLS");
    int price;
    bool cf,classic,taste;
    char tclassic,tcf,ttaste;
    cout<<"Apakah minuman yang Anda inginkan adalah kopi? (y/n) : ";
    cin>>tcf;
    if (tcf=='y'){cf=1;}else{cf=0;}
    cout<<"Mana rasa yang lebih Anda suka \na.Manis \nb.pahit\n: ";
    cin>>ttaste;
    if (ttaste=='a'){taste=1;}else{taste=0;}
    cout<<"Mana yang lebih Anda suka\na.Classic\nb.Modern\n: ";
    cin>>tclassic;
    if (tclassic=='a'){classic=1;}else{classic=0;}
    cout<<"Masukkan kisaran harga yang Anda inginkan :";
    cin>>price;
    system("CLS");
    cout<<"============================================================================================\n";
 cout<<"| Kode |          Nama                           |               Harga                     |\n";
 cout<<"============================================================================================\n";
    for(int i=0;i<30;i++){
        if ((menu[i].classic ==classic) && (menu[i].cf==cf) && (menu[i].taste==taste) && (menu[i].price<price+20000) )
{
 display(menu, i);}
    }
    select();

}

void struk (detail menu[]){
    system("CLS");
   cout<<"=================================================================================================\n";
 cout<<"|  No  |          Nama                           |  harga satuan  |    jumlah    |     total    |\n";
 cout<<"=================================================================================================\n";
 int tmpsum=0,sum;
for(int i=0;i<30;i++){
        if (order[i].jumlah!=0 && order[i].kode !=0){
              cout<<"| "<<setiosflags(ios::left)<<setw(5)<<i+1<<"|";
  cout<<" "<<setiosflags(ios::left)<<setw(40)<<menu[order[i].kode-1].drname<<"|";
  cout<<" "<<setiosflags(ios::left)<<setw(15)<<menu[order[i].kode-1].price<<"|";
  cout<<" "<<setiosflags(ios::left)<<setw(13.3)<<order[i].jumlah<<"|";
  cout<<" "<<setiosflags(ios::left)<<setw(13.3)<<menu[order[i].kode-1].price * order[i].jumlah<<"|";
  cout<<"\n=================================================================================================\n"<<endl;

            sum=menu[order[i].kode-1].price * order[i].jumlah;
            tmpsum+=sum;
        }
}cout<<"Nama pelanggan : "<<name<<endl;
 cout<<"=================================================================================================\n";
cout<<"                                                                        Total Belanja :\t "<<tmpsum<<endl;
final(tmpsum);
}

void edit(detail menu[]){
basket* ubah[100];
    char slcedit;
    cout<<"Apakah ada menu yang ingin Anda edit?"<<endl;
    cout<<"[d] Delete \t\t [a] tambahkan \t\t [f] selesai"<<endl;
    cin>> slcedit;
    if(slcedit=='d'){
            int a,j;
            char lagi;
            do{
            cout<<"Masukkan nomor pesanan yang ingin Anda hapus : ";
            cin>>a;
            j=a-1;
            ubah[j]= &order[j];
            ubah[j]->jumlah=0;
            ubah[j]->kode=0;
            cout<<"Ada lagi? (y/n) : ";
            cin>>lagi;
            }while(lagi!='n');
    }else if(slcedit=='a'){
        system("CLS");
        pilihan(menu);
    }else{};
}

void final(int tmpsum){
    float diskon,final;
    cout<<"Anda dikenakan ppn sebesar 8% dari total belanja"<<endl;
    if (tmpsum>100000){diskon=(0.1);cout<<"Anda mendapat diskon senilai 10%"<<endl;}else{diskon=0;}
    final=tmpsum+0.08*tmpsum-diskon*tmpsum;
    cout<<"Total yang Anda bayar adalah : "<<final<<endl;
    cout<<endl;

}
