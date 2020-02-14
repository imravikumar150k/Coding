#include<iostream>
using namespace std;
void getChoice(){
	cout<<"Enter your choice:\n\
		1. White background & black font\n\
		2. White background & blue font\n\
		3. White background & red font\n\
		4. blue background & white font\n\
		5. red background & white font\n\
		0. to exit\n";
}

int main(){
	//get user input
	int input;
	getChoice();
	while(cin>>input && input!=0){
		getChoice();
		switch(input){
			case 1:
				//FIRST IS BG AND SECOND IS FG
				//GIVEN HEX COLOR IN DESCRIPTION
				//0-BLACK, 7 WHITE, 1 BLUE, 4 RED
				system("COLOR 70");
				break;
			case 2:
				system("COLOR 71");
				break;
			case 3:
				system("COLOR 74");
				break;
			case 4:
				system("COLOR 17");
				break;
			case 5:
				system("COLOR 47");
				break;
			default:
				cout<<"Wrong input\n";
		}
		
	}
}// THANKS FOR WATCHING 
//PLEASE LIKE AND SUBSCRIBE CODE LINK IS IN DESCRIPTION
