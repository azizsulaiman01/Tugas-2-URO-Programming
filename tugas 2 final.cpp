#include <iostream>
using namespace std;

int main(){
	atas:
	int a;
	char pilih;
	cout<<"--------------SELAMAT DATANG DI KALKULATOR POLINOMIAL---------------"<<endl;
	cout<<"Silakan pilih operator di bawah ini:"<<endl;
	cout<<" 1. Penjumlahan 2. Pengurangan 3. Turunan "<<endl;

	cin >>a;
	cout<<endl;
	
	if(a == 1){
		int k1, m, k2, n, k3;
	
		cout <<"Akan dicari hasil dari penjumlahan dua polinomial \n\nMasukkan derajat polinomial pertama : ";
		cin >> m; int P[m];
		for(int i = 0; i < m; i++)
		{
			cout <<"Masukkan koefisien x^"<< m-i <<" : "; cin >> P[i];
		}
		cout <<"Masukkan konstanta polinomial pertama : "; cin >> k1; cout <<"\n";
	
		//-----------------------------------------------------------------------------------------------------//
	
		cout <<"Masukkan derajat polinomial kedua : ";
		cin >> n; int Q[n];
		for(int i = 0; i < n; i++)
		{
			cout <<"Masukkan koefisien x^"<< n-i <<" : "; cin >> Q[i];
		}
		cout <<"Masukkan konstanta polinomial kedua : "; cin >> k2; cout <<"\n";
	
		//-----------------------------------------------------------------------------------------------------//
	
		cout <<"Polinomial pertama yang anda masukkan :\n";
		if(P[0] != 0){
			cout << P[0] <<"x^"<< m;
		}
		for(int i = 1; i < m; i++)
		{
			if(P[i] < 0){
				cout <<" "<< P[i] <<"x^"<< m-i;
			} else if(P[i] > 0){
				cout <<" +"<< P[i] <<"x^"<< m-i;
			}
		}
		if(k1 > 0){
			cout <<" +"<< k1 <<"\n\n";
		} else if(k1 < 0){
			cout <<" "<< k1 <<"\n\n";
		}
	
		//----------------------------------------------------------------------------------------------------//
	
		cout <<"Polinomial kedua yang anda masukkan :\n";
		if(Q[0] != 0){
			cout << Q[0] <<"x^"<< n;
		}
		for(int i = 1; i < n; i++)
		{
			if(Q[i] < 0){
				cout <<" "<< Q[i] <<"x^"<< n-i;
			} else if(Q[i] > 0){
				cout <<" +"<< Q[i] <<"x^"<< n-i;
			}
		}
		if(k2 > 0){
			cout <<" +"<< k2 <<"\n\n";
		} else if(k2 < 0){
			cout <<" "<< k2 <<"\n\n";
		}
	
		
	
		cout <<"Hasil dari penjumlahan kedua polinomial adalah :\n";
		if(m >= n){
			int J[m];
			
			for(int i = 0; i < m; i++)
			{
				if(n-1-i == -1){
					while(i < m)
					{
						J[i] = P[m-1-i];
						i++;
					}
					break;
				}
				J[i] = P[m-1-i] + Q[n-1-i];
			}
			k3 = k1 + k2;
			if(J[m-1] != 0){
				cout << J[m-1] <<"x^"<< m;
			}
			for(int i = 1; i < m; i++)
			{
				if(J[m-1-i] < 0){
					cout <<" "<< J[m-1-i] <<"x^"<< m-i;
				} else if(J[m-1-i] > 0){
					cout <<" +"<< J[m-1-i] <<"x^"<< m-i;
				}
			}
			if(k3 > 0){
				cout <<" +"<< k3 <<"\n";
			} else if(k3 < 0){
				cout <<" "<< k3 <<"\n";
			}
		} else if(m < n){
			int J[n];
//------------------------------------------------------------------------------------------------------------------------------------------------------------
			for(int i = 0; i < n; i++)
			{
				if(m-1-i == -1){
					while(i < n)
					{
						J[i] = Q[n-1-i];
						i++;
					}
					break;
				}
				J[i] = P[m-1-i] + Q[n-1-i];
			}
			k3 = k1 + k2;
			if(J[n-1] != 0){
				cout << J[n-1] <<"x^"<< n;
			}
			for(int i = 1; i < n; i++)
			{
				if(J[n-1-i] < 0){
					cout <<" "<< J[n-1-i] <<"x^"<< n-i;
				} else if(J[n-1-i] > 0){
				cout <<" +"<< J[n-1-i] <<"x^"<< n-i;
				}
			}
			if(k3 > 0){
				cout <<" +"<< k3 <<"\n";
			} else if(k3 < 0){
				cout <<" "<< k3 <<"\n";
			}
		}
		cout<<endl;
	} else if(a == 2){
		int k1, m, k2, n, k3;
	
		cout <<"Akan dicari hasil dari pengurangan dua polinomial \n\nMasukkan derajat polinomial pertama : ";
		cin >> m; int P[m];
		for(int i = 0; i < m; i++)
		{
			cout <<"Masukkan koefisien x^"<< m-i <<" : "; cin >> P[i];
		}
		cout <<"Masukkan konstanta polinomial pertama : "; cin >> k1; cout <<"\n";
	
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------
	
		cout <<"Masukkan derajat polinomial kedua : ";
		cin >> n; int Q[n];
		for(int i = 0; i < n; i++)
		{
			cout <<"Masukkan koefisien x^"<< n-i <<" : "; cin >> Q[i];
		}
		cout <<"Masukkan konstanta polinomial kedua : "; cin >> k2; cout <<"\n";
	

	
		cout <<"Polinomial pertama yang anda masukkan :\n";
		if(P[0] != 0){
			cout << P[0] <<"x^"<< m;
		}
		for(int i = 1; i < m; i++)
		{
			if(P[i] < 0){
				cout <<" "<< P[i] <<"x^"<< m-i;
			} else if(P[i] > 0){
				cout <<" +"<< P[i] <<"x^"<< m-i;
			}
		}
		if(k1 > 0){
			cout <<" +"<< k1 <<"\n\n";
		} else if(k1 < 0){
			cout <<" "<< k1 <<"\n\n";
		}
	
//---------------------------------------------------------------------------------------------------------------------------------------------------------------
	
		cout <<"Polinomial kedua yang anda masukkan :\n";
		if(Q[0] != 0){
			cout << Q[0] <<"x^"<< n;
		}
		for(int i = 1; i < n; i++)
		{
			if(Q[i] < 0){
				cout <<" "<< Q[i] <<"x^"<< n-i;
			} else if(Q[i] > 0){
				cout <<" +"<< Q[i] <<"x^"<< n-i;
			}
		}
		if(k2 > 0){
			cout <<" +"<< k2 <<"\n\n";
		} else if(k2 < 0){
			cout <<" "<< k2 <<"\n\n";
		}
	
//--------------------------------------------------------------------------------------------------------------------------------------------------------------
	
		cout <<"Hasil dari pengurangan kedua polinomial adalah :\n";
		if(m >= n){
			int K[m];
			
			for(int i = 0; i < m; i++)
			{
				if(n-1-i == -1){
					while(i < m)
					{
						K[i] = P[m-1-i];
						i++;
					}
					break;
				}
				K[i] = P[m-1-i] - Q[n-1-i];
			}
			k3 = k1 - k2;
			if(K[m-1] != 0){
				cout << K[m-1] <<"x^"<< m;
			}
			for(int i = 1; i < m; i++)
			{
				if(K[m-1-i] < 0){
					cout <<" "<< K[m-1-i] <<"x^"<< m-i;
				} else if(K[m-1-i] > 0){
				cout <<" +"<< K[m-1-i] <<"x^"<< m-i;
				}
			}
			if(k3 > 0){
				cout <<" +"<< k3 <<"\n";
			} else if(k3 < 0){
				cout <<" "<< k3 <<"\n";
			}
		} else if(m < n){
			int K[n];
			//-----------------------------------------------------------------------------------------------//
			for(int i = 0; i < n; i++)
			{
				if(m-1-i == -1){
					while(i < n)
					{
						K[i] = -Q[n-1-i];
						i++;
					}
					break;
				}
				K[i] = P[m-1-i] - Q[n-1-i];
			}
			k3 = k1 - k2;
			if(K[n-1] != 0){
				cout << K[n-1] <<"x^"<< n;
			}
			for(int i = 1; i < n; i++)
			{
				if(K[n-1-i] < 0){
					cout <<" "<< K[n-1-i] <<"x^"<< n-i;
				} else if(K[n-1-i] > 0){
				cout <<" +"<< K[n-1-i] <<"x^"<< n-i;
				}
			}
			if(k3 > 0){
				cout <<" +"<< k3 <<"\n";
			} else if(k3 < 0){
				cout <<" "<< k3 <<"\n";
			}
		}
		cout<<endl;
	} else if(a == 3){
		int k, o;
	
		cout <<"Akan dicari turunan dari polinomial \nMasukkan derajat polinomial : ";
		cin >> o; int T[o]; cout <<"\n";
	
		for(int i = 0; i < o; i++)
		{
			cout <<"Masukkan koefisien x^"<< o-i <<" : "; cin >> T[i];
		}
		cout <<"Masukkan konstanta polinomial : "; cin >> k; cout <<"\n";
		cout <<"Polinomial yang anda masukkan :\n";
		if(T[0] != 0){
			cout << T[0] <<"x^"<< o;
		}
		for(int i = 1; i < o; i++)
		{
			if(T[i] < 0){
				cout <<" "<< T[i] <<"x^"<< o-i;
			} else if(T[i] > 0){
				cout <<" +"<< T[i] <<"x^"<< o-i;
			}
		}
		if(k > 0){
			cout <<" +"<< k <<"\n\n";
		} else if(k < 0){
			cout <<" "<< k <<"\n\n";
		}
		cout <<"Turunan dari polinomial yang anda masukkan :\n";
		cout << T[0]*o <<"x^"<< o-1;
		for(int i = 1; i < o-1; i++)
		{
			if(T[i] < 0){
				cout <<" "<< T[i]*(o-i) <<"x^"<< o-i-1;
			} else if(T[i] > 0){
				cout <<" +"<< T[i]*(o-i) <<"x^"<< o-i-1;
			}
		}
		if(T[o-1] < 0){
			cout <<" "<< T[o-1];
		} else if(T[o-1] > 0){
			cout <<" +"<< T[o-1];
		}
		cout <<endl<<endl;
	}
	
	cout<<"Apakah anda ingin menghitung persamaan lagi? (Y/T): ";
	cin >>pilih;
	cout<<endl;
	if (pilih == 'Y' || pilih == 'y'){
		goto atas;
	}
	
	
	return 0;
}
