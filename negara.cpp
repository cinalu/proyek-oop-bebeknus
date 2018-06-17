
// Tugas OOP: 3 unsur OOP inheritance, polymorphism, encapsulation

#include <bits/stdc++.h> //cuma buat test, nanti ganti sama proper header
using namespace std; //sama juga

#define LL long long int

class negara{
private:
	string nama;
	string bahasa;
	string jenis_pemerintahan;
	LL jumlah_penduduk;
public:
	negara(){			//initializer blank
		nama = "unkown";
		bahasa = "unknown";
		jumlah_penduduk = 0;
	}
	negara(const string& init_nama, const string& init_bahasa, const LL& init_penduduk = 0){//initializer standar
		nama = init_nama;
		bahasa = init_bahasa;
		jumlah_penduduk = init_penduduk;
	}
	
	string get_nama(){
		return nama;
	}
	string get_bahasa(){
		return bahasa;
	}
	
	void set_nama(const string& set_string){
		nama = set_string;
	}
	void set_bahasa(const string& set_string){
		bahasa = set_string;
	}
	
	~negara()		//klo pake destructor harus pake pointer ke class???
	
	void nuklir(){	//testing destructor
		printf ("BOM NUKLIR DILEDAKKAN\n");
		jumlah_penduduk = 0;
		nama = "ga penting";
		jenis_pemerintahan = "ga penting";
		(*this).~negara();
	}
};

int main()
{
	return 0;
}
