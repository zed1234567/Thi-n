#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int soBiMat=0,
	    soHienTai=0,
	    i=0,dk,mode;
	const int Max=100,Min=1;
	srand(time(NULL));
//	soBiMat=(rand()%(Max-Min+1)+Min);
//      TRÒ CHƠI ĐOÁN SỐ BÍ MẬT	
	printf("******MENU*****\n");
	printf("Xin chon che do choi 1 nguoi or 2 nguoi: ");
	scanf("%d",&mode);
	switch(mode)
	{
		case 1:
			{
			soBiMat=(rand()%(Max-Min+1)+Min);
 do{
	do{
		printf("Moi ban nhap so doan: ");
		scanf("%d",&soHienTai);
		if(soBiMat>soHienTai)
		{
			printf("So lon hon.\n");
			i++;
		}
		else if(soBiMat<soHienTai)
		{
			printf("So nho hon.\n");
			i++;
		}
		else
			printf("chung mung ban da doan dung sau %d lan.\n",i+1);
	}while(soBiMat!=soHienTai);
	printf("Ban co muon tiep tuc khong.(1 tiep tuc 0 thoat): ");
	scanf("%d",&dk);
	soBiMat=(rand()%(Max-Min+1)+Min);
	i=0;
}while(dk!=0);
} break;
case 2:{
	printf("Moi nguoi choi thu nhat nhap so bi mat: ");
	scanf("%d",&soBiMat);
do{
	do{
		printf("\nMoi nguoi choi thu hai nhap so du doan: ");
		scanf("%d",&soHienTai);
		if(soBiMat>soHienTai)
		{
			printf("So lon hon va moi nguoi choi thu hai nhap lai.\n");
			i++;
		}
		else if(soBiMat<soHienTai)
		{
		        printf("So nho hon va moi nguoi choi thu hai nhap lai.\n");
			i++;
		}
		else
			printf("chung mung ban da doan dung sau %d lan.\n",i+1);
	}while(soBiMat!=soHienTai);
	printf("Ban co muon tiep tuc khong.(1 tiep tuc 0 thoat): ");
	scanf("%d",&dk);
	i=0;
}while(dk!=0);
	break;
}
}
}





