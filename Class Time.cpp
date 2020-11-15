#include<iostream>
#include<unistd.h>
using namespace std;

class Time{
	
	private:
		
		int h, m, s;
		string daynight;
		
		
		
	public:
		
		Time(){
			
			h = m = s = 0;
			daynight = " ";
			
		}
		
		Time(int h, int m, int s, string daynight){
			
			this->h = h;
			this->m = m;
			this->s = s;
			this->daynight = daynight;
			
		}
		
		
		void setHour(int h){
			
			if(h>12 || h==0){
				
				cout<<"Invalid Hour Value"<<endl;
				
			}
			
			else{
				
				this->h = h;
				
			}
			
		}
			
			
		void setMinute(int m){
			
			if(m>59){
				
				cout<<"Invalid Minute Value"<<endl;
				
			}
			
			else{
				
				this->m = m;
				
			}
			
		}
			
			
		void setSecond(int s){
			
			if(s>60){
				
				cout<<"Invalid Second Value"<<endl;
				
			}
			
			else{
				
				this->s = s;
				
			}
			
			
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
					
					daynight="AM";
					
				}
									
				cout<<h<<":"<<m<<":"<<s<<" "<<daynight<<endl;
				sleep(1);
			}
			
			
		}
		
	}				
			
	
	
};

int main(){
	
	Time T1(11, 59, 55, "PM");
	T1.Tick();
	
	
	return 0;
}
