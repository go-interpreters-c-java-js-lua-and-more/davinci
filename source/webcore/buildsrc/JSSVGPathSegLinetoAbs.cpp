/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#include "config.h"


#if ENABLE(SVG)

#include "Document.h"
#include "Frame.h"
#include "SVGDocumentExtensions.h"
#include "SVGElement.h"
#include "SVGAnimatedTemplate.h"
#include "JSSVGPathSegLinetoAbs.h"

#include <wtf/GetPtr.h>

#include "SVGPathSegLineto.h"

using namespace KJS;

namespace WebCore {

/* Hash table */

static const HashEntry JSSVGPathSegLinetoAbsTableEntries[] =
{
    { "y", JSSVGPathSegLinetoAbs::YAttrNum, DontDelete, 0, 0 },
    { "x", JSSVGPathSegLinetoAbs::XAttrNum, DontDelete, 0, 0 }
};

static const HashTable JSSVGPathSegLinetoAbsTable = 
{
    2, 2, JSSVGPathSegLinetoAbsTableEntries, 2
};

/* Hash table for prototype */

static const HashEntry JSSVGPathSegLinetoAbsPrototypeTableEntries[] =
{
    { 0, 0, 0, 0, 0 }
};

static const HashTable JSSVGPathSegLinetoAbsPrototypeTable = 
{
    2, 1, JSSVGPathSegLinetoAbsPrototypeTableEntries, 1
};

const ClassInfo JSSVGPathSegLinetoAbsPrototype::info = { "SVGPathSegLinetoAbsPrototype", 0, &JSSVGPathSegLinetoAbsPrototypeTable, 0 };

JSObject* JSSVGPathSegLinetoAbsPrototype::self(ExecState* exec)
{
    return KJS::cacheGlobalObject<JSSVGPathSegLinetoAbsPrototype>(exec, "[[JSSVGPathSegLinetoAbs.prototype]]");
}

const ClassInfo JSSVGPathSegLinetoAbs::info = { "SVGPathSegLinetoAbs", &JSSVGPathSeg::info, &JSSVGPathSegLinetoAbsTable, 0 };

JSSVGPathSegLinetoAbs::JSSVGPathSegLinetoAbs(ExecState* exec, SVGPathSegLinetoAbs* impl, SVGElement* context)
    : JSSVGPathSeg(exec, impl, context)
{
    setPrototype(JSSVGPathSegLinetoAbsPrototype::self(exec));
}

bool JSSVGPathSegLinetoAbs::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGPathSegLinetoAbs, JSSVGPathSeg>(exec, &JSSVGPathSegLinetoAbsTable, this, propertyName, slot);
}

JSValue* JSSVGPathSegLinetoAbs::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case XAttrNum: {
        SVGPathSegLinetoAbs* imp = static_cast<SVGPathSegLinetoAbs*>(impl());

        return jsNumber(imp->x());
    }
    case YAttrNum: {
        SVGPathSegLinetoAbs* imp = static_cast<SVGPathSegLinetoAbs*>(impl());

        return jsNumber(imp->y());
    }
    }
    return 0;
}

void JSSVGPathSegLinetoAbs::put(ExecState* exec, const Identifier& propertyName, JSValue* value, int attr)
{
    lookupPut<JSSVGPathSegLinetoAbs, JSSVGPathSeg>(exec, propertyName, value, attr, &JSSVGPathSegLinetoAbsTable, this);
}

void JSSVGPathSegLinetoAbs::putValueProperty(ExecState* exec, int token, JSValue* value, int /*attr*/)
{
    switch (token) {
    case XAttrNum: {
        SVGPathSegLinetoAbs* imp = static_cast<SVGPathSegLinetoAbs*>(impl());

        imp->setX(value->toFloat(exec));
        break;
    }
    case YAttrNum: {
        SVGPathSegLinetoAbs* imp = static_cast<SVGPathSegLinetoAbs*>(impl());

        imp->setY(value->toFloat(exec));
        break;
    }
    }
    if (context())
        context()->notifyAttributeChange();
}


}

#endif // ENABLE(SVG)
