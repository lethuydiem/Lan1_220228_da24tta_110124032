/*
MSSV: 110124032
Ho ten: Le Thuy Diem
Lop: DA24TTA
*/
#include <stdio.h>
void Nhap(float a[]);
void Xuat(float a[]);
float Tong(float a[]);
float TbSoGioHoc(float a[]);
int MaxGio(float a[]);
int MinGio(float a[]);
void MucTieu(float a[]);
void SapXepGiam(float a[]);
int main()
{
	int songay=7;
	float a[songay];
	
	Nhap(a);
	
	Xuat(a);
	
	printf("\nTong so gio hoc trong tuan la: %.2f gio\n",Tong(a));
	
	printf("\nTrung binh so gio hoc moi ngay la: %.2f gio\n", TbSoGioHoc(a));
	
	if(MaxGio(a)<6)
		printf("\nNgay co so gio hoc nhieu nhat la: Thu %d\n",MaxGio(a)+2);
	else
		printf("\nNgay co so gio hoc nhieu nhat la: Chu nhat\n");
		
	if(MinGio(a)<6)
		printf("\nNgay co so gio hoc it nhat la: Thu %d\n",MinGio(a)+2);
	else
		printf("\nNgay co so gio hoc it nhat la: Chu nhat\n");
		
	MucTieu(a);
	
	SapXepGiam(a);
	return 0;
}
void Nhap(float a[])
{
	printf("Nhap so gio hoc tap trong tung ngay:\n");
	for(int j=2;j<8;j++)
	{
		printf("Thu %d: ",j);
		for(int i=j-2;i<j-1;i++)
		{
			do
			{
				scanf("%f",&a[i]);
			}while(a[i]<0||a[i]>15);
		}
	}
	printf("Chu nhat: ");
	do
	{
		scanf("%f",&a[6]);
	}while(a[6]<0||a[6]>15);
}

void Xuat(float a[])
{
	printf("\nThoi gian hoc tap tung ngay trong tuan:\n");
	for(int j=2;j<8;j++)
	{
		printf("Thu %d: ",j);
		for(int i=j-2;i<j-1;i++)
		{
			printf("%.2f gio\n",a[i]);
		}
	}
	printf("Chu nhat: %.2f gio\n",a[6]);
}

float Tong(float a[])
{
	float s=0;
	for(int i=0;i<7;i++)
	{
		s+=a[i];
	}
	return s;
}

float TbSoGioHoc(float a[])
{
	float tb=0;
	tb=Tong(a)/7;
	return tb;
}

int MaxGio(float a[])
{
	float m=a[0];
	int t=0;
	for(int i=0;i<7;i++)
	{
		if(a[i]>m)
		{
			m=a[i];
			t=i;
		}
	}
	return t;
}

int MinGio(float a[])
{
	float m=a[0];
	int t=0;
	for(int i=0;i<7;i++)
	{
		if(a[i]<m)
		{
			m=a[i];
			t=i;
		}
	}
	return t;
}

void MucTieu(float a[])
{
	float x;
	int dem1=0, dem2=0;
	printf("\nMuc tieu so gio hoc la: ");
	scanf("%f",&x);
	for(int i=0;i<7;i++)
	{
		if(a[i]>=x)
			dem1++;
		else
			dem2++;
	}
	printf("\nSo ngay dat hoac vuot muc tieu la: %d ngay\n",dem1);
	printf("\nSo ngay khong dat muc tieu la: %d ngay\n",dem2);
}

void SapXepGiam(float a[])
{
	float t;
	for(int i=0;i<6;i++)
	{
		for(int j=0;j<6;j++)
		{
			if(a[j]<a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	printf("\nThoi gian hoc tap cua cac ngay theo thu tu giam dan:\n");
	for(int i=0;i<7;i++)
	{
		printf("%.2f gio \t",a[i]);
	}
}
