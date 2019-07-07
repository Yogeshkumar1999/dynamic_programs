#include <iostream>
using namespace std;


//usr defined Excemption
class Excemption: public runtime_error{
  public:
  Excemption()
  :runtime_error("addidtion_error")
  {
      
  }
};

int addition(int a, int b){
    if(b == 0){
        throw Excemption();
    }
}
int division(int a, int b){
    
    try{
        addition(a, b);
    }
    
    catch(Excemption &r){
        cout<<10/0;
    }
    
   /* if(b == 0){
        throw runtime_error("Math:error");
    }
    cout<<"managal"<<endl;*/
}

int main() {
	int a = 10;
	int b = 0;
	try{
	division(a, b);
	cout<<"after try"<<endl;
	}
	
	catch(runtime_error &e){
	    cout<<"excemption occured"<<endl;
	    cout<<e.what();
	}
	return 0;
}