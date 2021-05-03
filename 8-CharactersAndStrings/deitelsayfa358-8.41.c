#include <stdio.h>
#include <conio.h>

void ihbarnameYazdir(char [],char[],char[],char [],long int,int,const char *,const char *);

int main(){
    const char *bugununTarihi="03/09/2020";
    const char *faturaTarihi="03/12/2019";
    const char *vadeTarihi="03/05/2020";
    const char *ilkIhbarnameninTarihi="06/06/2020";
    const char *ikinciIhbarnameninTarihi="06/07/2020";
    const char *ucuncuIhbarnameninTarihi="06/08/2020";
    const char *dorduncuIhbarnameninTarihi="06/09/2020";
    const char *besinciIhbarnameninTarihi="06/10/2020";
	char borclununIsmi[50]="";
	char borclununAdresi[50]="";
	char borclununHesabi[50]="";
	char borcunSebebi[50]="";
	long int borcMiktari;
	int borcunVadesi;
    printf("Borclunun ismini giriniz:\n");
    gets(borclununIsmi);
    printf("Borclunun adresini giriniz:\n");
	gets(borclununAdresi);
    printf("Borclunun hesabini giriniz:\n");
	gets(borclununHesabi);
	printf("Borcun verilme sebebi:\n");
	gets(borcunSebebi);
    printf("Borc miktarini giriniz:\n");
    scanf("%ld",&borcMiktari);
    printf("Borcun vadesini giriniz:\n");
    scanf("%d",&borcunVadesi);
    ihbarnameYazdir(borclununIsmi,borclununAdresi,borclununHesabi,borcunSebebi,borcMiktari,borcunVadesi,bugununTarihi,
                                faturaTarihi);



	getch();
	return 0;
}


void ihbarnameYazdir(char isim[],char adres[],char hesap[],char borcunSebebi[],long int miktar,int vade,
                                   const char *bugununTarihi,const char *faturaTarihi){
    printf("\t\t\t*---- IHTARNAME ----*\t\t\t\n\n");
    printf("- IHTAR GONDEREN - \n\n");
    printf("Adi: Yarasa Reis\n\n");
    printf("Adresi: Heybetli Yarasa Ini\n\n");
    printf("- IHTAR GONDERILEN - \n\n");
    printf("Muhatap: %s\n\n",isim);
    printf("Adresi: %s\n\n",adres);
    printf("Hesabi: %s\n\n\n\n",hesap);
    printf("- KONU - \n\n");
    printf("Konusu gelmis borcun odenmesine iliskin ihtarname\n\n\n\n");
    printf("Sayin %s,\n\n%s tarihinde aramizda imzalanan borc verme sozlesmesi geregince\nve asagida"
            " belirtilen sartlar dahilinde tarafiniza %ld TL borc vermis\nbulunmaktayim.Soz konusu paranin"
            " verilme sebebi asagida belirtilmistir:\n\n",isim,faturaTarihi,miktar);
    printf("-%s-\n\n",borcunSebebi);
    printf("Aramizda imzalanan borc sozlesmesi'nde,aldiginiz %d TL borc para yillik %10 oraninda\n"
             "isletilen ana para faizinin eklenecegi hukmu yer almaktadir.Buna gore,bugun\nitibariyle"
             " odenmesi gereken guncel borc tutari, %.2f TL'dir.\n\n",miktar,(double)miktar+miktar*0.10);
    printf("%s tarihinde tarafima odemeniz gereken %d TL'nin bir kismini hala\nodememis bulunmaktasiniz."
             "Bugune kadar tarafima yapilan odeme yalnizca 0 TL'dir.\nBu sebeple toplam borc tutarindan"
             "kalan bedelin tarafima odenmesi gerekmektedir.\n\n",faturaTarihi,miktar);
    printf("Sayin muhatap,yukarida aciklanan nedenlerle ve fazlaya iliskin haklarim sakli\nkalmak"
             " kaydiyla,isbu ihtarnamenin tebliginden itibaren 30 gun icinde,muaccel\nhale gelen"
             " borcun kalan kismi olan %d TL'yi nakden ve defaten,asagida\nbilgileri verilen"
             "banka hesabina odemenizi talep ederim.Aksi halde temerrut\nkosullari olusturacagindan"
             " vadesi gelmis borc alacaginin odenmeyen kisminin,\ngunluk olarak isleyen %5 temerrut"
             " faiz orani ile birlikte hesaplanan,toplam\ntutarinin tahsili icin icra takibi baslatilacagini"
             " ve gerekirse muaccel olan\nborcun dava yolu ile tahsil edilecegini,bu ugurda yapilacak"
             " tum giderler ve\navukatlik ucretlerinin de tarafiniza ait olacagini ihtar ederim.\n\n\n",miktar);
    printf("---Ziraat bankasi 8888-2444-1231-1231 NO'lu IBAN NO---\n\n\n");
    printf("Saygilarimla,\n\n\n\n");
    printf("SAYIN NOTER;\n\n");
    printf("Uc ornekten ibaret bu ihtarin bir orneginin karsi tarafa tebligini,bir orneginin\n"
              "dairenizde saklanmasini ve teblig aciklamasi olan diger orneginin,tarafima\n"
              "iadesini talep ederim.");
}
