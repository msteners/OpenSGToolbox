/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact:  David Kabala (djkabala@gmail.com)                             *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 * WITHOUT ANY WARRANTY; without even the implied warranty of                *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU         *
 * Library General Public License for more details.                          *
 *                                                                           *
 * You should have received a copy of the GNU Library General Public         *
 * License along with this library; if not, write to the Free Software       *
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.                 *
 *                                                                           *
\*---------------------------------------------------------------------------*/
#ifndef _OPENSG_TOOLBOX_FIELD_CONATINER_GATHER_UTILS_H_
#define _OPENSG_TOOLBOX_FIELD_CONATINER_GATHER_UTILS_H_

#include "OSGConfig.h"
#include "OSGTBFileIODef.h"

#include "OSGFieldContainer.h"
#include "OSGEventProducerType.h"
#include <set>
#include <vector>

OSG_BEGIN_NAMESPACE

std::set<FieldContainerUnrecPtr> OSG_TBFILEIO_DLLMAPPING getAllDependantFCs(const std::set<FieldContainerUnrecPtr>& Containers, const std::set<FieldContainerUnrecPtr>& IgnoreContainers, const std::vector<UInt32>& IgnoreTypes);

OSG_END_NAMESPACE

#endif


