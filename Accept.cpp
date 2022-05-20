#include <iostream>

int main() {
  class Accept{
	private:
		int Accept_id;
		int Accept_role;
		std ::string Accept_title;
		std ::string Accept_description;
	public:
		void addAccept();
		void editAccept();
		void deleteAccept();
		void searchRequestedAccept();
    }


Accept::Accept() {
	
}
Accept::Accept(int aID,int aRole,std ::string aTit,std ::string aDes )
{
	Accept_id = aID;
	Accept_role = aRole;
	Accept_title = aTit;
	Accept_description = aDes;
}
void Accept::addAccept(){
	
}

void Accept::deleteAccept(){
	
}

void displayAccept(){
	
}
Accept::~Accept(){
	
}}
