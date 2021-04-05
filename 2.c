#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

int main() 
{
	int s, seta;
	double res;
	printf("초기속력,발사각도를 입력해주세요 (띄어쓰기)");
	scanf("%d %d",&s,&seta);
	res = (2*s*sin(seta))/9.8;
	printf("%.2lf초 후에 도착합니다",res);
	return 0;
}

