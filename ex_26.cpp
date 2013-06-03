#include <iostream>
#include <Windows.h>
using namespace std;

	int row=0; //인원수
	int col=0; //과목수
	
	char* subj[] = {"국어", "수학", "영어", "java", "C++", "Wcg"};
	int score[100][6]; 
	int sum[100] = {0, }; 
	double ave[100] = {0, }; 
	char name[100][30]; 

	int ssum[6]={0,}; //과목별 총점
	int sssum=0;  //총점의 총점
	double aave[6]={0,}; //평균의 평균
	int rank[100]; 

	int input;
	bool tf;

	void INPUT(){
		cout<<"사람 수를 입력해 주세요. (100명까지 입력 가능합니다.) >> "; 
		cin>>row;

		cout<<"몇 과목을 처리하시겠습니까? (6과목까지 입력 가능합니다.) >> ";
		cin>>col;
		cout<<endl;

		cout<<"성적 처리를 위한 정보 입력을 시작합니다."<<"\n"<<endl;
	
		for(int i=0; i<row; i++) {
			cout<<"이름을 입력하세요 : ";
			cin>>name[i];
			cout<<endl;
				for( int j=0; j<col; j++) {
					cout<<subj[j]<<" 점수를 입력하세요 : ";
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
	cout<<"**************************** 학번 순 성적 일람표 ****************************"<<endl;
	cout<<"-----------------------------------------------------------------------------"<<endl;
	cout<<"이름\t";
	
	for(int i=0;i<col;i++){
	cout<<subj[i]<<"\t";
	}
	cout<<"총점\t평균\t석차"<<endl;
	cout<<"-----------------------------------------------------------------------------"<<endl;

	//rank 1부터 시작
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
		cout<<"총점\t";

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
		cout<<"평균\t";

		for(int i=0;i<col;i++){
		aave[i]=ssum[i]/(double)row;
		cout<<aave[i]<<"\t";
		}

		cout<<"\t"<<(double)sssum/(row*col)<<endl;
		cout<<"-----------------------------------------------------------------------------"<<"\n"<<endl;

	}

	void PRINT_RANK(){
		cout<<"**************************** 석차 순 성적 일람표 ****************************"<<endl;
		cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<"이름\t";
		
		for(int i=0;i<col;i++){
		cout<<subj[i]<<"\t";
		}
		cout<<"총점\t평균\t석차"<<endl;
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
		cout<<"총점\t";

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
		cout<<"평균\t";

		for(int i=0;i<col;i++){
		aave[i]=ssum[i]/(double)row;
		cout<<aave[i]/2<<"\t";
		}

		cout<<"\t"<<((double)sssum/(row*col))/2<<endl;
		cout<<"-----------------------------------------------------------------------------"<<endl;

	}


	int main() {
		
		cout<<"**성적처리프로그램**\n"<<endl;
		do{
		cout<<"1. 입력\n"<<"2. 학번순 출력\n"<<"3. 석차순 출력\n"<<"4. 종료\n";
		cout<<"-------------번호를 입력하세요-----> ";
		cin>>input;
		cout<<endl;

			system("cls");
			switch(input){
			case 1 : INPUT(); CALC(); break;
			case 2 :	PRINT_HAK(); break;
			case 3 : 	PRINT_RANK(); break;
			case 4 : cout<<"프로그램을 종료합니다"<<endl; return 0;
			default : cout<<"범위 내의 숫자를 입력해주세요\n"<<endl;
			}

		}while(input!=4);
		
		return 0;
}