#include<iostream>
using namespace std;

int main(){
	char grade[5] = {'A','B','C','D','F'};
	char grade00;
	int i = 1,A=0,B=0,C=0,D=0,F=0;
	cout<<"Please input grade of each student (A-F) or input 0 to exit.\n";
	do{
		cout<<"Student ["<<i<<"]: ";
		cin>>grade00;
		if(grade00 == grade[0]){
			A++;
		}else if(grade00 == grade[1]){
			B++;
		}else if(grade00 == grade[2]){
			C++;
		}else if(grade00 == grade[3]){
			D++;
		}else if(grade00 == grade[4]){
			F++;
		}
		else if(grade00 == '0'){
			break;
		}
		else{
			cout<<"Wrong input. Please input again.\n"; continue;
		}
		i++;
	}while(grade00 != '0');
	cout<<"In total "<<i-1<<" students.\n";
	cout<<"A = "<<A<<", ";
	cout<<"B = "<<B<<", ";
	cout<<"C = "<<C<<", ";
	cout<<"D = "<<D<<", ";
	cout<<"F = "<<F;
	return 0;
}