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


#ifndef _XMLBEANSXX_XMLCONTEXT_H_
#define _XMLBEANSXX_XMLCONTEXT_H_

#include "BoostAssert.h"
#include <boost/shared_ptr.hpp>
#include "String.h"
#include "Map.h"
#include "Stack.h"
#include "StoreString.h"

namespace xmlbeansxx {

/**
 * Provides context of xml namespace links. 
 */
class XmlContext {
private:
    Map<String, StoreString, StoreString::Hash>::type nsLinks;
    Stack<std::pair<String, StoreString> >::type restoreLinks;
    Stack<int>::type rememberedPositions;

public:
    /** @return remembered shortcut mapping to namespace. */
    StoreString getLink(String shortcut);
    /** Adds new shortcut to a namespace ns. */
    void setLink(String shortcut, StoreString ns);

    /** Restores state of links to last remembered posittion. */
    void restore();
    
    /** Remembers state of links. */
    void remember();
};
}

#endif//_XMLBEANSXX_XMLCONTEXT_H_
