#include<stdio.h>
int main(){
	float dodai,chieucao,dientich;
	printf("moi ban nhap do dai canh la:");
	scanf("%f",&dodai);
	printf("moi ban nhap chieu cao la:");
	scanf("%f",&chieucao);
	dientich = (dodai * chieucao) / 2;
	printf("dien tich hinh tam giac la: %.2f",dientich);
	
}
