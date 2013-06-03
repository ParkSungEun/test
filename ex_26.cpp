#include <iostream>
#include <Windows.h>
using namespace std;

	int row=0; //�ο���
	int col=0; //�����
	
	char* subj[] = {"����", "����", "����", "java", "C++", "Wcg"};
	int score[100][6]; 
	int sum[100] = {0, }; 
	double ave[100] = {0, }; 
	char name[100][30]; 

	int ssum[6]={0,}; //���� ����
	int sssum=0;  //������ ����
	double aave[6]={0,}; //����� ���
	int rank[100]; 

	int input;
	bool tf;

	void INPUT(){
		cout<<"��� ���� �Է��� �ּ���. (100����� �Է� �����մϴ�.) >> "; 
		cin>>row;

		cout<<"�� ������ ó���Ͻðڽ��ϱ�? (6������� �Է� �����մϴ�.) >> ";
		cin>>col;
		cout<<endl;

		cout<<"���� ó���� ���� ���� �Է��� �����մϴ�."<<"\n"<<endl;
	
		for(int i=0; i<row; i++) {
			cout<<"�̸��� �Է��ϼ��� : ";
			cin>>name[i];
			cout<<endl;
				for( int j=0; j<col; j++) {
					cout<<subj[j]<<" ������ �Է��ϼ��� : ";
					cin>>score[i][j];
				}
				cout<<endl;
		}
	}
	
	void CALC(){
		for(int i=0; i<row; i++){
			for(int j=0; j<col; j++){
				sum[i]+=score[i][j]; 
				ave[i] = (double)sum[i]/col;
			}
			cout<<endl;
		}
	}

	void PRINT_HAK(){
	cout<<"**************************** �й� �� ���� �϶�ǥ ****************************"<<endl;
	cout<<"-----------------------------------------------------------------------------"<<endl;
	cout<<"�̸�\t";
	
	for(int i=0;i<col;i++){
	cout<<subj[i]<<"\t";
	}
	cout<<"����\t���\t����"<<endl;
	cout<<"-----------------------------------------------------------------------------"<<endl;

	//rank 1���� ����
	for(int k=0;k<row;k++)
	::rank[k]=1;

		
		for(int i=0;i<row-1;i++){
			for(int j=i+1;j<row;j++){
				if(sum[i]<sum[j]){
				::rank[i]++;
				}
				else if(sum[j]<sum[i]){
				::rank[j]++;
				}
			} 
		}

	for(int i=0; i<row; i++) {
			cout<<name[i]<<"\t";

		for(int j=0;j<col;j++){
		cout<<score[i][j]<<"\t";
		}

		cout<<sum[i]<<"\t"<<ave[i]<<"\t"<<::rank[i]<<endl;
	}

		cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<"����\t";

		for(int i=0;i<col;i++){
			for(int m=0;m<row;m++){
				ssum[i]+=score[m][i];
		}
		cout<<ssum[i]<<"\t"; 
		}

		for(int i=0;i<row;i++){
			sssum+=sum[i];
		}

		cout<<sssum<<endl;
		cout<<"���\t";

		for(int i=0;i<col;i++){
		aave[i]=ssum[i]/(double)row;
		cout<<aave[i]<<"\t";
		}

		cout<<"\t"<<(double)sssum/(row*col)<<endl;
		cout<<"-----------------------------------------------------------------------------"<<"\n"<<endl;

	}

	void PRINT_RANK(){
		cout<<"**************************** ���� �� ���� �϶�ǥ ****************************"<<endl;
		cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<"�̸�\t";
		
		for(int i=0;i<col;i++){
		cout<<subj[i]<<"\t";
		}
		cout<<"����\t���\t����"<<endl;
		cout<<"-----------------------------------------------------------------------------"<<endl;

		int n;
		double d;
		char ch;

		for(int i=0; i<=row-2; i++){
			for(int j=i+1; j<=row-1; j++){
				if(sum[i]<sum[j]){

					for(int p=0; p<30; p++){
						ch=name[i][p];
						name[i][p]=name[j][p];
						name[j][p]=ch;
					}
					
					for(int k=0; k<row; k++){
						n=score[i][k];
						score[i][k]=score[j][k];
						score[j][k]=n;
					}

					n=sum[i];
					sum[i]=sum[j];
					sum[j]=n;

					d=ave[i];
					ave[i]=ave[j];
					ave[j]=d;

					n=::rank[i];
					::rank[i]=::rank[j];
					::rank[j]=n;
				}
			}
		}

		for(int i=0; i<row; i++) {
		cout<<name[i]<<"\t";

		for(int j=0;j<col;j++){
		cout<<score[i][j]<<"\t";
		}

		cout<<sum[i]<<"\t"<<ave[i]<<"\t"<<::rank[i]<<endl;
		}

		cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<"����\t";

		for(int i=0;i<col;i++){
			for(int m=0;m<row;m++){
				ssum[i]+=score[m][i];
		}
		cout<<ssum[i]/2<<"\t"; 
		}

		for(int i=0;i<row;i++){
			sssum+=sum[i];
		}

		cout<<sssum/2<<endl;
		cout<<"���\t";

		for(int i=0;i<col;i++){
		aave[i]=ssum[i]/(double)row;
		cout<<aave[i]/2<<"\t";
		}

		cout<<"\t"<<((double)sssum/(row*col))/2<<endl;
		cout<<"-----------------------------------------------------------------------------"<<endl;

	}


	int main() {
		
		cout<<"**����ó�����α׷�**\n"<<endl;
		do{
		cout<<"1. �Է�\n"<<"2. �й��� ���\n"<<"3. ������ ���\n"<<"4. ����\n";
		cout<<"-------------��ȣ�� �Է��ϼ���-----> ";
		cin>>input;
		cout<<endl;

			system("cls");
			switch(input){
			case 1 : INPUT(); CALC(); break;
			case 2 :	PRINT_HAK(); break;
			case 3 : 	PRINT_RANK(); break;
			case 4 : cout<<"���α׷��� �����մϴ�"<<endl; return 0;
			default : cout<<"���� ���� ���ڸ� �Է����ּ���\n"<<endl;
			}

		}while(input!=4);
		
		return 0;
}