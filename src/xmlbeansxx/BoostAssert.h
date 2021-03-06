/*
    Copyright 2004-2008 TouK sp. z o.o. s.k.a.
    
    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License. */


#ifndef _XMLBEANSXX_BOOST_ASSERT_H_
#define _XMLBEANSXX_BOOST_ASSERT_H_

#define BOOST_ENABLE_ASSERT_HANDLER
#include <boost/assert.hpp>

namespace boost {
    void assertion_failed(char const * expr, char const * function, char const * file, long line);
}

#endif //_XMLBEANSXX_BOOST_ASSERT_H_

