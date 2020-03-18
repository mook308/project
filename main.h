//Project Compro
#include<iostream>
#include<string>
#include<cstring>
#include<fstream>
#include<vector>
#include<cctype>
using namespace std;
int mymoney=0,gameover=0;
int gamestart=0,howtoplay=0,leaderB=0;

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
