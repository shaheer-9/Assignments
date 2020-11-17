#include<iostream>
#include<string>
using namespace std;

class HugeInteger{
	
	private:
		
		const int size = 40;
		int *p;
		
		
	public:
		
		HugeInteger(){
			
			p = new int[size];
			INIT();
				
		}
		
		HugeInteger(string array2){
			
			HugeInteger::p = new int[size];
			INIT();
			int s = array2.length();
			int index = size - s;
			
			for(int i = index, j = 0; i < size; i++, j++){
				
				p[i] = array2[j] - 48;
				
			}
			
		}
		
		
			
		void INIT(){
			
			for(int i = 0; i < size; i++){
				
				p[i] = 0;
				
			}
			
		}
		
		void display(){
			
			for(int i = 0; i < size; i++){
				
				cout<<p[i];
				
			}			
		}
		
		HugeInteger Add(HugeInteger h1){
			
			
				int length, quotient;
				HugeInteger result;
			
				if(sizeof(p) >= sizeof(h1.p)){
							
					length = sizeof(p);
							
				}
						
				else{
							
					 length = sizeof(h1.p);
							
				}
						
				for(int i = size - 1; i >= size - length; i--){
							
					if(i==size-1){
								
						quotient = (p[i] + h1.p[i]) % 10;
						result.p[i] = quotient;
								
					}
							
					else{
								
						quotient = (p[i] + h1.p[i]) % 10;
						int carry = (p[i + 1] + h1.p[i + 1]) / 10;
						result.p[i] = quotient + carry;
								
					}
							
				}
						
			return result;
			
		}
		
		
		
		
		HugeInteger Subtract(HugeInteger h1){
			
			
				int length;
				HugeInteger result;
			
				if(sizeof(p) >= sizeof(h1.p)){
							
					length = sizeof(p);
							
				}
						
				else{
							
					 length = sizeof(h1.p);
							
				}
						
				for(int i = size - 1; i >= size - length; i--){
							
					result.p[i] = p[i] - h1.p[i];
					
							
				}
						
			return result;
			
		}
		
		
};


int main(){
	
	HugeInteger H1("1234");
	H1.display();
	
	cout<<endl<<endl;
	
	HugeInteger H2("12");
	H2.display();
	
	cout<<endl<<endl;
	
	HugeInteger H3 = H1.Add(H2);
	H3.display();
	
	cout<<endl<<endl;
	
	HugeInteger H4 = H1.Subtract(H2);
	H4.display();
	
	
	return 0;
}
