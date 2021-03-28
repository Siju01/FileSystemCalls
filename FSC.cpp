#include <iostream> //include necessary header files
#include <fstream>
#include <string>
#include <stdio.h>

using namespace std;

int main() {
	//write header data
	string header = "Daftar Mahasiswa PENS,,, \n";
	header.append("#,Nrp,Nama,Jenis_kelamin \n");

	//write all data
	string data = "1,4210191002,Irfan Muhammad,Laki-laki \n";
	data.append("2,4210191003,Aryazaky Iman Fauzy,Laki-laki\n"); //use append mode
	data.append("3,4210191004,Aydin Ihsan Ibrahim Nurdin,Laki-laki\n");
	data.append("4,4210191005,Prawida Yumia,Perempuan \n");
	data.append("5,4210191006,Khonsa Nadziroh,Perempuan \n");
	data.append("6,4210191008,Robby Alexander,Laki-laki \n");
	data.append("7,4210191009,Miftah Amiruddin Hakim Ganing,Laki-laki \n");
	data.append("8,4210191010,Hikmatul Ulya,Perempuan\n");
	data.append("9,4210191011,Mohammad Alifian Rizki Choliq,Laki-laki \n");
	data.append("10,4210191012,Berliana Putri Indrasari,Perempuan\n");
	data.append("11,4210191013,Marvel Natanael S,Laki-laki\n");
	data.append("12,4210191014,Auriel Harlih Rizkinanda,Laki-laki\n");
	data.append("13,4210191015,Vivian Azalia Anwari,Perempuan\n");
	data.append("14,4210191016,Joane Vanesa Hadi,Perempuan\n");
	data.append("15,4210191017,Mochammad Januar Afandi,Laki-laki\n");
	data.append("16,4210191018,M. Dwi Febrian,Laki-laki\n");
	data.append("17,4210191019,Amos Taruna Siahaan,Laki-laki\n");
	data.append("18,4210191020,M Awaluddin Romadhon,Laki-laki\n");
	data.append("19,4210191021,Intan Putri Kusuma Wardhani,Perempuan\n");
	data.append("20,4210191022,Andika Rizky Oktavian,Laki-laki\n");
	data.append("21,4210191023,Natan Andro Tri Arauna,Laki-laki\n");
	data.append("22,4210191024,Andhika Arista Permana,Laki-laki\n");
	data.append("23,4210191025,Devinindya Safitri Anggraeni,Perempuan\n");
	data.append("24,4210191026,Siti Julekhah,Perempuan\n");
	data.append("25,4210191027,Imam Biladi,Laki-laki\n");
	data.append("26,4210191028,Mukrom Karunia Azza,Laki-laki\n");
	data.append("27,4210191029,Dimas Rizky Alimul Fajri,Laki-laki\n");

	ofstream outfile; //ofstream : used to write information to file
	outfile.open("4210191026_SitiJulekhah.csv"); //open file.csv

	//check for error
	if (!outfile) {
		cout << "Error opening file for output!!!" << endl;
		return -1;
	}

	outfile << header; //call data header in file
	outfile << data; //call all data in file
	outfile.close(); //close file

//////////////////////////////////////////////////////////////////////////////////////////////

	ofstream ofile; //ofstream : used to write information to file
	//open file.csv + Append mode. All output to that file to be appended to the end.
	ofile.open("4210191026_SitiJulekhah.csv", ios::app); 

	//reverse all data and continue from last # number
	string rData = "28,4210191029,Dimas Rizky Alimul Fajri,Laki-laki\n";
	rData.append("29,4210191028,Mukrom Karunia Azza,Laki-laki\n"); //use append mode
	rData.append("30,4210191027,Imam Biladi,Laki-laki\n");
	rData.append("31,4210191026,Siti Julekhah,Perempuan\n");
	rData.append("32,4210191025,Devinindya Safitri Anggraeni,Perempuan\n");
	rData.append("33,4210191024,Andhika Arista Permana,Laki-laki\n");
	rData.append("34,4210191023,Natan Andro Tri Arauna,Laki-laki\n");
	rData.append("35,4210191022,Andika Rizky Oktavian,Laki-laki\n");
	rData.append("36,4210191021,Intan Putri Kusuma Wardhani,Perempuan\n");
	rData.append("37,4210191020,M Awaluddin Romadhon,Laki-laki\n");
	rData.append("38,4210191019,Amos Taruna Siahaan,Laki-laki\n");
	rData.append("39,4210191018,M. Dwi Febrian,Laki-laki\n");
	rData.append("40,4210191017,Mochammad Januar Afandi,Laki-laki\n");
	rData.append("41,4210191016,Joane Vanesa Hadi,Perempuan\n");
	rData.append("42,4210191015,Vivian Azalia Anwari,Perempuan\n");
	rData.append("43,4210191014,Auriel Harlih Rizkinanda,Laki-laki\n");
	rData.append("44,4210191013,Marvel Natanael S,Laki-laki\n");
	rData.append("45,4210191012,Berliana Putri Indrasari,Perempuan\n");
	rData.append("46,4210191011,Mohammad Alifian Rizki Choliq,Laki-laki \n");
	rData.append("47,4210191010,Hikmatul Ulya,Perempuan\n");
	rData.append("48,4210191009,Miftah Amiruddin Hakim Ganing,Laki-laki \n");
	rData.append("49,4210191008,Robby Alexander,Laki-laki \n");
	rData.append("50,4210191006,Khonsa Nadziroh,Perempuan \n");
	rData.append("51,4210191005,Prawida Yumia,Perempuan \n");
	rData.append("52,4210191004,Aydin Ihsan Ibrahim Nurdin,Laki-laki\n");
	rData.append("53,4210191003,Aryazaky Iman Fauzy,Laki-laki\n");
	rData.append("54,4210191002,Irfan Muhammad,Laki-laki \n");

	ofile << rData << endl; //call reverse all data in file
	ofile.close(); //close file

	return 0;
}
