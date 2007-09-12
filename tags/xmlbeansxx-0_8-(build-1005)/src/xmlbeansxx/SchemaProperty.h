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


#ifndef _XMLBEANSXX_SCHEMAPROPERTY_H_
#define _XMLBEANSXX_SCHEMAPROPERTY_H_

#include <typeinfo>
#include "macros.h"
#include "NullPtr.h"
#include <string>

namespace xmlbeansxx {
    
class SchemaProperty;
DECLARE_PTR(SchemaProperty,SchemaPropertyPtr,constSchemaPropertyPtr)
//typedef SchemaProperty*  SchemaPropertyPtr;

typedef boost::shared_ptr<std::string> StringPtr;
class SchemaType;

class SchemaProperty {
public:
    int order;
    const SchemaType *schemaType;
    StringPtr singletonDefault;

    SchemaProperty(int order,const SchemaType *type, StringPtr singletonDefault);
};

}

#endif//_XMLBEANSXX_SCHEMAPROPERTY_H_
