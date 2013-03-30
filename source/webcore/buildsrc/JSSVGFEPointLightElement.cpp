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


#if ENABLE(SVG) && ENABLE(SVG_EXPERIMENTAL_FEATURES)

#include "Document.h"
#include "Frame.h"
#include "SVGDocumentExtensions.h"
#include "SVGElement.h"
#include "SVGAnimatedTemplate.h"
#include "JSSVGFEPointLightElement.h"

#include <wtf/GetPtr.h>

#include "JSSVGAnimatedNumber.h"
#include "SVGFEPointLightElement.h"

using namespace KJS;

namespace WebCore {

/* Hash table */

static const HashEntry JSSVGFEPointLightElementTableEntries[] =
{
    { "z", JSSVGFEPointLightElement::ZAttrNum, DontDelete|ReadOnly, 0, 0 },
    { "y", JSSVGFEPointLightElement::YAttrNum, DontDelete|ReadOnly, 0, 0 },
    { "x", JSSVGFEPointLightElement::XAttrNum, DontDelete|ReadOnly, 0, 0 }
};

static const HashTable JSSVGFEPointLightElementTable = 
{
    2, 3, JSSVGFEPointLightElementTableEntries, 3
};

/* Hash table for prototype */

static const HashEntry JSSVGFEPointLightElementPrototypeTableEntries[] =
{
    { 0, 0, 0, 0, 0 }
};

static const HashTable JSSVGFEPointLightElementPrototypeTable = 
{
    2, 1, JSSVGFEPointLightElementPrototypeTableEntries, 1
};

const ClassInfo JSSVGFEPointLightElementPrototype::info = { "SVGFEPointLightElementPrototype", 0, &JSSVGFEPointLightElementPrototypeTable, 0 };

JSObject* JSSVGFEPointLightElementPrototype::self(ExecState* exec)
{
    return KJS::cacheGlobalObject<JSSVGFEPointLightElementPrototype>(exec, "[[JSSVGFEPointLightElement.prototype]]");
}

const ClassInfo JSSVGFEPointLightElement::info = { "SVGFEPointLightElement", &JSSVGElement::info, &JSSVGFEPointLightElementTable, 0 };

JSSVGFEPointLightElement::JSSVGFEPointLightElement(ExecState* exec, SVGFEPointLightElement* impl)
    : JSSVGElement(exec, impl)
{
    setPrototype(JSSVGFEPointLightElementPrototype::self(exec));
}

bool JSSVGFEPointLightElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGFEPointLightElement, JSSVGElement>(exec, &JSSVGFEPointLightElementTable, this, propertyName, slot);
}

JSValue* JSSVGFEPointLightElement::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case XAttrNum: {
        SVGFEPointLightElement* imp = static_cast<SVGFEPointLightElement*>(impl());

        RefPtr<SVGAnimatedNumber> obj = imp->xAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case YAttrNum: {
        SVGFEPointLightElement* imp = static_cast<SVGFEPointLightElement*>(impl());

        RefPtr<SVGAnimatedNumber> obj = imp->yAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case ZAttrNum: {
        SVGFEPointLightElement* imp = static_cast<SVGFEPointLightElement*>(impl());

        RefPtr<SVGAnimatedNumber> obj = imp->zAnimated();
        return toJS(exec, obj.get(), imp);
    }
    }
    return 0;
}


}

#endif // ENABLE(SVG) && ENABLE(SVG_EXPERIMENTAL_FEATURES)
