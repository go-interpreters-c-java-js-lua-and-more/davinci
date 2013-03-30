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
#include "JSSVGSwitchElement.h"

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
#include "SVGStringList.h"
#include "SVGSwitchElement.h"

using namespace KJS;

namespace WebCore {

/* Hash table */

static const HashEntry JSSVGSwitchElementTableEntries[] =
{
    { 0, 0, 0, 0, 0 },
    { "farthestViewportElement", JSSVGSwitchElement::FarthestViewportElementAttrNum, DontDelete|ReadOnly, 0, 0 },
    { "systemLanguage", JSSVGSwitchElement::SystemLanguageAttrNum, DontDelete|ReadOnly, 0, &JSSVGSwitchElementTableEntries[11] },
    { 0, 0, 0, 0, 0 },
    { "xmlspace", JSSVGSwitchElement::XmlspaceAttrNum, DontDelete, 0, 0 },
    { "requiredExtensions", JSSVGSwitchElement::RequiredExtensionsAttrNum, DontDelete|ReadOnly, 0, &JSSVGSwitchElementTableEntries[12] },
    { "nearestViewportElement", JSSVGSwitchElement::NearestViewportElementAttrNum, DontDelete|ReadOnly, 0, 0 },
    { "style", JSSVGSwitchElement::StyleAttrNum, DontDelete|ReadOnly, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "requiredFeatures", JSSVGSwitchElement::RequiredFeaturesAttrNum, DontDelete|ReadOnly, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "xmllang", JSSVGSwitchElement::XmllangAttrNum, DontDelete, 0, &JSSVGSwitchElementTableEntries[14] },
    { "externalResourcesRequired", JSSVGSwitchElement::ExternalResourcesRequiredAttrNum, DontDelete|ReadOnly, 0, &JSSVGSwitchElementTableEntries[13] },
    { "className", JSSVGSwitchElement::ClassNameAttrNum, DontDelete|ReadOnly, 0, 0 },
    { "transform", JSSVGSwitchElement::TransformAttrNum, DontDelete|ReadOnly, 0, 0 }
};

static const HashTable JSSVGSwitchElementTable = 
{
    2, 15, JSSVGSwitchElementTableEntries, 11
};

/* Hash table for prototype */

static const HashEntry JSSVGSwitchElementPrototypeTableEntries[] =
{
    { "getPresentationAttribute", JSSVGSwitchElement::GetPresentationAttributeFuncNum, DontDelete|Function, 1, 0 },
    { "hasExtension", JSSVGSwitchElement::HasExtensionFuncNum, DontDelete|Function, 1, 0 },
    { "getCTM", JSSVGSwitchElement::GetCTMFuncNum, DontDelete|Function, 0, 0 },
    { "getScreenCTM", JSSVGSwitchElement::GetScreenCTMFuncNum, DontDelete|Function, 0, 0 },
    { "getTransformToElement", JSSVGSwitchElement::GetTransformToElementFuncNum, DontDelete|Function, 1, 0 },
    { "getBBox", JSSVGSwitchElement::GetBBoxFuncNum, DontDelete|Function, 0, 0 }
};

static const HashTable JSSVGSwitchElementPrototypeTable = 
{
    2, 6, JSSVGSwitchElementPrototypeTableEntries, 6
};

const ClassInfo JSSVGSwitchElementPrototype::info = { "SVGSwitchElementPrototype", 0, &JSSVGSwitchElementPrototypeTable, 0 };

JSObject* JSSVGSwitchElementPrototype::self(ExecState* exec)
{
    return KJS::cacheGlobalObject<JSSVGSwitchElementPrototype>(exec, "[[JSSVGSwitchElement.prototype]]");
}

bool JSSVGSwitchElementPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSSVGSwitchElementPrototypeFunction, JSObject>(exec, &JSSVGSwitchElementPrototypeTable, this, propertyName, slot);
}

const ClassInfo JSSVGSwitchElement::info = { "SVGSwitchElement", &JSSVGElement::info, &JSSVGSwitchElementTable, 0 };

JSSVGSwitchElement::JSSVGSwitchElement(ExecState* exec, SVGSwitchElement* impl)
    : JSSVGElement(exec, impl)
{
    setPrototype(JSSVGSwitchElementPrototype::self(exec));
}

bool JSSVGSwitchElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGSwitchElement, JSSVGElement>(exec, &JSSVGSwitchElementTable, this, propertyName, slot);
}

JSValue* JSSVGSwitchElement::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case RequiredFeaturesAttrNum: {
        SVGSwitchElement* imp = static_cast<SVGSwitchElement*>(impl());

        return toJS(exec, WTF::getPtr(imp->requiredFeatures()), imp);
    }
    case RequiredExtensionsAttrNum: {
        SVGSwitchElement* imp = static_cast<SVGSwitchElement*>(impl());

        return toJS(exec, WTF::getPtr(imp->requiredExtensions()), imp);
    }
    case SystemLanguageAttrNum: {
        SVGSwitchElement* imp = static_cast<SVGSwitchElement*>(impl());

        return toJS(exec, WTF::getPtr(imp->systemLanguage()), imp);
    }
    case XmllangAttrNum: {
        SVGSwitchElement* imp = static_cast<SVGSwitchElement*>(impl());

        return jsString(imp->xmllang());
    }
    case XmlspaceAttrNum: {
        SVGSwitchElement* imp = static_cast<SVGSwitchElement*>(impl());

        return jsString(imp->xmlspace());
    }
    case ExternalResourcesRequiredAttrNum: {
        SVGSwitchElement* imp = static_cast<SVGSwitchElement*>(impl());

        RefPtr<SVGAnimatedBoolean> obj = imp->externalResourcesRequiredAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case ClassNameAttrNum: {
        SVGSwitchElement* imp = static_cast<SVGSwitchElement*>(impl());

        RefPtr<SVGAnimatedString> obj = imp->classNameAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case StyleAttrNum: {
        SVGSwitchElement* imp = static_cast<SVGSwitchElement*>(impl());

        return toJS(exec, WTF::getPtr(imp->style()));
    }
    case TransformAttrNum: {
        SVGSwitchElement* imp = static_cast<SVGSwitchElement*>(impl());

        RefPtr<SVGAnimatedTransformList> obj = imp->transformAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case NearestViewportElementAttrNum: {
        SVGSwitchElement* imp = static_cast<SVGSwitchElement*>(impl());

        return toJS(exec, WTF::getPtr(imp->nearestViewportElement()));
    }
    case FarthestViewportElementAttrNum: {
        SVGSwitchElement* imp = static_cast<SVGSwitchElement*>(impl());

        return toJS(exec, WTF::getPtr(imp->farthestViewportElement()));
    }
    }
    return 0;
}

void JSSVGSwitchElement::put(ExecState* exec, const Identifier& propertyName, JSValue* value, int attr)
{
    lookupPut<JSSVGSwitchElement, JSSVGElement>(exec, propertyName, value, attr, &JSSVGSwitchElementTable, this);
}

void JSSVGSwitchElement::putValueProperty(ExecState* exec, int token, JSValue* value, int /*attr*/)
{
    switch (token) {
    case XmllangAttrNum: {
        SVGSwitchElement* imp = static_cast<SVGSwitchElement*>(impl());

        imp->setXmllang(value->toString(exec));
        break;
    }
    case XmlspaceAttrNum: {
        SVGSwitchElement* imp = static_cast<SVGSwitchElement*>(impl());

        imp->setXmlspace(value->toString(exec));
        break;
    }
    }
}

JSValue* JSSVGSwitchElementPrototypeFunction::callAsFunction(ExecState* exec, JSObject* thisObj, const List& args)
{
    if (!thisObj->inherits(&JSSVGSwitchElement::info))
      return throwError(exec, TypeError);

    JSSVGSwitchElement* castedThisObj = static_cast<JSSVGSwitchElement*>(thisObj);
    SVGSwitchElement* imp = static_cast<SVGSwitchElement*>(castedThisObj->impl());

    switch (id) {
    case JSSVGSwitchElement::HasExtensionFuncNum: {
        String extension = args[0]->toString(exec);


        KJS::JSValue* result = jsBoolean(imp->hasExtension(extension));
        return result;
    }
    case JSSVGSwitchElement::GetPresentationAttributeFuncNum: {
        String name = args[0]->toString(exec);


        KJS::JSValue* result = toJS(exec, WTF::getPtr(imp->getPresentationAttribute(name)));
        return result;
    }
    case JSSVGSwitchElement::GetBBoxFuncNum: {


        KJS::JSValue* result = toJS(exec, new JSSVGPODTypeWrapperCreatorReadOnly<FloatRect>(imp->getBBox()), imp);
        return result;
    }
    case JSSVGSwitchElement::GetCTMFuncNum: {


        KJS::JSValue* result = toJS(exec, new JSSVGPODTypeWrapperCreatorReadOnly<AffineTransform>(imp->getCTM()), imp);
        return result;
    }
    case JSSVGSwitchElement::GetScreenCTMFuncNum: {


        KJS::JSValue* result = toJS(exec, new JSSVGPODTypeWrapperCreatorReadOnly<AffineTransform>(imp->getScreenCTM()), imp);
        return result;
    }
    case JSSVGSwitchElement::GetTransformToElementFuncNum: {
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
