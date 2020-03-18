//Project Compro
#include<iostream>
#include<string>
#include<cstring>
#include<fstream>
#include<vector>
#include<cctype>
#include<ctime>
#include<cstdlib>
using namespace std;
int mymoney=0,gameover=0;
int gamestart=0,howtoplay=0,leaderB=0;


struct Card{
	string deck;
	string namecard;
	int score;
};

//--------------------------------------------------------

int betmoney (int x){ //x cin from player
	if(x>mymoney) return 0;
	else return x;
	
}



void Addmoney(int x,int &y){ //x from function bet.,y = mymoney
	y += x*2;
}




void removemoney(int x,int &y){ //x from function bet.,y = mymoney
	y -= x;
}




void checkmoney (){
	if(mymoney<=0) gameover=1;
}




void checkgamemode(int x){
	if(x==1) gamestart=1;
	else if(x==2) howtoplay=1;
	else if(x==3) leaderB=1;
	
}




int Hit(vector<Card> &a,vector<string> &b){
	int i = rand()%52;
	//cout<< i <<"\n";
	string x = a[i].deck ;
	string y = a[i].namecard;
	int z = a[i].score;
	b.push_back(x+y);
	return a[i].score;	
}

