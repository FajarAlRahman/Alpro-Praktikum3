using namespace std;

class Input{
  public:
    void cetak(){
      cout << "Aplikasi Penjualan aneka masakan\n";
      cout << "Menu yang tersedia : ";
      cout << "1.) Ayam Geprek  Rp. 21.000 \n";
      cout << "2.) Ayam Goreng   Rp. 17.000 \n";
      cout << "3.) Udang Goreng  Rp. 19.000\n";
      cout << "4.) Cumi Goreng   Rp. 20.000\n";
      cout << "5.) Ayam Bakar    Rp. 25.000\n\n";
      cout << "Pesan Ayam Geprek => ";cin >> beli1;
      cout << "Pesan Ayam Goreng => ";cin >> beli2;
      cout << "Pesan Udang Goreng => ";cin >> beli3;
      cout << "Pesan Cumi Goreng => ";cin >> beli4;
      cout << "Pesan Ayam Bakar => ";cin >> beli5;
      cout << "Masukkan jarak anda => ";cin >> jarak;
    }
    void toFile(){
      tulis_data.open("api_data.txt");
      tulis_data << beli1<< endl;
      tulis_data << beli2 <<endl;
      tulis_data << beli3<<endl;
      tulis_data << beli4<<endl;
      tulis_data << beli5<<endl;
      tulis_data << jarak;
      tulis_data.close();
    }
  private:
    ofstream tulis_data;
    int beli1, beli2, beli3, beli4, beli5,jarak;
};