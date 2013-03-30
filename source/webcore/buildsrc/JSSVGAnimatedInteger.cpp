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
#include "JSSVGAnimatedInteger.h"

#include <wtf/GetPtr.h>


using namespace KJS;

namespace WebCore {

/* Hash table */

static const HashEntry JSSVGAnimatedIntegerTableEntries[] =
{
    { "baseVal", JSSVGAnimatedInteger::BaseValAttrNum, DontDelete, 0, 0 },
    { "animVal", JSSVGAnimatedInteger::AnimValAttrNum, DontDelete|ReadOnly, 0, 0 }
};

static const HashTable JSSVGAnimatedIntegerTable = 
{
    2, 2, JSSVGAnimatedIntegerTableEntries, 2
};

/* Hash table for prototype */

static const HashEntry JSSVGAnimatedIntegerPrototypeTableEntries[] =
{
    { 0, 0, 0, 0, 0 }
};

static const HashTable JSSVGAnimatedIntegerPrototypeTable = 
{
    2, 1, JSSVGAnimatedIntegerPrototypeTableEntries, 1
};

const ClassInfo JSSVGAnimatedIntegerPrototype::info = { "SVGAnimatedIntegerPrototype", 0, &JSSVGAnimatedIntegerPrototypeTable, 0 };

JSObject* JSSVGAnimatedIntegerPrototype::self(ExecState* exec)
{
    return KJS::cacheGlobalObject<JSSVGAnimatedIntegerPrototype>(exec, "[[JSSVGAnimatedInteger.prototype]]");
}

const ClassInfo JSSVGAnimatedInteger::info = { "SVGAnimatedInteger", 0, &JSSVGAnimatedIntegerTable, 0 };

JSSVGAnimatedInteger::JSSVGAnimatedInteger(ExecState* exec, SVGAnimatedInteger* impl, SVGElement* context)
    : m_context(context)
    , m_impl(impl)
{
    setPrototype(JSSVGAnimatedIntegerPrototype::self(exec));
}

JSSVGAnimatedInteger::~JSSVGAnimatedInteger()
{
    ScriptInterpreter::forgetDOMObject(m_impl.get());

}

bool JSSVGAnimatedInteger::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGAnimatedInteger, KJS::DOMObject>(exec, &JSSVGAnimatedIntegerTable, this, propertyName, slot);
}

JSValue* JSSVGAnimatedInteger::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case BaseValAttrNum: {
        SVGAnimatedInteger* imp = static_cast<SVGAnimatedInteger*>(impl());

        return jsNumber(imp->baseVal());
    }
    case AnimValAttrNum: {
        SVGAnimatedInteger* imp = static_cast<SVGAnimatedInteger*>(impl());

        return jsNumber(imp->animVal());
    }
    }
    return 0;
}

void JSSVGAnimatedInteger::put(ExecState* exec, const Identifier& propertyName, JSValue* value, int attr)
{
    lookupPut<JSSVGAnimatedInteger, KJS::DOMObject>(exec, propertyName, value, attr, &JSSVGAnimatedIntegerTable, this);
}

void JSSVGAnimatedInteger::putValueProperty(ExecState* exec, int token, JSValue* value, int /*attr*/)
{
    switch (token) {
    case BaseValAttrNum: {
        SVGAnimatedInteger* imp = static_cast<SVGAnimatedInteger*>(impl());

        imp->setBaseVal(value->toInt32(exec));
        break;
    }
    }
    if (context())
        context()->notifyAttributeChange();
}

KJS::JSValue* toJS(KJS::ExecState* exec, SVGAnimatedInteger* obj, SVGElement* context)
{
    return KJS::cacheSVGDOMObject<SVGAnimatedInteger, JSSVGAnimatedInteger>(exec, obj, context);
}
SVGAnimatedInteger* toSVGAnimatedInteger(KJS::JSValue* val)
{
    return val->isObject(&JSSVGAnimatedInteger::info) ? static_cast<JSSVGAnimatedInteger*>(val)->impl() : 0;
}

}

#endif // ENABLE(SVG)
