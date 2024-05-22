/*	Nama	: Faiqa Hadya Hanifa
	NPM		: 4521210058
	Kelas	: Praktikum Algoritma dan Pemograman - B
	Praktek	: Tugas Besar
	Materi	: PROGRAM PEMBAYARAN PLN TANPA INPUT
				- Selection
				- Repetition
				- Array
				- Function
				- String/ File
				- Sort | Insertion Sort - Descending
*/

#include <iostream> // library untuk input dan output
#include <string.h> // library untuk memberikan nilai suatu karakter string
#include <fstream> // library untuk membuka file
#include <sstream> // library untuk stream data
using namespace std;

//Deklarasi Variabel Global
char fai_token[40] = " 2089-9606-1308-2304 ", fai_meter[40] = " 104437200796 ", fai_id[40] = " 606002802001 ";
char faiqa[40] = " Faiqa Hadya Hanifa ";
char fai_pick = 'y', fai_pic = 'y';
const int  fai_menu = 1, fai_day = 7, fai_tipe = 11, fai_brg = 1;
int fai_disc = 10;
int jmlp[fai_day] = {40, 25, 60, 18, 43, 96, 17}; //Isi Elemen Array
int fai_visit, fai, qa, had, ya, ha, ni, fa;
long fai_pay = 700000, fai_tghan = 500000, admin = 2000;
long fai_price, fai_kmbl, fai_price1, fai_ttl;

//Format Angka
string  dotFai(int number, string perantara = "."){
	stringstream ss; ss << number;
	string output = ss.str();
	int inspost = output.length() -3;
	while (inspost > 0){
		output.insert(inspost, perantara);
		inspost -= 3;
	}
	return output;
}

//Function
void awal()
{
	cout << "=================================================================================" << endl;
    cout << "                ||          ELECTRICITY PAYMENTS            ||                  " << endl;
	cout << "---------------------------------------------------------------------------------" << endl;
	cout << " ID Number : " << fai_id << endl;
	cout << " Hi! " << faiqa << " Welcome to Your Electricity Bill Payment " << endl;
	cout << "=================================================================================" << endl;
	cout << endl;
	cout << endl;
}

void daftar_token()
{
	//File
	//Buat dan Buka File Teks
	ofstream MyFile("TokenPLN.TXT");
	
	//Tulis File
	MyFile << "=================================================================================" << endl;
	MyFile << "		PREPAID - ELECTRICITY BILL " << endl;
	MyFile << "=================================================================================" << endl;
	MyFile << "	No	 |	Amount		|	Price " << endl;
	MyFile << "=================================================================================" << endl;
	MyFile << "	1	 |	50.000		| 	Rp52.000 " << endl;
	MyFile << "	2	 |	100.000		| 	Rp102.000 " << endl;
	MyFile << "	3	 |	150.000		| 	Rp152.000 " << endl;
	MyFile << "	4	 |	200.000		| 	Rp202.000 " << endl;
	MyFile << "	5	 |	300.000		| 	Rp302.000 " << endl;
	MyFile << "	6	 |	500.000		| 	Rp502.000 " << endl;
	MyFile << "	7	 |	700.000		| 	Rp702.000 " << endl;
	MyFile << "	8	 |	800.000		| 	Rp802.000 " << endl;
	MyFile << "	9	 |	1.000.000	| 	Rp1.002.000 " << endl;
	MyFile << "	10	 |	3.250.000	| 	Rp3.252.000 " << endl;
	MyFile << "	11	 |	5.000.000	| 	Rp5.002.000 " << endl;
	MyFile << "=================================================================================" << endl;
	
	//Tutup File
	MyFile.close();
}

void read_daftar_token()
{
	//Buat String untuk mengeluarkan file teks
	string MyText;
	
	//Membaca file teks
	ifstream ReadFile("TokenPLN.TXT"); 
	
	//Gunakan while loop dan fungsi getline() untuk membaca file teks per baris
	while(getline (ReadFile, MyText))
	{
		cout << MyText << endl;
	}
	
	//Tutup File
	ReadFile.close();
}

void menu()
{
	cout << endl;
	cout << "=================================================================================" << endl;
	cout << "              ||          PAYMENTS MENU          ||       	              " << endl;
	cout << "=================================================================================" << endl;
	cout << "	No	 |		Category " << endl;
	cout << "=================================================================================" << endl;
	cout << "	1	 |		Prepaid(Token) " << endl;
	cout << "	2	 |		Postpaid " << endl;
	cout << "=================================================================================" << endl;
    cout << " Enter desired payment (1/2) : " << fai_menu << endl;
    cout << "=================================================================================" << endl;
	cout << endl;
	cout << endl;
	
	//Selection - Switch
	switch(fai_menu)
	{
		case 1:
		cout << endl;
		
		read_daftar_token();
		
		cout << " Customer's Note = Purchase over Rp1.000.000 includes " << endl;
		cout << " 		10% discount " << endl;
		cout << "=================================================================================" << endl;
		cout << " Enter desired purchase (1/2/3/4/5/6/7/8/9/10/11) : " << fai_tipe << endl;
		cout << "=================================================================================" << endl;
		cout << endl;
		cout << endl;
		
		//Selection - Nested If
		if(fai_tipe==1)
		{
			fai_price1 = 50000;
		}
		else if(fai_tipe==2)
			{
				fai_price1 = 100000;
			}
		else if(fai_tipe==3)
			{
				fai_price1 = 150000;
			}
		else if(fai_tipe==4)
			{
				fai_price1 = 200000;
			}
		else if(fai_tipe==5)
			{
				fai_price1 = 300000;
			}
		else if(fai_tipe==6)
			{
				fai_price1 = 500000;
			}
		else if(fai_tipe==7)
			{
				fai_price1 = 700000;
			}
		else if(fai_tipe==8)
			{
				fai_price1 = 800000;
			}
		else if(fai_tipe==9)
			{
				fai_price1 = 1000000;
			}
		else if(fai_tipe==10)
			{
				fai_price1 = 3250000;
			}
		else if(fai_tipe==11)
			{
				fai_price1 = 5000000;
			}
		else
			{
				cout << " Value Entered is Incorrect " << endl;
				fai_price = 0;
				exit(0);
			}
		fai_price = fai_price1+admin;
		cout << endl;
		cout << endl;
		cout << endl;
		
		//Pembayaran Prabayar
		cout << "=================================================================================" << endl;
		cout << "                ||          ELECTRICITY PAYMENTS            ||                  " << endl;
		cout << "=================================================================================" << endl;
		cout << " on behalf of  : " << faiqa << endl;
		cout << " Customer's ID : " << fai_id << endl;
		cout << "=================================================================================" << endl;
		cout << " Amount	|	Purchased	|	Service Charges " << endl;
		cout << "=================================================================================" << endl;
		cout << "   " << fai_brg << "	 	 Rp" << dotFai(fai_price1) << "		 Rp" << dotFai(admin) << endl;
		cout << endl;
		cout << "---------------------------------------------------------------------------------" << endl;
		cout << " Token Number : " << fai_token << endl;
		cout << "=================================================================================" << endl;
		cout << " Total Payment 			: Rp" << dotFai(fai_price) << endl;
		
		//Selection - If Else
		//Persentase Diskon
		if (fai_price < 1000000)
			cout << " Discount			: 0 " << endl;
		else
			cout << " Discount			: " << fai_disc << "%" << endl;
		
		//Potongan Harga
		if(fai_price > 1000000)
			fai_ttl=fai_price-(fai_price*fai_disc/100);
		else
			fai_ttl=fai_price;

		cout << " Electricity Total Charges 	: Rp" << dotFai(fai_ttl) << endl;
		break;
		
		case 2:
		fai_kmbl = fai_pay - (fai_tghan+admin);
		cout << endl;
		cout << "=================================================================================" << endl;
		cout << "		POSTPAID - ELECTRICITY BILL " << endl;
		cout << "=================================================================================" << endl;
		cout << " Name				: " << faiqa << endl;
		cout << " Meter Number			: " << fai_meter << endl;
		cout << " Bill Month 			: JAN-22 " << endl;
		cout << " Service Fee			: Rp" << dotFai(admin) << endl;
		cout << " Electricity Total Charges	: Rp" << dotFai(fai_tghan + admin) << endl;
		cout << "=================================================================================" << endl;
		cout << " Payment Recieved : Rp" << dotFai(fai_pay) << endl;
		cout << "---------------------------------------------------------------------------------" << endl;
		cout << " Payment Change	: Rp" << dotFai(fai_kmbl) << endl;
		cout << endl;
	}	
}


void pengunjung()
{
	//Rekursif
	cout << '\t' << " INFO : " << endl;
	fai_visit = 1;
	ha = 6;
	for (ni=1;ni<=ha;ni++)
		fai_visit = fai_visit*ni;
	
	cout << '\t' << "-------------------------------------" << endl;
	cout << '\t' << " | Transaction The Past Few Days : " << fai_visit << " | "<< endl;
	cout << '\t' << "-------------------------------------" << endl;

	//Array - 1 Dimensi
	for(fai=0;fai<fai_day;fai++)
	{
		cout << '\t' <<  " |	Customer day - " << fai+1 << " : " << jmlp[fai] << "	   | "<< endl;
	}
	cout << '\t' << "-------------------------------------" << endl; 
	
	//Insertion Sort - Descending
	cout << '\t' << " | Sort Transactions the past week | " << endl;
	cout << '\t' << " |  in descending order :          | " << endl;
	cout << '\t' << "-------------------------------------" << endl;
	for(qa=1;qa<=fai_day-1;qa++)
	{
		had=qa;
		ya=jmlp[had];
			
		while(had>0 && jmlp[had-1] < ya)
		{
			jmlp[had] = jmlp[had-1];
			had--;
		}
		jmlp[had]=ya;
	}
		
	for(had=0;had<=fai_day-1;had++)
	{
		cout << '\t' << " |		  ";
		cout << jmlp[had] << "		   | " << endl;
	}
	cout << '\t' << "-------------------------------------" << endl;
}

void selesai()
{
	pengunjung();
	
	cout << '\t' << "=====================================" << endl;
	//repetition - Do While
	do
	{
		cout << '\t' << ":) THANK YOU FOR USING OUR SERVICE (:" << endl;
		fa++;
	}
	while (fa<=1);
	cout << '\t' << "=====================================" << endl;
	cout << endl;
	cout << endl;
}

int main()
{
	//String
	char faiqa1[100] = " *System will automatically direct payment to related metered electricity charges or ";
	char faiqa2[100] = " manual transaction could be done by internet/ mobile banking ";
	
	awal();
	menu();
	cout << "---------------------------------------------------------------------------------" << endl;
	cout << " Are you sure to proceed this payment ? (Y/N) : " << fai_pick << endl;
	cout << "=================================================================================" << endl;
	cout << endl;
	system("pause");
	
	//Selection - If Else
	if(fai_pick=='y'||fai_pic=='Y')
	{
		cout << endl;
		cout << strcat(faiqa1, faiqa2) << endl;
		cout << endl;
		selesai();
	}
	else if(fai_pick=='n'||fai_pic=='N')
	{
		system("CLS");
		return 0;
	}
	system("pause");
}