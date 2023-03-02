#include <iostream>
#include <cstring>
using namespace std;

int main(){
	
	int x, count, h1, h2;
	int bin[8];
	string hex_1, hex_2;
	
	cout<<"Please enter a number(0-255):"<<endl;
	
	while(cin>>x){
		
		int xout=x;
		count=0;
		for(int i=0;i<8;i++)
			bin[i]=0;
		hex_1="";
		hex_2="";
		
		if(x==0){
			cout<<"The binary number of "<<x<<" is: "<<0<<endl;
			cout<<"The hexadecimal number of "<<x<<" is: "<<0<<endl;
			continue;
		}
		
		if(x>0)
			for(int i=0;i<8 && x>0;i++){
				bin[7-i]=x%2;
				x/=2;
				count++;
			}
		
		cout<<"The binary number of "<<xout<<" is: ";
		for(int i=0;i<count;i++){
			cout<<bin[8-count+i];
		}
		cout<<endl;
		
		h1=bin[0]*8 + bin[1]*4 + bin[2]*2 + bin[3];
		h2=bin[4]*8 + bin[5]*4 + bin[6]*2 + bin[7];
		
		switch(h1){
			case 0:
				hex_1="";
				break;
			case 1:
				hex_1="1";
				break;
			case 2:
				hex_1="2";
				break;
			case 3:
				hex_1="3";
				break;
			case 4:
				hex_1="4";
				break;
			case 5:
				hex_1="5";
				break;
			case 6:
				hex_1="6";
				break;
			case 7:
				hex_1="7";
				break;
			case 8:
				hex_1="8";
				break;
			case 9:
				hex_1="9";
				break;
			case 10:
				hex_1="A";
				break;
			case 11:
				hex_1="B";
				break;
			case 12:
				hex_1="C";
				break;
			case 13:
				hex_1="D";
				break;
			case 14:
				hex_1="E";
				break;
			case 15:
				hex_1="F";
				break;
		}
		switch(h2){
			case 0:
				hex_2="0";
				break;
			case 1:
				hex_2="1";
				break;
			case 2:
				hex_2="2";
				break;
			case 3:
				hex_2="3";
				break;
			case 4:
				hex_2="4";
				break;
			case 5:
				hex_2="5";
				break;
			case 6:
				hex_2="6";
				break;
			case 7:
				hex_2="7";
				break;
			case 8:
				hex_2="8";
				break;
			case 9:
				hex_2="9";
				break;
			case 10:
				hex_2="A";
				break;
			case 11:
				hex_2="B";
				break;
			case 12:
				hex_2="C";
				break;
			case 13:
				hex_2="D";
				break;
			case 14:
				hex_2="E";
				break;
			case 15:
				hex_2="F";
				break;
		}
		
		cout<<"The hexadecimal number of "<<xout<<" is: "<<hex_1<<hex_2<<endl;
		
	}
	
	return 0;
}
