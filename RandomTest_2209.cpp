#include<iostream>
#include<time.h>

using namespace std;

#define chance 5

int main(){

	
	int input;
	int cnt=0;
	char yn;

	cout<<"\t\t***�� �ٿ� ���� ���α׷�***"<<endl;
	cout<<"�������� �߻��� ���� ���ߴ� �����Դϴ�. ��ȸ�� 5�� �Դϴ�."<<"\n"<<endl;

	do{
		srand((unsigned)time(0));
		int random=(rand()%100);

		for(int i=0; i<chance; i++){
			cout<<"�� ���� ������ �Է����ּ��� (���� : 0 ~ 99) : ";
			cin>>input;
			cnt++;

			if(input<0 || input>99)
				cout<<"������ 0���� 99���� �Դϴ�. ������ Ȯ�����ּ���T^T (���� ��ȸ : "<<chance-cnt<<")"<<endl;
			else if(random>input)
				cout<<cnt<<"��° ���� : Ʋ�Ƚ��ϴ� ���ڸ� ���ݸ� Ű���ּ����_�� (���� ��ȸ : "<<chance-cnt<<")"<<endl;
			else if(random<input)
				cout<<cnt<<"��° ���� : Ʋ�Ƚ��ϴ� ���ڸ� ���ݸ� �ٿ��ּ����_�� (���� ��ȸ : "<<chance-cnt<<")"<<endl;
			else if(random==input){
				cout<<"�� �����մϴ� "<<cnt<<"��° �������� ���� ���� ���߼̽��ϴ� >_<�� "<<endl;
				break;
			}
		}
	
		cout<<"\n\t*********�������**********"<<endl;
		cout<<"���� �Է��� �� : "<<input<<" / �������� �߻��� �� : " <<random<<"\n"<<endl;

		cnt=0;
		cout<<"�ٽ� �Ͻðڽ��ϱ� ? ( y / n ) : ";
		cin>>yn;
		cout<<"\n";

		if(yn=='n' || yn=='N') {
			cout<<"���α׷��� �����մϴ�."<<endl;
			break;
		}
		else if(yn!='n' && yn!='N' && yn!='Y' && yn!='y') 
			cout<<"y �Ǵ� n�� �Է� �����մϴ�."<<endl;

	}while(yn=='y'||yn=='Y');

}