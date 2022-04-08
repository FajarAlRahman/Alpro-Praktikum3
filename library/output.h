using namespace std;

class Output
{
  public :
    void cetak()
    {  
      cout << "STRUCK PEMBELIAN ANDA\n";
      cout << "Total biaya belanja                 : " << data_file[0] << endl;
      cout << "Total biaya ongkir                  : " << data_file[1] << endl;
      cout << "Total biaya + ongkir                : " << data_file[2] << endl;
      cout << "Total tagihan setelah diskon        : " << data_file[3] << endl;
    }
    void getData()
    {  
      ambil_data.open("api_data.txt");
      string t;
      while(!ambil_data.eof())
        {
          ambil_data >> data_file[index];
            index += 1;
        }
      ambil_data.close();
    }
  private :
    ifstream ambil_data;
    string data_file[30];
    int index = 0;
};