#include <iostream>

using namespace std;

int main(){
	int dan;
	char a;

	while(1){
		cout<<"���� ������ �̿��� ������ ��� ���α׷� �Դϴ�."<<endl;
		cout<<"x�� �Է��ϸ� ����� �����մϴ�."<<endl;
		cout<<"0�� �Է��ϸ� 1�ܺ��� 9�ܱ��� ����մϴ�."<<endl;
		cout<<"����� ���� �Է��ϼ��� : ";
			
			cin>>dan;

			if((dan==121)||(dan==94)){
				cout<<"������ ����� ���� �մϴ�"<<endl;
				break;
			}

		

			cout<<dan<<"�� ��� �մϴ�"<<endl;
			for(int i=1; i<=9; i++){
			cout<< "		"<<dan<<" * "<<i<<" = "<<(dan*i)<<endl;
			}
	}
	
	return 0;
}