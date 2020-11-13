#include<iostream>
using namespace std;

class Order;

class Item{
	
	private:
		
		string name;
		float price;
		string description;
		string type;
		Order *O1;
				
	public:
		
		Item(){
			
			name = " ";
			price = 0;
			description = " ";
			type = " ";
			O1 = NULL;
				
		}
		
		Item(string &name, float price, string &description, string &type){
			
			this->name = name;
			this->price = price;
			this->description = description;
			this->type = type;
			this->O1 = O1;
			
		}
		
		void setName(string &name){
			
			this->name = name;
			
		}
		
		string &getName(){
			
			return name;
			
		}
		
		void setPrice(float price){
			
			this->price = price;
			
		}
		
		float getPrice(){
			
			return price;
			
		}
		
		void setDescription(string &description){
			
			this->description = description;
			
		}
		
		string &getDescription(){
			
			return description;
			
		}
		
		void setType(string &type){
			
			this->type = type;
			
		}
		
		string &getType(){
			
			return type;
			
		}
		
		void display(){
			
			cout<<"Item Name: "<<name<<endl;
			cout<<"Item Price: "<<price<<endl;
			cout<<"Item Description: "<<description<<endl;
			cout<<"Item Type: "<<type<<endl;
			
		}	
		
	
};

class OrderDetail{
	
	private:
		int id;
		int orderId;
		int ItemId;
		int Quantity;
		Order *O1;
	
	public:
		
		OrderDetail(){
			
			id = orderId = ItemId = Quantity = 0; 
			O1 = NULL;
			
		} 
		
		OrderDetail(int id, int orderId, int ItemId, int Quantity){
			
			this->id = id;
			this->orderId = orderId;
			this->ItemId = ItemId;
			this->Quantity = Quantity;
			this->O1 = O1;
			
		}
		
		void setId(int id){
			
			this->id = id;
			
		}
		
		int getId() const{
		
			return id;
		
		}
		
		void setOrderId(int orderId){
			
			this->orderId = orderId;
			
		}
		
		int getOrderId() const{
		
			return orderId;
		
		}
		
		void setItemId(int ItemId){
			
			this->ItemId = ItemId;
			
		}
		
		int getItemId() const{
		
			return ItemId;
		
		}
		
		void setQuantity(int Quantity){
			
			this->Quantity = Quantity;
			
		}
		
		int getQuantity() const{
			
			return Quantity;
			
		}
		
		void setOrder(Order *O1){
			
			this->O1 = O1;
			
		}
		
		Order *getOrder() const{
			
			return O1;
			
		}
		
		
		void display(){
			
			cout<<"ID: "<<id<<", Order ID: "<<orderId<<", Item ID: "<<ItemId<<", Quantity: "<<Quantity<<endl<<endl;
			
		}
	
};

class Order{
	
	private:
		string Description;
		string CreatedAt;
		string UpdatedAt;
		string UserName;
		string PickUpTime;
		string PickUpFrom;
		string DeliveryTime;
		string DeliverTo;
		string Status;
		int size;
		OrderDetail **orderDetail;
		Item **item;
		
	public:
	
		Order(){
			
			Description = CreatedAt = UpdatedAt = UserName = PickUpTime = PickUpFrom = DeliveryTime = DeliverTo = Status = " ";
			size = 4;
			orderDetail = new OrderDetail*[size];
			INIT();
			item = new Item*[size];
			INIT2();
			
			
		}
		
		void INIT(){
			
			for(int i = 0; i < size; i++){
				
				orderDetail[i] = new OrderDetail();
				
			}
			
		}
		
		void INIT2(){
			
			for(int i = 0; i < size; i++){
				
				item[i] = new Item();
				
			}
			
		}
		
		Order(string Description, string CreatedAt, string UpdatedAt, string UserName, string PickUpTime, string PickUpFrom, string DeliveryTime, string DeliverTo, string Status){
			
			this->Description = Description;
			this->CreatedAt = CreatedAt;
			this->UpdatedAt = UpdatedAt;
			this->UserName = UserName;
			this->PickUpTime = PickUpTime;
			this->PickUpFrom = PickUpFrom;
			this->DeliveryTime = DeliveryTime;
			this->DeliverTo = DeliverTo;
			this->Status = Status;
			size = 4;
			orderDetail = new OrderDetail*[size];
			INIT();
			item = new Item*[size];
			INIT2();
			
		}
		
		void setDescription(string &Description){
			
			this->Description = Description;
			
		}
		
		string &getDescription(){
			
			return Description;
			
		}
		
		void setCreatedAt(string &CreatedAt){
			
			this->CreatedAt = CreatedAt;
			
		}
		
		string &getCreatedAt(){
			
			return CreatedAt;
			
		}
		
		void setUpdatedAt(string &UpdatedAt){
			
			this->UpdatedAt = UpdatedAt;
			
		}
		
		string &getUpdatedAt(){
			
			return UpdatedAt;
			
		}
		
		void setUserName(string &UserName){
			
			this->UserName = UserName;
			
		}
		
		string &getUserName(){
			
			return UserName;
			
		}
		
		void setPickUpTime(string &PickUpTime){
			
			this->PickUpTime = PickUpTime;
			
		}
		
		string &getPickUpTime(){
			
			return PickUpTime;
			
		}
		
		void setPickUpFrom(string &PickUpFrom){
			
			this->PickUpFrom = PickUpFrom;
			
		}
		
		string &getPickUpFrom(){
			
			return PickUpFrom;
			
		}
		
		void setDeliveryTime(string &DeliveryTime){
			
			this->DeliveryTime = DeliveryTime;
			
		}
		
		string &getDeliveryTime(){
			
			return DeliveryTime;
			
		}
		
		void setDeliverTo(string &DeliverTo){
			
			this->DeliverTo = DeliverTo;
			
		}
		
		string &getDeliverTo(){
			
			return DeliverTo;
			
		}
		
		void setStatus(string &Status){
			
			this->Status = Status;
			
		}
		
		string &getStatus(){
			
			return Status;
			
		}
		
		int getSize(){
			
			return size;
			
		}
		
		OrderDetail **getOrderDetail(){
			
			return orderDetail;
			
		}
		
		Item **getItem(){
			
			return item;
			
		}
		
		void display(){
			
			cout<<"USERNAME: "<<UserName<<endl;
			cout<<"Description: "<<Description<<endl;
			cout<<"Created At: "<<CreatedAt<<endl;
			cout<<"Updated At: "<<UpdatedAt<<endl;
			cout<<"Pick Up Time: "<<PickUpTime<<endl;
			cout<<"Pick Up From: "<<PickUpFrom<<endl;
			cout<<"Delivery Time: "<<DeliveryTime<<endl;
			cout<<"Deliver To: "<<DeliverTo<<endl;
			cout<<"Staus: "<<Status<<endl;
			cout<<endl<<endl;
			
			for(int i = 0; i < size; i++){
				
				item[i]->display();
				orderDetail[i]->display();
				
			}
			
			
		}	
	
};

int main(){
	
	Order Order1("Regular", "11/12/2020", "35 minutes ago", "Majad", "2:00PM", "PostOffice", "2 Days", "Pakistan", "Enroute");
	
	int Order1Id[] = {110, 111, 112, 113};
	
	int Order1OrderId[] = {210, 211, 212, 213};
	
	int Order1ItemId[] = {310, 311, 312, 313};
	
	int Order1Quantity[] = {4, 2, 2, 1};
	
	
	
	string Order1name[] = {"Samsung Galaxy S20", "iPhone11", "Asus Zen Book", "Dolmen Fridge"};
	
	int Order1price[] = {1200, 1350, 2000, 700};
	
	string Order1description[] = {"Electronic", "Electronic", "Electronic", "Appliance"};
	
	string Order1type[] = {"Mobile", "Mobile", "Laptop", "Kitchen Appliance"};
	

	for(int i = 0; i < Order1.getSize(); i++){
		
		Order1.getOrderDetail()[i]->setId(Order1Id[i]);
		
		Order1.getOrderDetail()[i]->setOrderId(Order1OrderId[i]);
		
		Order1.getOrderDetail()[i]->setItemId(Order1ItemId[i]);
		
		Order1.getOrderDetail()[i]->setQuantity(Order1Quantity[i]);
		
	}
	
	
	for(int i = 0; i < Order1.getSize(); i++){
		
		Order1.getItem()[i]->setName(Order1name[i]);
		
		Order1.getItem()[i]->setPrice(Order1price[i]);
		
		Order1.getItem()[i]->setDescription(Order1description[i]);
		
		Order1.getItem()[i]->setType(Order1type[i]);
		
	}
	
	Order1.display();
	

	return 0;
}
		
		
