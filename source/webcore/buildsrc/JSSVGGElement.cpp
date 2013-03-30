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
#include "JSSVGGElement.h"

#include <wtf/GetPtr.h>

#include "CSSMutableStyleDeclaration.h"
#include "CSSStyleDeclaration.h"
#include "CSSValue.h"
#include "JSCSSStyleDeclaration.h"
#include "JSCSSValue.h"
#include "JSSVGAnimatedBoolean.h"
#include "JSSVGAnimatedString.h"
#include "JSSVGAnimatedTransformList.h"
#include "JSSVGElement.h"
#include "JSSVGMatrix.h"
#include "JSSVGRect.h"
#include "JSSVGStringList.h"
#include "PlatformString.h"
#include "SVGElement.h"
#include "SVGGElement.h"
#include "SVGStringList.h"

using namespace KJS;

namespace WebCore {

/* Hash table */

static const HashEntry JSSVGGElementTableEntries[] =
{
    { 0, 0, 0, 0, 0 },
    { "farthestViewportElement", JSSVGGElement::FarthestViewportElementAttrNum, DontDelete|ReadOnly, 0, 0 },
    { "systemLanguage", JSSVGGElement::SystemLanguageAttrNum, DontDelete|ReadOnly, 0, &JSSVGGElementTableEntries[11] },
    { 0, 0, 0, 0, 0 },
    { "xmlspace", JSSVGGElement::XmlspaceAttrNum, DontDelete, 0, 0 },
    { "requiredExtensions", JSSVGGElement::RequiredExtensionsAttrNum, DontDelete|ReadOnly, 0, &JSSVGGElementTableEntries[12] },
    { "nearestViewportElement", JSSVGGElement::NearestViewportElementAttrNum, DontDelete|ReadOnly, 0, 0 },
    { "style", JSSVGGElement::StyleAttrNum, DontDelete|ReadOnly, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "requiredFeatures", JSSVGGElement::RequiredFeaturesAttrNum, DontDelete|ReadOnly, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "xmllang", JSSVGGElement::XmllangAttrNum, DontDelete, 0, &JSSVGGElementTableEntries[14] },
    { "externalResourcesRequired", JSSVGGElement::ExternalResourcesRequiredAttrNum, DontDelete|ReadOnly, 0, &JSSVGGElementTableEntries[13] },
    { "className", JSSVGGElement::ClassNameAttrNum, DontDelete|ReadOnly, 0, 0 },
    { "transform", JSSVGGElement::TransformAttrNum, DontDelete|ReadOnly, 0, 0 }
};

static const HashTable JSSVGGElementTable = 
{
    2, 15, JSSVGGElementTableEntries, 11
};

/* Hash table for prototype */

static const HashEntry JSSVGGElementPrototypeTableEntries[] =
{
    { "getPresentationAttribute", JSSVGGElement::GetPresentationAttributeFuncNum, DontDelete|Function, 1, 0 },
    { "hasExtension", JSSVGGElement::HasExtensionFuncNum, DontDelete|Function, 1, 0 },
    { "getCTM", JSSVGGElement::GetCTMFuncNum, DontDelete|Function, 0, 0 },
    { "getScreenCTM", JSSVGGElement::GetScreenCTMFuncNum, DontDelete|Function, 0, 0 },
    { "getTransformToElement", JSSVGGElement::GetTransformToElementFuncNum, DontDelete|Function, 1, 0 },
    { "getBBox", JSSVGGElement::GetBBoxFuncNum, DontDelete|Function, 0, 0 }
};

static const HashTable JSSVGGElementPrototypeTable = 
{
    2, 6, JSSVGGElementPrototypeTableEntries, 6
};

const ClassInfo JSSVGGElementPrototype::info = { "SVGGElementPrototype", 0, &JSSVGGElementPrototypeTable, 0 };

JSObject* JSSVGGElementPrototype::self(ExecState* exec)
{
    return KJS::cacheGlobalObject<JSSVGGElementPrototype>(exec, "[[JSSVGGElement.prototype]]");
}

bool JSSVGGElementPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSSVGGElementPrototypeFunction, JSObject>(exec, &JSSVGGElementPrototypeTable, this, propertyName, slot);
}

const ClassInfo JSSVGGElement::info = { "SVGGElement", &JSSVGElement::info, &JSSVGGElementTable, 0 };

JSSVGGElement::JSSVGGElement(ExecState* exec, SVGGElement* impl)
    : JSSVGElement(exec, impl)
{
    setPrototype(JSSVGGElementPrototype::self(exec));
}

bool JSSVGGElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGGElement, JSSVGElement>(exec, &JSSVGGElementTable, this, propertyName, slot);
}

JSValue* JSSVGGElement::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case RequiredFeaturesAttrNum: {
        SVGGElement* imp = static_cast<SVGGElement*>(impl());

        return toJS(exec, WTF::getPtr(imp->requiredFeatures()), imp);
    }
    case RequiredExtensionsAttrNum: {
        SVGGElement* imp = static_cast<SVGGElement*>(impl());

        return toJS(exec, WTF::getPtr(imp->requiredExtensions()), imp);
    }
    case SystemLanguageAttrNum: {
        SVGGElement* imp = static_cast<SVGGElement*>(impl());

        return toJS(exec, WTF::getPtr(imp->systemLanguage()), imp);
    }
    case XmllangAttrNum: {
        SVGGElement* imp = static_cast<SVGGElement*>(impl());

        return jsString(imp->xmllang());
    }
    case XmlspaceAttrNum: {
        SVGGElement* imp = static_cast<SVGGElement*>(impl());

        return jsString(imp->xmlspace());
    }
    case ExternalResourcesRequiredAttrNum: {
        SVGGElement* imp = static_cast<SVGGElement*>(impl());

        RefPtr<SVGAnimatedBoolean> obj = imp->externalResourcesRequiredAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case ClassNameAttrNum: {
        SVGGElement* imp = static_cast<SVGGElement*>(impl());

        RefPtr<SVGAnimatedString> obj = imp->classNameAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case StyleAttrNum: {
        SVGGElement* imp = static_cast<SVGGElement*>(impl());

        return toJS(exec, WTF::getPtr(imp->style()));
    }
    case TransformAttrNum: {
        SVGGElement* imp = static_cast<SVGGElement*>(impl());

        RefPtr<SVGAnimatedTransformList> obj = imp->transformAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case NearestViewportElementAttrNum: {
        SVGGElement* imp = static_cast<SVGGElement*>(impl());

        return toJS(exec, WTF::getPtr(imp->nearestViewportElement()));
    }
    case FarthestViewportElementAttrNum: {
        SVGGElement* imp = static_cast<SVGGElement*>(impl());

        return toJS(exec, WTF::getPtr(imp->farthestViewportElement()));
    }
    }
    return 0;
}

void JSSVGGElement::put(ExecState* exec, const Identifier& propertyName, JSValue* value, int attr)
{
    lookupPut<JSSVGGElement, JSSVGElement>(exec, propertyName, value, attr, &JSSVGGElementTable, this);
}

void JSSVGGElement::putValueProperty(ExecState* exec, int token, JSValue* value, int /*attr*/)
{
    switch (token) {
    case XmllangAttrNum: {
        SVGGElement* imp = static_cast<SVGGElement*>(impl());

        imp->setXmllang(value->toString(exec));
        break;
    }
    case XmlspaceAttrNum: {
        SVGGElement* imp = static_cast<SVGGElement*>(impl());

        imp->setXmlspace(value->toString(exec));
        break;
    }
    }
}

JSValue* JSSVGGElementPrototypeFunction::callAsFunction(ExecState* exec, JSObject* thisObj, const List& args)
{
    if (!thisObj->inherits(&JSSVGGElement::info))
      return throwError(exec, TypeError);

    JSSVGGElement* castedThisObj = static_cast<JSSVGGElement*>(thisObj);
    SVGGElement* imp = static_cast<SVGGElement*>(castedThisObj->impl());

    switch (id) {
    case JSSVGGElement::HasExtensionFuncNum: {
        String extension = args[0]->toString(exec);


        KJS::JSValue* result = jsBoolean(imp->hasExtension(extension));
        return result;
    }
    case JSSVGGElement::GetPresentationAttributeFuncNum: {
        String name = args[0]->toString(exec);


        KJS::JSValue* result = toJS(exec, WTF::getPtr(imp->getPresentationAttribute(name)));
        return result;
    }
    case JSSVGGElement::GetBBoxFuncNum: {


        KJS::JSValue* result = toJS(exec, new JSSVGPODTypeWrapperCreatorReadOnly<FloatRect>(imp->getBBox()), imp);
        return result;
    }
    case JSSVGGElement::GetCTMFuncNum: {


        KJS::JSValue* result = toJS(exec, new JSSVGPODTypeWrapperCreatorReadOnly<AffineTransform>(imp->getCTM()), imp);
        return result;
    }
    case JSSVGGElement::GetScreenCTMFuncNum: {


        KJS::JSValue* result = toJS(exec, new JSSVGPODTypeWrapperCreatorReadOnly<AffineTransform>(imp->getScreenCTM()), imp);
        return result;
    }
    case JSSVGGElement::GetTransformToElementFuncNum: {
        ExceptionCode ec = 0;
        SVGElement* element = toSVGElement(args[0]);


        KJS::JSValue* result = toJS(exec, new JSSVGPODTypeWrapperCreatorReadOnly<AffineTransform>(imp->getTransformToElement(element, ec)), imp);
        setDOMException(exec, ec);
        return result;
    }
    }
    return 0;
}

}

#endif // ENABLE(SVG)
