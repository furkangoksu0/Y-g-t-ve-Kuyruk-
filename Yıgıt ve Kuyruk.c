#include <stdio.h>
#define MAX 10
int Kuyruk[MAX], front = -1, rear = -1;
int yigit[MAX];
int top=-1;
void ekle(int a) {
//Ekle fonksiyonunu kullanarak kuyru�a say� atamas� yap�yorum
 
    if (front == -1)
      front = 0;
    rear++;
    Kuyruk[rear] = a;
   
}

int cikar() {
//��kar fonksiyonu diziden ��kar�yorum ama d�nd�r�lerek mainde kar��la�t�rma yapmam�z� sa�lar
 int k;

 
	k=front;
    front++;
    if (front > rear)
      front = rear = -1;

  return Kuyruk[k];
}

void yazdir() {
  //yazd�rma i�lemidir
  int i;
 
    printf("\nKuyruk elemanlari\n");
    for (i = front; i <= rear; i++)
      printf("%d  ", Kuyruk[i]);
  
  printf("\n");
}
//yukar�da anlatt�klar�m�n ayn�s�n� y���t i�in yap�yorum
void ekle2(int a){

	    top++;
	   yigit[top]=a;

}

int cikar2(){

return	yigit[top--] ;	
}

void Yazdir2(){

		int i;
		printf("yigit elemanlari\n");
		for(i=0;i<=top;i++){
			printf(" %d ",yigit[i]);
		}
		printf("\n");
	
}

main(){
	printf("kac adet sayi gireceksiniz:");
	int rakam;
	scanf("%d",&rakam);
	//if ile girilen say�n�n 10 dan k���k olmas�n� sa�l�yorum
	if(rakam<10&&rakam>0){

	//say� adedi �ift ise bu �al���r
	if(rakam%2==0){

	int i;
	int Atama[rakam];	
	//kullan�c�dan rakam giri�ini al�yorum
	for(i=0;i<rakam;i++){
		printf("Bir Rakam Giriniz:");
		scanf("%d",&Atama[i]);
	}
	int j;
//ald���m say�lar� ekle fonksiyonu ile kuyru�a at�yorum
//ekle 2 de yigit i�in yap�yorum
	for(j=0;j<rakam/2;j++){
	ekle(Atama[j]);
	}
int k;
for(k=rakam/2;k<rakam;k++){
ekle2(Atama[k]);
}
	}	
	//say� adedi tek ise bu �al���r
	//yukar�da anlatt�klar�m�n ayn�s�n� birdaha yap�yorum
	else {
		
		int i;
	int Atama2[rakam];	
	for(i=0;i<rakam;i++){
		printf("Bir Rakam Giriniz:");
		scanf("%d",&Atama2[i]);
	}
	int j;
	for(j=0;j<rakam/2;j++){
	ekle(Atama2[j]);
	}
int k;
for(k=rakam/2+1;k<rakam;k++){
ekle2(Atama2[k]);
}	
	}
yazdir();
Yazdir2();
int s;

int sonuc=0;
for(s=1;s<rakam/2;s++){
	if(cikar2()!=cikar()){

		sonuc++;
	}
	
}

	if(sonuc==0){
		printf("palindromdur");
	}	
	else
	printf("palindrom degildir");													
	}

	else
	printf("0 ile 9 aras�nda sayi girebilirsiniz!!");

}
	
