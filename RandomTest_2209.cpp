#include<iostream>
#include<time.h>

using namespace std;

#define chance 5

int main(){

	
	int input;
	int cnt=0;
	char yn;

	cout<<"\t\t***업 다운 게임 프로그램***"<<endl;
	cout<<"랜덤으로 발생된 수를 맞추는 게임입니다. 기회는 5번 입니다."<<"\n"<<endl;

	do{
		srand((unsigned)time(0));
		int random=(rand()%100);

		for(int i=0; i<chance; i++){
			cout<<"한 개의 정수를 입력해주세요 (범위 : 0 ~ 99) : ";
			cin>>input;
			cnt++;

			if(input<0 || input>99)
				cout<<"범위는 0부터 99까지 입니다. 범위를 확인해주세요T^T (남은 기회 : "<<chance-cnt<<")"<<endl;
			else if(random>input)
				cout<<cnt<<"번째 도전 : 틀렸습니당 숫자를 조금만 키워주세용ㅠ_ㅠ (남은 기회 : "<<chance-cnt<<")"<<endl;
			else if(random<input)
				cout<<cnt<<"번째 도전 : 틀렸습니당 숫자를 조금만 줄여주세용ㅠ_ㅠ (남은 기회 : "<<chance-cnt<<")"<<endl;
			else if(random==input){
				cout<<"★ 축하합니당 "<<cnt<<"번째 도전에서 랜덤 수를 맞추셨습니다 >_<★ "<<endl;
				break;
			}
		}
	
		cout<<"\n\t*********정답공개**********"<<endl;
		cout<<"내가 입력한 수 : "<<input<<" / 랜덤으로 발생된 수 : " <<random<<"\n"<<endl;

		cnt=0;
		cout<<"다시 하시겠습니까 ? ( y / n ) : ";
		cin>>yn;
		cout<<"\n";

		if(yn=='n' || yn=='N') {
			cout<<"프로그램을 종료합니다."<<endl;
			break;
		}
		else if(yn!='n' && yn!='N' && yn!='Y' && yn!='y') 
			cout<<"y 또는 n만 입력 가능합니다."<<endl;

	}while(yn=='y'||yn=='Y');

}