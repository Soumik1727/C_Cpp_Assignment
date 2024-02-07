#include<iostream>
using namespace std;

class Singleton{
	private :
		static Singleton* instance;
		int data;
		Singleton(){
			
		}
		Singleton(int data){
			this->data=data;
		}
	public :
		static Singleton* createInstance(){
			if(instance == NULL) instance = new Singleton();
			return instance ; 
		}
		void setData(int data){
			this->data = data;
		}
		int getData(){
			return this->data;
		}
};
Singleton* Singleton :: instance = NULL;

int main(){
	Singleton* obj = Singleton::createInstance();
	obj->setData(100);
	cout<< "obj = "<<obj->getData()<<endl;
	
	Singleton* obj1 = Singleton::createInstance();
	cout<< "obj1 = "<<obj1->getData()<<endl;
}