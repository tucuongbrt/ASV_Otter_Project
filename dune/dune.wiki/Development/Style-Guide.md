# Files and Directories

File names are made of a base name and an optional period and
suffix. The base name should be a noun, in mixed case with the first
letter of each internal word capitalized. It should also reflect the
name of the class or module implemented. The following suffixes are
mandatory:

* C source file names must end in .c

* C included header file names must end in .h

* C++ source file names must end in .cpp

* C++ included header file names must end in .hpp

* Bourne/BASH shell scripts must end in .sh

* CMake scripts, with the exception of CMakeLists.txt, must end in .cmake

# Source Code

The language of choice for writing code and documentation is English
and you should not use other languages.

Do not use "underhanded names" (ones that begin with an underscore),
this convention is reserved to the compiler and standard library
implementations.

Class and structures names should be nouns, in mixed case with the
first letter of each internal word capitalized. Try to keep your class
names simple and descriptive. Use whole words. Avoid acronyms and
abbreviations, unless the abbreviation is much more widely used than
the long form, such as UDP or CAN. (eg UDPSocket).

Functions and member functions should be verbs, in mixed case with the
first letter lowercase and the first letter of each internal word
capitalized. (eg dumpRegisters).

Variable names should be short yet meaningful. All characters should
be lowercase with underscores separating words (eg. dry_run). The
choice of a variable name should be mnemonic, that is, designed to
indicate to the casual observer the intent of its use. One-character
variable names should be avoided except for temporary "throwaway"
variables. Common names for temporary variables are i, j, k, m, and n
for integers; c, d, and e for characters.

Member variables should be prefixed with "m_" (eg. m_handle) and
constant variables should be prefixed with "c_" (eg. c_max_size). The
names of preprocessor constants and macros should be all uppercase
with words separated by underscores (eg. MAX_BUFFER_SIZE). Indentation
is performed using the ASCII space character and never with ASCII
horizontal tabs. Each source file must start with the following
preamble, with one author per line and an optional sentence describing
his/her work in the file. The blank line after the comment box is
mandatory.

```c++
//***************************************************************************
// Copyright 2007-2013 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Universidade do Porto. For licensing   *
// terms, conditions, and further information contact lsts@fe.up.pt.        *
//                                                                          *
// European Union Public Licence - EUPL v.1.1 Usage                         *
// Alternatively, this file may be used under the terms of the EUPL,        *
// Version 1.1 only (the "Licence"), appearing in the file LICENCE.md       *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://www.lsts.pt/dune/licence.                                        *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
```

## C++ Header Files

Header files should be self-sufficient. Moreover ensure that each
header file is compilable standalone, by having it include any headers
its contents depend upon. Use the script programs/scripts/dune-maintainer-checks.py
to check if the headers available in the repository have this
property.

Always write conditional inclusion guards, and remember that the
guard's macro name should be unique among all source files and reflect
it's parent directory and namespace. The guard's macro name shall end
with \_HPP_INCLUDED_. Header guards do not count for the indentation of
preprocessor statements. For example the contents of the header file
src/DUNE/Hardware/DeviceDriver.hpp should have the following layout:

```c++
//***************************************************************************
// Copyright 2007-2013 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Universidade do Porto. For licensing   *
// terms, conditions, and further information contact lsts@fe.up.pt.        *
//                                                                          *
// European Union Public Licence - EUPL v.1.1 Usage                         *
// Alternatively, this file may be used under the terms of the EUPL,        *
// Version 1.1 only (the "Licence"), appearing in the file LICENCE.md       *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://www.lsts.pt/dune/licence.                                        *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef DUNE_HARDWARE_DEVICE_DRIVER_HPP_INCLUDED_
#define DUNE_HARDWARE_DEVICE_DRIVER_HPP_INCLUDED_

...

#endif
```

## Formatting Source Code

Pointer/reference declarations:

```c++
char* pointer;
char& reference;
void (*function_pointer)(void);
void (Type:: *pointer_to_member_function)(void);
```

Type definitions:

```c++
typedef char* str_t;
typedef void (function_t)(void);
typedef void (Type:: *member_function_t)(void);
```

Array initialization:

```c++
char* members[] = {"one", "two"};
```

Multiline array initialization:

```c++
char* members[] =
{
  "one",
  "two",
  "three"
};
```

C-Style casts:

```c++
n = (char*)var;
x = (char*)&y;
```

Function declaration:

```c++
static char*
function(char* s1, char* s2);
```

Function definition:

```c++
char*
function(char* s1, char* s2)
{
  function-body;
}
```

Function call:

```c++
n = function(str0, str1);
```

Single line if statement:

```c++
if (if-condition)
  if-line;
else if (else-if-condition)
  else-if-line;
else
  else-line;
```

Multiline if statement:

```c++
if (condition)
{
  if-block;
}
else
{
  else-block;
}
```

Single line while statement:

```c++
while (condition)
  while-line;
```

Multiline while statement:

```c++
while (condition)
{
  while-block;
}
```

Single line for statement:

```c++
for (initialization; stop-condition; increment)
  for-line;
```

Multiline for statement:

```c++
for (initialization; stop-condition; increment)
{
  for-block;
}
```

Single line do while statement:

```c++
do
  do-while-line;
while (condition);
```

Multiline line do while statement:

```c++
do
{
  do-while-line;
}
while (condition);
```

Try/catch statement:

```c++
try
{
  try-block;
}
catch (variable)
{
  catch-block;
}
```

Switch statement:

```c++
switch (variable)
{
  case A:
    a-statement;
    break;
  case B:
    b-statement;
    break;
  default:
    default-statement;
    break;
}
```

Class declaration:

```c++
class Example
{
public:
  public-block;

protected:
  public-block;

private:
  public-block;
};
```

Namespace declaration:

```c++
namespace DUNE
{
  namespace-contents;
}
```

Preprocessor conditional statement:

```c++
#if defined(MACRO)
#  define MACRO_DEF
#else
#  define MACRO_UND
#endif
```

Preprocessor header inclusion:

```c++
// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/Concurrency/Initializer.hpp>

// POSIX headers.
#if defined(DUNE_SYS_HAS_PTHREAD_H)
#  include <pthread.h>
#endif
```
