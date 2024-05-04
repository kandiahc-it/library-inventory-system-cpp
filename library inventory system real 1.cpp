#include<iostream>
#include<string.h>
using namespace std;
class library{
	public:
	string ISBN;
	string name;
	string author;
	double price;
	int t1=1;int t2=1;
    void set(){
	    cout<<"Enter Book details"<<"\n"<<"~Enter the Isbn Number:";
		cin>>ISBN;
		cout<<"Enter the Name of the book:";
		cin>>name;
		cout<<"Enter the Author:";
		cin>>author;
		cout<<"Enter the price:";
		cin>>price;}
	void display(){
		cout<<"\n"<<"Your book details!!:"<<"\n";
		cout<<"Name:"<<name<<"\n";
		cout<<"ISBN number:"<<ISBN<<"\n";
		cout<<"Author:"<<author<<"\n";
		cout<<"Price:"<<price<<"\n";
	}
	void remove(string sr){
		
		if(ISBN==sr){
			cout<<"Deleting the book:"<<name;
		 t1=0;t2=0;
		}
		
	}
	void search(string sr){
		if(ISBN==sr)
		{
			cout<<"BOOK found"<<"\n";
			display();
			t1=0;
		}
	}

		};
int main(){
    int num,n;int fu,st=1;
    string sr,de;
    library k[10];
    library check;
int c=1;

while(c>0){
		cout<<"\n"<<"1.Adding a book"<<"\n"<<"2.Deleting a book. "<<"\n"<<"3.Searching a book."<<"\n"<<"4.Quit";
         cout<<"\n"<<"Enter choice:";cin>>n;
		switch(n){
		case 1:
		{
			cout<<"Enter Number of books to be added:";
		cin>>num;
		for(int i=0;i<num;i++){
		k[i].set();	
		}
		c+=1;break;	
		}	
		
		case 2:{
    	cout<<"Enter ISBN number to remove a book:";
    	cin>>de;
    	for(int i=0;i<num;i++){
	    	k[i].remove(de);
	    }
	    if(check.t1==1){
	    	cout<<"!!Book Not Found";
		}
        c+=1;
		break;
		}
        
		case 3:{
		cout<<"Enter isbn number to search the book:";
    	cin>>sr;
    	for(int i=0;i<num;i++){
    		k[i].search(sr);
		}
		if(check.t1==1 or check.t2==0){
			cout<<"Book not found....";
		}
    	c+=1;
        break;	
    	}
		case 4:
		{
		cout<<"quit";
		c=0;break;	
		}
		default:
			{
				cout<<"enter correct option";c+=1;
			}
	 }
	}
}





