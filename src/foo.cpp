//
//   $Id:$
//   $Change:$
//   $Date:$
//
//   Description:
//

#include "foo.h"
#include "version.h"

namespace foo
{
   bool initialiseLib()
   {
      return true;
   }

   int computeFooFactor(int a,
                        int b)
   {
      return (a * 15) + (b * 9);
   }

   int getMajorVersion()
   {
      return LIBFOO_VERSION_MAJOR;
   }
}
