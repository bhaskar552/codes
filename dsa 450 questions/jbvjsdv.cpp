#include<iostream>
using namespace std;
class cricketer{
	protected:
	string name;
	int matches;
		int id;
	public:
	cricketer(string a,int b,int c){
		name=a;
		matches=b;
		id=c;
	}
};
class batsman:public virtual cricketer{
	protected:
	int runs;
	public:
		batsman(string a, int b,int c,int d):cricketer(a,b,c){
			runs=d;
		}
};
class bowler:public virtual cricketer{
	protected:
	int wickets;
	public:
		bowler(string a,int b,int c,int e):cricketer(a,b,c){
			wickets=e;
		}
};
class Allrounder:public batsman,public bowler{
	int wpm;
	int rpm;

	public:
	Allrounder( string a,int b,int c,int d,int e):cricketer(a,b,c),batsman(a,b,c,d),bowler(a,b,c,e){

	}
	void calculate(){
		wpm=(wickets/matches);
		rpm=(runs/matches);
	}

	void display(){
		cout<<"Name:"<<name<<endl;
		cout<<"id:-"<<id<<endl;
		cout<<"Matches Played:-"<<matches<<endl;
		cout<<"Runs scored:"<<runs<<endl;
		cout<<"Wickets taken:"<<wickets<<endl;
		cout<<"Average:-"<<rpm<<endl;
		cout<<"Wickets Per Match:-"<<wpm<<endl;
	}
};
int main(){
string str;
cout<<"Enter Name:";
cin>>str;

Allrounder a(str,300,14,5000,300);
a.calculate();
a.display();
}
