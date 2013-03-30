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
#include "JSSVGDescElement.h"

#include <wtf/GetPtr.h>

#include "CSSMutableStyleDeclaration.h"
#include "CSSStyleDeclaration.h"
#include "CSSValue.h"
#include "JSCSSStyleDeclaration.h"
#include "JSCSSValue.h"
#include "JSSVGAnimatedString.h"
#include "PlatformString.h"
#include "SVGDescElement.h"

using namespace KJS;

namespace WebCore {

/* Hash table */

static const HashEntry JSSVGDescElementTableEntries[] =
{
    { "xmllang", JSSVGDescElement::XmllangAttrNum, DontDelete, 0, &JSSVGDescElementTableEntries[4] },
    { 0, 0, 0, 0, 0 },
    { "className", JSSVGDescElement::ClassNameAttrNum, DontDelete|ReadOnly, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "xmlspace", JSSVGDescElement::XmlspaceAttrNum, DontDelete, 0, &JSSVGDescElementTableEntries[5] },
    { "style", JSSVGDescElement::StyleAttrNum, DontDelete|ReadOnly, 0, 0 }
};

static const HashTable JSSVGDescElementTable = 
{
    2, 6, JSSVGDescElementTableEntries, 4
};

/* Hash table for prototype */

static const HashEntry JSSVGDescElementPrototypeTableEntries[] =
{
    { "getPresentationAttribute", JSSVGDescElement::GetPresentationAttributeFuncNum, DontDelete|Function, 1, 0 }
};

static const HashTable JSSVGDescElementPrototypeTable = 
{
    2, 1, JSSVGDescElementPrototypeTableEntries, 1
};

const ClassInfo JSSVGDescElementPrototype::info = { "SVGDescElementPrototype", 0, &JSSVGDescElementPrototypeTable, 0 };

JSObject* JSSVGDescElementPrototype::self(ExecState* exec)
{
    return KJS::cacheGlobalObject<JSSVGDescElementPrototype>(exec, "[[JSSVGDescElement.prototype]]");
}

bool JSSVGDescElementPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSSVGDescElementPrototypeFunction, JSObject>(exec, &JSSVGDescElementPrototypeTable, this, propertyName, slot);
}

const ClassInfo JSSVGDescElement::info = { "SVGDescElement", &JSSVGElement::info, &JSSVGDescElementTable, 0 };

JSSVGDescElement::JSSVGDescElement(ExecState* exec, SVGDescElement* impl)
    : JSSVGElement(exec, impl)
{
    setPrototype(JSSVGDescElementPrototype::self(exec));
}

bool JSSVGDescElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGDescElement, JSSVGElement>(exec, &JSSVGDescElementTable, this, propertyName, slot);
}

JSValue* JSSVGDescElement::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case XmllangAttrNum: {
        SVGDescElement* imp = static_cast<SVGDescElement*>(impl());

        return jsString(imp->xmllang());
    }
    case XmlspaceAttrNum: {
        SVGDescElement* imp = static_cast<SVGDescElement*>(impl());

        return jsString(imp->xmlspace());
    }
    case ClassNameAttrNum: {
        SVGDescElement* imp = static_cast<SVGDescElement*>(impl());

        RefPtr<SVGAnimatedString> obj = imp->classNameAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case StyleAttrNum: {
        SVGDescElement* imp = static_cast<SVGDescElement*>(impl());

        return toJS(exec, WTF::getPtr(imp->style()));
    }
    }
    return 0;
}

void JSSVGDescElement::put(ExecState* exec, const Identifier& propertyName, JSValue* value, int attr)
{
    lookupPut<JSSVGDescElement, JSSVGElement>(exec, propertyName, value, attr, &JSSVGDescElementTable, this);
}

void JSSVGDescElement::putValueProperty(ExecState* exec, int token, JSValue* value, int /*attr*/)
{
    switch (token) {
    case XmllangAttrNum: {
        SVGDescElement* imp = static_cast<SVGDescElement*>(impl());

        imp->setXmllang(value->toString(exec));
        break;
    }
    case XmlspaceAttrNum: {
        SVGDescElement* imp = static_cast<SVGDescElement*>(impl());

        imp->setXmlspace(value->toString(exec));
        break;
    }
    }
}

JSValue* JSSVGDescElementPrototypeFunction::callAsFunction(ExecState* exec, JSObject* thisObj, const List& args)
{
    if (!thisObj->inherits(&JSSVGDescElement::info))
      return throwError(exec, TypeError);

    JSSVGDescElement* castedThisObj = static_cast<JSSVGDescElement*>(thisObj);
    SVGDescElement* imp = static_cast<SVGDescElement*>(castedThisObj->impl());

    switch (id) {
    case JSSVGDescElement::GetPresentationAttributeFuncNum: {
        String name = args[0]->toString(exec);


        KJS::JSValue* result = toJS(exec, WTF::getPtr(imp->getPresentationAttribute(name)));
        return result;
    }
    }
    return 0;
}

}

#endif // ENABLE(SVG)
