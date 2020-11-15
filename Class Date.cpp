#include<iostream>
using namespace std;

class Date{
	
	private:
		
		int d, m, y;
		
		
	public:
	
		Date(){
			
			d = m = y = 0;
			
		}
		
		
		Date(int d, int m, int y){
			
			this->d = d;
			this->m = m;
			this->y = y;
			
		}	
		
		void setDate(int d){
			
			if (d>31 || d<0){
				
				cout<<"Invalid Value for Date"<<endl;
				
			}
			
			else{
				
				this->d = d;
				
			}
			
		}
		
		void setMonth(int m){
			
			if(m>12 || m<=0){
				
				cout<<"Invalid Value For Month"<<endl;
				
			}
			
			else{
				
				this->m = m;
				
			}
			
		}
		
		
		void setYear(){
			
			if(y>2020 || y<1990){
				
				cout<<"Invalid Value For Year"<<endl;
				
			}
			
			else{
				
				this->y = y;
				
			}
			
		}
		
				
		void NewDate(){
		
			d++;
				
			if(d>31){
					
				d = 1;
				m++;
					
			}
				
			if(m>12){
					
				m = 1;
				y++;
					
			}
			
			cout<<"New Date: "<<d<<"/"<<m<<"/"<<y<<endl;
				
		}
	
	
};

int main(){
	
	Date D1(30, 12, 2019);
	D1.setDate(32);
	D1.NewDate();
	
	return 0;
}
