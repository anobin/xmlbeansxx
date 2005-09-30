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


#include "XmlParser.h"
#include "XercesParser.h"

namespace xmlbeansxx {
    
XmlParser XmlParser::create() {
    return XmlParser(boost::shared_ptr<XercesParser_I>(new XercesParser_I()));
}

XmlParser XmlParser::create(const XmlOptions &opts) {
    return XmlParser(boost::shared_ptr<XercesParser_I>(new XercesParser_I(opts)));
}
}

