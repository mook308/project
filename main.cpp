//Project Compro
#include"main_program.h"

int main(){
	int menu=0;	
	srand(time(0));
	while (menu==0){
		cout<<"Type 1 to start game"<<endl;
		cout<<"Type 2 how to play the game"<<endl;
		cout<<"Type 3 check leader board"<<endl;
		int input_menu;
		cin>>input_menu;
		checkgamemode(input_menu);
		while(gamestart==1){
		
			vector<Card> cc;
			ifstream cards;
			cards.open("cards.txt");
			string ccard;
	
	
			while(getline(cards,ccard)){
				Card c;
				char desk[100];
				char name[100];
				sscanf(ccard.c_str(),"%[^;];%[^;];%d",desk,name,&c.score);
				c.desk = desk;
				c.namecard = name;
				cc.push_back(c);
				//cout<< c.score << "\n";
			}
			int i=rand()%52;
			cout<<ccard[i].score;
			
			
			
			
			
			
		}
		while(howtoplay==1){
			cout<<"ihi";
			
			
			
			
		}
		
		while(leaderB==1){
		cout<<"iejiwofjp";	
			
			
			
		}
		
		
		
		
		
		
		
		
		
		
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
