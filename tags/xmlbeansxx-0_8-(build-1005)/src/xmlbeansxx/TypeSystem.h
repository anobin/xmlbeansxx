/*
    Copyright 2004-2005 TouK s.c.
    
    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License. */


#ifndef _XMLBEANSXX_TYPESYSTEM_H_
#define _XMLBEANSXX_TYPESYSTEM_H_

#include "BoostAssert.h"
#include <string>
#include <map>
#include <boost/shared_ptr.hpp>
#include "macros.h"
#include "SchemaType.h"



namespace xmlbeansxx {

class TypeSystem {
    STATIC_LOGGER_PTR(log);
    
    std::map<QName,const SchemaType *> typeCreators;
    std::map<QName,const SchemaType *> documentTypeCreators;


public:

    TypeSystem(){};

    XmlObjectPtr createDocumentByName(const QName &typeName);    
    XmlObjectPtr createByName(const QName &typeName);
    XmlObjectPtr createArrayByName(const QName &typeName);
    
    void addDocumentType(const SchemaType *st);
    void addType(const SchemaType *st);
};

TypeSystem *globalTypeSystem();

}

#endif//_XMLBEANSXX_TYPESYSTEM_H_