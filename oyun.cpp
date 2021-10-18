//tr
//oyunda sayý tahmin ediyoruz ama bu diðerlerinden biraz farklý. Ýlk sayýyý tahmin etmeye çalýþtýðýnýzda 5 sayý arasýndan bilmeye çalýþýyorsunuz. Fakat sayýyý her bilemediðinizde
//bu sayi 0-5 arasi degil 0-6 gibi artarak devam ediyor ve sayý tahmini zorlaþýyor. eðer 5 kez bilemezseniz oyun biter 3 kez bilirseniz oyunu kazanirsiniz. Her bildiginizde artan aralik azalir

//en
//We guess numbers in the game but this one is a little different from the others. When you try to guess the first number, you are trying to know from 5 numbers. However, every time you do not know the number
//this number continues to increase like 0-6, not between 0-5, and the number estimation becomes difficult. If you do not know 5 times, the game is over. If you know 3 times, you win the game. Every time you know, this range decreases.
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int ras,rasgele1, i, seed;
int bilemedin=0;
int bildin=0;
int sayigir;


int main()
{
	cout<<"oyunda sayi tahmin ediyoruz ama bu digerlerinden biraz farkli. Ilk sayiyi tahmin etmeye calistiginizda 5 sayi arasindan bilmeye calisiyorsunuz. Fakat sayiyi her bilemediginizde bu sayi 0-5 arasi degil 0-6 gibi artarak devam ediyor ve sayi tahmini zorlasiyor. Eger 5 kez bilemezseniz kaybedersiniz, 3 kez bilirseniz kazanirsiniz. Her bildiginizde artan aralik azalir"<<endl;
	seed = time(NULL);
    srand(seed);
	basadon:
  	int sayilar[5+bilemedin];

    rasgele1 = rand() % (5+bilemedin);
    ras=rasgele1+1;
    sayilar[ras] = 1;
    cout<<endl;
	cout<<"sayi girin "<<0<<"-"<<5+bilemedin<<endl;
    cin >> sayigir;

    if (sayilar[sayigir] == 1)
    { 
	cout << "kazandin sayi" <<ras<<"'de sakliydi" << endl;
	bildin+=1; 
	if(bildin==3)
        goto bitis;
	bilemedin-=1;
	goto basadon;

	 cout << "sayi : " << ras << "'de sakliydi" << endl;
	 
}
    else
    {
    	 cout << "sayi : " << ras << "'de sakliydi" << endl;
    	sayilar[sayigir]=0;
     sayilar[ras]=0;
       	 bilemedin+=1;
        	cout << "bilemedin : "<<bilemedin<<endl;
        	
        	if(bilemedin==5)
        	goto bitis;
        	else
				goto basadon;
	}	

    for (int i = 1; i < 5+bilemedin; i++)
    {
        if (sayilar[sayigir] == sayilar[i])
        {
        	cout << "kazandin sayi " <<ras<<"'de sakliydi" << endl;
        	bildin+=1;
        	if(bildin==3)
        goto bitis;
        	bilemedin-=1;
        	goto basadon;
        	
        	 cout << "sayi : " << ras << "'de sakliydi" << endl;
        
        	goto bitis;
		}
            
        else
        {
        	 cout << "sayi : " << ras << "'de sakliydi" << endl;
        	 bilemedin+=1;
        	 
   			 cout << "bilemedin : "<<bilemedin<<endl;
   			sayilar[sayigir]=0;
     	sayilar[ras]=0;
			  if(bilemedin==5)
        	goto bitis;
        	else
				goto basadon;
		}
    }
bitis:

	cout<<endl;
	cout<<"oyun bitti"<<endl;

    return 0;
}
