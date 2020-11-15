#include<iostream>
#include<cmath>
using namespace std;

class Points{
	
	private:
		
		int x;
		int y;
		
		
	public:	
	
		Points(){
			
			x = y = 0;
			
		}
		
		
		Points(int a, int b){
			
			x = a;
			y = b;
			
		}
		
		void setX(int a){
			
			x = a;
			
		}
		
		int getX(){
			
			return x;
			
		}	
		
		void setY(int b){
			
			y = b;
			
		}
		
		int getY(){
			
			return y;
			
		}	
		
		void display(){
			
			cout<<"Coordinates of Rectangle: ("<<x<<" , "<<y<<")"<<endl;
			
		}
};

class Rectangle{
	
	private:
		
		Points p1;
		Points p2;
		Points p3;
		Points p4;
		
		int Square(int a){
			
			return a * a;
			
		}
	
	public:
		
		Rectangle(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4):p1(x1, y1), p2(x2, y2), p3(x3, y3), p4(x4, y4){
			
			
		}
		
		int getLength(){
			
			int distance = sqrt(Square(p2.getX() - p1.getX()) + Square(p2.getY() - p1.getY()));
			
			if(distance > 25){
				
				distance = 25;
				
			}
			
			return distance;
			
		}
		
		int getWidth(){
			
			int distance = sqrt(Square(p1.getX() - p3.getX()) + Square(p1.getY() - p3.getY()));
			
			if(distance > 25){
				
				distance = 25;
				
			}
			
			return distance;

		}
		
		int Area(){
			
			return getLength() * getWidth();
			
		}
		
		int Perimeter(){
			
			return 2 * (getLength() + getWidth());
			
		}
		
		void display(){
			
			cout<<"Length of Rectangle: "<<getLength()<<endl;
			cout<<"Width of Rectangle: "<<getWidth()<<endl;
			cout<<"Area of Rectangle: "<<Area()<<endl;
			cout<<"Perimeter: "<<Perimeter()<<endl;

			
		}
		
		void DrawRectangle(){
			
			
			for(int i = 0; i < getLength(); i++){
				
				for(int j = 0; j < getWidth(); j++){
					
					if(i==0 || i==getLength() - 1 || j==0 || j==getWidth() - 1 ){
						
						cout<<"*";
						
					}
					
					else
					
						cout<<" ";
					
				}
				
				cout<<endl;
				
			}
			
		}
		
		
};

int main(){
	
	Rectangle R1(10, 100, 100, 100, 10, 10, 100, 10);
	R1.display();
	R1.DrawRectangle();
	
}

