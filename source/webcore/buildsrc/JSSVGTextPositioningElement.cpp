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
#include "JSSVGTextPositioningElement.h"

#include <wtf/GetPtr.h>

#include "JSSVGAnimatedLengthList.h"
#include "JSSVGAnimatedNumberList.h"
#include "SVGTextPositioningElement.h"

using namespace KJS;

namespace WebCore {

/* Hash table */

static const HashEntry JSSVGTextPositioningElementTableEntries[] =
{
    { 0, 0, 0, 0, 0 },
    { "y", JSSVGTextPositioningElement::YAttrNum, DontDelete|ReadOnly, 0, &JSSVGTextPositioningElementTableEntries[5] },
    { 0, 0, 0, 0, 0 },
    { "x", JSSVGTextPositioningElement::XAttrNum, DontDelete|ReadOnly, 0, 0 },
    { "dx", JSSVGTextPositioningElement::DxAttrNum, DontDelete|ReadOnly, 0, &JSSVGTextPositioningElementTableEntries[6] },
    { "dy", JSSVGTextPositioningElement::DyAttrNum, DontDelete|ReadOnly, 0, 0 },
    { "rotate", JSSVGTextPositioningElement::RotateAttrNum, DontDelete|ReadOnly, 0, 0 }
};

static const HashTable JSSVGTextPositioningElementTable = 
{
    2, 7, JSSVGTextPositioningElementTableEntries, 5
};

/* Hash table for prototype */

static const HashEntry JSSVGTextPositioningElementPrototypeTableEntries[] =
{
    { 0, 0, 0, 0, 0 }
};

static const HashTable JSSVGTextPositioningElementPrototypeTable = 
{
    2, 1, JSSVGTextPositioningElementPrototypeTableEntries, 1
};

const ClassInfo JSSVGTextPositioningElementPrototype::info = { "SVGTextPositioningElementPrototype", 0, &JSSVGTextPositioningElementPrototypeTable, 0 };

JSObject* JSSVGTextPositioningElementPrototype::self(ExecState* exec)
{
    return KJS::cacheGlobalObject<JSSVGTextPositioningElementPrototype>(exec, "[[JSSVGTextPositioningElement.prototype]]");
}

const ClassInfo JSSVGTextPositioningElement::info = { "SVGTextPositioningElement", &JSSVGTextContentElement::info, &JSSVGTextPositioningElementTable, 0 };

JSSVGTextPositioningElement::JSSVGTextPositioningElement(ExecState* exec, SVGTextPositioningElement* impl)
    : JSSVGTextContentElement(exec, impl)
{
    setPrototype(JSSVGTextPositioningElementPrototype::self(exec));
}

bool JSSVGTextPositioningElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGTextPositioningElement, JSSVGTextContentElement>(exec, &JSSVGTextPositioningElementTable, this, propertyName, slot);
}

JSValue* JSSVGTextPositioningElement::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case XAttrNum: {
        SVGTextPositioningElement* imp = static_cast<SVGTextPositioningElement*>(impl());

        RefPtr<SVGAnimatedLengthList> obj = imp->xAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case YAttrNum: {
        SVGTextPositioningElement* imp = static_cast<SVGTextPositioningElement*>(impl());

        RefPtr<SVGAnimatedLengthList> obj = imp->yAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case DxAttrNum: {
        SVGTextPositioningElement* imp = static_cast<SVGTextPositioningElement*>(impl());

        RefPtr<SVGAnimatedLengthList> obj = imp->dxAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case DyAttrNum: {
        SVGTextPositioningElement* imp = static_cast<SVGTextPositioningElement*>(impl());

        RefPtr<SVGAnimatedLengthList> obj = imp->dyAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case RotateAttrNum: {
        SVGTextPositioningElement* imp = static_cast<SVGTextPositioningElement*>(impl());

        RefPtr<SVGAnimatedNumberList> obj = imp->rotateAnimated();
        return toJS(exec, obj.get(), imp);
    }
    }
    return 0;
}


}

#endif // ENABLE(SVG)
