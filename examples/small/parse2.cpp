#include "c.h"
#include <iostream>
#include <fstream>
#include <log4cxx/logger.h>
#include <log4cxx/basicconfigurator.h>

using namespace std;
using namespace xmlbeansxx;
using namespace com::p4::mind::mytest;

int main() {
    //log4cxx::BasicConfigurator::configure();
    //typed document parsing (using classes generated from c.xsd)
    try {
        XmlParser p;
        //boost::shared_ptr<ContentDocument> root(new ContentDocument());
        fstream in("c.xml",ios::in);
        ContentDocumentPtr root(ContentDocument::Factory::parse(in));
        cout<<"firstname:"<<root->getContent()->getEmployee()->getFirstname()<<"\n";
        cout<<"age:"<<root->getContent()->getEmployee()->getAgeAttr()<<"\n";	
        cout<<"firstname as xml:\n"<<root->getContent()->getEmployee()->xgetFirstname()->toString()<<"\n";
		cout<<"serializing:\n";
        root->serialize(cout);
		cout<<"\n";
    } catch (BeansException ex) {
        cout<<"BeansException: "<<ex.getMessage()<<"\n";
    }
    return 0;
}
