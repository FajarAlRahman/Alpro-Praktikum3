
using namespace std;
class Proses{
  public :
   void cetak(){
  int total =(data_file[0]*21000)+(data_file[1]*17000)+(data_file[2]*19000)+(data_file[3]*20000)+(data_file[4]*25000);
     
  int TA;
	int ongkir;//biaya ongkir
  	if(data_file[5]<=3)
  	{
  		ongkir=15000;
  		TA=total + ongkir;	
  	}
  	else
  	{
  		ongkir=25000;
  		TA=total + ongkir;
  	}

  int TA1;//total belanja + diskon
	if(total>=25000 && total<50000)
	{
		TA1=(TA-3000);
	}
	else if(total>=50000 && total<150000)
	{
		TA1=(TA-5000)*0.85;
	}
	else if (total>=150000){
		TA1=(TA-8000)*0.65;
	}
	else 
	{
		TA1=TA;
	}
    tulis_data.open("api_data.txt");
    tulis_data<<total<<endl;
    tulis_data<<ongkir<<endl;//biaya ongkir
    tulis_data<<TA<<endl;//biaya + ongkir
    tulis_data<<TA1;//total tagihan setelah terkena diskon
    tulis_data.close();


     
}





  void getData(){
    ambil_data.open("api_data.txt");
    
    int t;
    //Eof adalah kondisi dimana tidak ada data yang bisa diambil lagi dari sumber misalnya inputan.
    while (!ambil_data.eof()){
      ambil_data>>data_file[index];
      index +=1;
      }
      
  
       ambil_data.close();
      
    }
  private :
  ofstream tulis_data;
  ifstream ambil_data;
  int beli1,beli2,beli3,beli4,beli5,jarak;
  int data_file[100];
  int index =0;
  int total;
};