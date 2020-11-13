#include<iostream>
#include<unistd.h>
using namespace std;

class DateAndTime{
	
	private:
		
		int d, month, y, h, m, s;
		string daynight;
		
		
	public:
	
		DateAndTime(){
			
			d = month = y = h = m = s = 0;
			daynight = " ";
			
		}
		
		DateAndTime(int d, int month, int y, int h, int m, int s, string daynight){
			
			this->d = d;
			this->month = month;
			this->y = y;
			this->h = h;
			this->m = m;
			this->s = s;
			this->daynight = daynight;
			
		}
		
		void NewDate(){
		
			d++;
				
			if(d>31){
					
				d = 1;
				month++;
					
			}
				
			if(month>12){
					
				month = 1;
				y++;
					
			}
			
			cout<<"New Date: "<<d<<"/"<<month<<"/"<<y<<endl;
			daynight = "AM";			
		}
			
	
		
		
		void Tick(){
			
			int l = 5;
			
			if(daynight=="AM"){
			
				for(int i = 0; i < l; i++){
				
					s++;
				
					if(s==60){
					
						s = 1;
						m++;
					
					}
				
					if(m==60){
					
						m = 0;
						h++;
				
					}
					
					if(h==12){
						
						daynight = "PM";
						
					}	
				
				cout<<h<<":"<<m<<":"<<s<<" "<<daynight<<endl;
				sleep(1);
			}
			
		}
		
		else if(daynight=="PM"){
			
			int l = 5;
			
			for(int i = 0; i < l; i++, l++){
				
				s++;
				
				if(s==60){
					
					s = 1;
					m++;
					
				}
				
				if(m==60){
					
					m = 0;
					h++;
					
				}
				
				if(h==12 && m == 0 && s == 1){
					
					NewDate();
					
				}
									
				cout<<h<<":"<<m<<":"<<s<<" "<<daynight<<endl;
				sleep(1);
			}
			
			
		}
		
	}
		
		void display(){
			
			cout<<"Date: "<<d<<"/"<<month<<"/"<<y<<endl<<endl;;
			
		}	
	
};

int main(){
	
	DateAndTime OBJ1(31, 12, 2018, 11, 59, 58, "AM");
	OBJ1.display();
	OBJ1.Tick();
	
	
	return 0;
}
