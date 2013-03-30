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
#include "JSSVGFEMergeElement.h"

#include <wtf/GetPtr.h>

#include "CSSMutableStyleDeclaration.h"
#include "CSSStyleDeclaration.h"
#include "CSSValue.h"
#include "JSCSSStyleDeclaration.h"
#include "JSCSSValue.h"
#include "JSSVGAnimatedLength.h"
#include "JSSVGAnimatedString.h"
#include "SVGFEMergeElement.h"

using namespace KJS;

namespace WebCore {

/* Hash table */

static const HashEntry JSSVGFEMergeElementTableEntries[] =
{
    { 0, 0, 0, 0, 0 },
    { "width", JSSVGFEMergeElement::WidthAttrNum, DontDelete|ReadOnly, 0, &JSSVGFEMergeElementTableEntries[8] },
    { "x", JSSVGFEMergeElement::XAttrNum, DontDelete|ReadOnly, 0, &JSSVGFEMergeElementTableEntries[7] },
    { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "y", JSSVGFEMergeElement::YAttrNum, DontDelete|ReadOnly, 0, 0 },
    { "result", JSSVGFEMergeElement::ResultAttrNum, DontDelete|ReadOnly, 0, 0 },
    { "height", JSSVGFEMergeElement::HeightAttrNum, DontDelete|ReadOnly, 0, &JSSVGFEMergeElementTableEntries[9] },
    { "className", JSSVGFEMergeElement::ClassNameAttrNum, DontDelete|ReadOnly, 0, 0 },
    { "style", JSSVGFEMergeElement::StyleAttrNum, DontDelete|ReadOnly, 0, 0 }
};

static const HashTable JSSVGFEMergeElementTable = 
{
    2, 10, JSSVGFEMergeElementTableEntries, 7
};

/* Hash table for prototype */

static const HashEntry JSSVGFEMergeElementPrototypeTableEntries[] =
{
    { "getPresentationAttribute", JSSVGFEMergeElement::GetPresentationAttributeFuncNum, DontDelete|Function, 1, 0 }
};

static const HashTable JSSVGFEMergeElementPrototypeTable = 
{
    2, 1, JSSVGFEMergeElementPrototypeTableEntries, 1
};

const ClassInfo JSSVGFEMergeElementPrototype::info = { "SVGFEMergeElementPrototype", 0, &JSSVGFEMergeElementPrototypeTable, 0 };

JSObject* JSSVGFEMergeElementPrototype::self(ExecState* exec)
{
    return KJS::cacheGlobalObject<JSSVGFEMergeElementPrototype>(exec, "[[JSSVGFEMergeElement.prototype]]");
}

bool JSSVGFEMergeElementPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSSVGFEMergeElementPrototypeFunction, JSObject>(exec, &JSSVGFEMergeElementPrototypeTable, this, propertyName, slot);
}

const ClassInfo JSSVGFEMergeElement::info = { "SVGFEMergeElement", &JSSVGElement::info, &JSSVGFEMergeElementTable, 0 };

JSSVGFEMergeElement::JSSVGFEMergeElement(ExecState* exec, SVGFEMergeElement* impl)
    : JSSVGElement(exec, impl)
{
    setPrototype(JSSVGFEMergeElementPrototype::self(exec));
}

bool JSSVGFEMergeElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGFEMergeElement, JSSVGElement>(exec, &JSSVGFEMergeElementTable, this, propertyName, slot);
}

JSValue* JSSVGFEMergeElement::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case XAttrNum: {
        SVGFEMergeElement* imp = static_cast<SVGFEMergeElement*>(impl());

        RefPtr<SVGAnimatedLength> obj = imp->xAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case YAttrNum: {
        SVGFEMergeElement* imp = static_cast<SVGFEMergeElement*>(impl());

        RefPtr<SVGAnimatedLength> obj = imp->yAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case WidthAttrNum: {
        SVGFEMergeElement* imp = static_cast<SVGFEMergeElement*>(impl());

        RefPtr<SVGAnimatedLength> obj = imp->widthAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case HeightAttrNum: {
        SVGFEMergeElement* imp = static_cast<SVGFEMergeElement*>(impl());

        RefPtr<SVGAnimatedLength> obj = imp->heightAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case ResultAttrNum: {
        SVGFEMergeElement* imp = static_cast<SVGFEMergeElement*>(impl());

        RefPtr<SVGAnimatedString> obj = imp->resultAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case ClassNameAttrNum: {
        SVGFEMergeElement* imp = static_cast<SVGFEMergeElement*>(impl());

        RefPtr<SVGAnimatedString> obj = imp->classNameAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case StyleAttrNum: {
        SVGFEMergeElement* imp = static_cast<SVGFEMergeElement*>(impl());

        return toJS(exec, WTF::getPtr(imp->style()));
    }
    }
    return 0;
}

JSValue* JSSVGFEMergeElementPrototypeFunction::callAsFunction(ExecState* exec, JSObject* thisObj, const List& args)
{
    if (!thisObj->inherits(&JSSVGFEMergeElement::info))
      return throwError(exec, TypeError);

    JSSVGFEMergeElement* castedThisObj = static_cast<JSSVGFEMergeElement*>(thisObj);
    SVGFEMergeElement* imp = static_cast<SVGFEMergeElement*>(castedThisObj->impl());

    switch (id) {
    case JSSVGFEMergeElement::GetPresentationAttributeFuncNum: {
        String name = args[0]->toString(exec);


        KJS::JSValue* result = toJS(exec, WTF::getPtr(imp->getPresentationAttribute(name)));
        return result;
    }
    }
    return 0;
}

}

#endif // ENABLE(SVG) && ENABLE(SVG_EXPERIMENTAL_FEATURES)
