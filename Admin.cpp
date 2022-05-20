#include <iostream>

int main() {
  class Admin{
	private:
		int Admin_id;
		std ::string Admin_email;
		std ::string Admin_address;
		std ::string Admin_name;
		std ::string Admin_password;
		std ::string Admin_dob;
		
		
	public:
		void addAdmin();
		void editAdmin();
		void deleteAdmin();
		void searchAdmin();
		
}

Admin::Admin(){
	
}
Admin::Admin(int aID,std ::string aemail,std ::string aadres,std ::string aname,std ::string aPass,std ::string adob  )
{
  Admin_id = aID;
  Admin_email=  aemail;
  Admin_address = aadres;
  Admin_name = aname;
  Admin_password = aPass;
  Admin_dob = adob;
 
}

void Admin::addAdmin(){
	
}

void Admin::editAdmin()(){
	
}
void Admin::deleteAdmin(){
	
}
void Admin::searchAdmin(){
	
}
Admin::~Admin(){}
	
}

