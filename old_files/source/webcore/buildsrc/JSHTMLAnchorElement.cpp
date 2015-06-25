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

#include "JSHTMLAnchorElement.h"

#include <wtf/GetPtr.h>

#include "HTMLAnchorElement.h"
#include "PlatformString.h"

using namespace KJS;

namespace WebCore {

/* Hash table */

static const HashEntry JSHTMLAnchorElementTableEntries[] =
{
    { 0, 0, 0, 0, 0 },
    { "protocol", JSHTMLAnchorElement::ProtocolAttrNum, DontDelete|ReadOnly, 0, 0 },
    { "hash", JSHTMLAnchorElement::HashAttrNum, DontDelete|ReadOnly, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "charset", JSHTMLAnchorElement::CharsetAttrNum, DontDelete, 0, &JSHTMLAnchorElementTableEntries[22] },
    { "hreflang", JSHTMLAnchorElement::HreflangAttrNum, DontDelete, 0, 0 },
    { "host", JSHTMLAnchorElement::HostAttrNum, DontDelete|ReadOnly, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "accessKey", JSHTMLAnchorElement::AccessKeyAttrNum, DontDelete, 0, 0 },
    { "constructor", JSHTMLAnchorElement::ConstructorAttrNum, DontDelete|DontEnum|ReadOnly, 0, 0 },
    { "rev", JSHTMLAnchorElement::RevAttrNum, DontDelete, 0, &JSHTMLAnchorElementTableEntries[24] },
    { "coords", JSHTMLAnchorElement::CoordsAttrNum, DontDelete, 0, 0 },
    { "port", JSHTMLAnchorElement::PortAttrNum, DontDelete|ReadOnly, 0, 0 },
    { "href", JSHTMLAnchorElement::HrefAttrNum, DontDelete, 0, &JSHTMLAnchorElementTableEntries[21] },
    { "search", JSHTMLAnchorElement::SearchAttrNum, DontDelete|ReadOnly, 0, 0 },
    { "tabIndex", JSHTMLAnchorElement::TabIndexAttrNum, DontDelete, 0, 0 },
    { "name", JSHTMLAnchorElement::NameAttrNum, DontDelete, 0, 0 },
    { "shape", JSHTMLAnchorElement::ShapeAttrNum, DontDelete, 0, 0 },
    { "hostname", JSHTMLAnchorElement::HostnameAttrNum, DontDelete|ReadOnly, 0, 0 },
    { "target", JSHTMLAnchorElement::TargetAttrNum, DontDelete, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "rel", JSHTMLAnchorElement::RelAttrNum, DontDelete, 0, &JSHTMLAnchorElementTableEntries[23] },
    { "type", JSHTMLAnchorElement::TypeAttrNum, DontDelete, 0, 0 },
    { "pathname", JSHTMLAnchorElement::PathnameAttrNum, DontDelete|ReadOnly, 0, 0 },
    { "text", JSHTMLAnchorElement::TextAttrNum, DontDelete|ReadOnly, 0, 0 }
};

static const HashTable JSHTMLAnchorElementTable = 
{
    2, 25, JSHTMLAnchorElementTableEntries, 21
};

/* Hash table for constructor */

static const HashEntry JSHTMLAnchorElementConstructorTableEntries[] =
{
    { 0, 0, 0, 0, 0 }
};

static const HashTable JSHTMLAnchorElementConstructorTable = 
{
    2, 1, JSHTMLAnchorElementConstructorTableEntries, 1
};

class JSHTMLAnchorElementConstructor : public DOMObject {
public:
    JSHTMLAnchorElementConstructor(ExecState* exec)
    {
        setPrototype(exec->lexicalInterpreter()->builtinObjectPrototype());
        putDirect(exec->propertyNames().prototype, JSHTMLAnchorElementPrototype::self(exec), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    JSValue* getValueProperty(ExecState*, int token) const;
    virtual const ClassInfo* classInfo() const { return &info; }
    static const ClassInfo info;

    virtual bool implementsHasInstance() const { return true; }
};

const ClassInfo JSHTMLAnchorElementConstructor::info = { "HTMLAnchorElementConstructor", 0, &JSHTMLAnchorElementConstructorTable, 0 };

bool JSHTMLAnchorElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLAnchorElementConstructor, DOMObject>(exec, &JSHTMLAnchorElementConstructorTable, this, propertyName, slot);
}

JSValue* JSHTMLAnchorElementConstructor::getValueProperty(ExecState*, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(token);
}

/* Hash table for prototype */

static const HashEntry JSHTMLAnchorElementPrototypeTableEntries[] =
{
    { "blur", JSHTMLAnchorElement::BlurFuncNum, DontDelete|Function, 0, &JSHTMLAnchorElementPrototypeTableEntries[3] },
    { "focus", JSHTMLAnchorElement::FocusFuncNum, DontDelete|Function, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "toString", JSHTMLAnchorElement::ToStringFuncNum, DontDelete|DontEnum|Function, 0, 0 }
};

static const HashTable JSHTMLAnchorElementPrototypeTable = 
{
    2, 4, JSHTMLAnchorElementPrototypeTableEntries, 3
};

const ClassInfo JSHTMLAnchorElementPrototype::info = { "HTMLAnchorElementPrototype", 0, &JSHTMLAnchorElementPrototypeTable, 0 };

JSObject* JSHTMLAnchorElementPrototype::self(ExecState* exec)
{
    return KJS::cacheGlobalObject<JSHTMLAnchorElementPrototype>(exec, "[[JSHTMLAnchorElement.prototype]]");
}

bool JSHTMLAnchorElementPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSHTMLAnchorElementPrototypeFunction, JSObject>(exec, &JSHTMLAnchorElementPrototypeTable, this, propertyName, slot);
}

const ClassInfo JSHTMLAnchorElement::info = { "HTMLAnchorElement", &JSHTMLElement::info, &JSHTMLAnchorElementTable, 0 };

JSHTMLAnchorElement::JSHTMLAnchorElement(ExecState* exec, HTMLAnchorElement* impl)
    : JSHTMLElement(exec, impl)
{
    setPrototype(JSHTMLAnchorElementPrototype::self(exec));
}

bool JSHTMLAnchorElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLAnchorElement, JSHTMLElement>(exec, &JSHTMLAnchorElementTable, this, propertyName, slot);
}

JSValue* JSHTMLAnchorElement::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case AccessKeyAttrNum: {
        HTMLAnchorElement* imp = static_cast<HTMLAnchorElement*>(impl());

        return jsString(imp->accessKey());
    }
    case CharsetAttrNum: {
        HTMLAnchorElement* imp = static_cast<HTMLAnchorElement*>(impl());

        return jsString(imp->charset());
    }
    case CoordsAttrNum: {
        HTMLAnchorElement* imp = static_cast<HTMLAnchorElement*>(impl());

        return jsString(imp->coords());
    }
    case HrefAttrNum: {
        HTMLAnchorElement* imp = static_cast<HTMLAnchorElement*>(impl());

        return jsString(imp->href());
    }
    case HreflangAttrNum: {
        HTMLAnchorElement* imp = static_cast<HTMLAnchorElement*>(impl());

        return jsString(imp->hreflang());
    }
    case NameAttrNum: {
        HTMLAnchorElement* imp = static_cast<HTMLAnchorElement*>(impl());

        return jsString(imp->name());
    }
    case RelAttrNum: {
        HTMLAnchorElement* imp = static_cast<HTMLAnchorElement*>(impl());

        return jsString(imp->rel());
    }
    case RevAttrNum: {
        HTMLAnchorElement* imp = static_cast<HTMLAnchorElement*>(impl());

        return jsString(imp->rev());
    }
    case ShapeAttrNum: {
        HTMLAnchorElement* imp = static_cast<HTMLAnchorElement*>(impl());

        return jsString(imp->shape());
    }
    case TabIndexAttrNum: {
        HTMLAnchorElement* imp = static_cast<HTMLAnchorElement*>(impl());

        return jsNumber(imp->tabIndex());
    }
    case TargetAttrNum: {
        HTMLAnchorElement* imp = static_cast<HTMLAnchorElement*>(impl());

        return jsString(imp->target());
    }
    case TypeAttrNum: {
        HTMLAnchorElement* imp = static_cast<HTMLAnchorElement*>(impl());

        return jsString(imp->type());
    }
    case HashAttrNum: {
        HTMLAnchorElement* imp = static_cast<HTMLAnchorElement*>(impl());

        return jsString(imp->hash());
    }
    case HostAttrNum: {
        HTMLAnchorElement* imp = static_cast<HTMLAnchorElement*>(impl());

        return jsString(imp->host());
    }
    case HostnameAttrNum: {
        HTMLAnchorElement* imp = static_cast<HTMLAnchorElement*>(impl());

        return jsString(imp->hostname());
    }
    case PathnameAttrNum: {
        HTMLAnchorElement* imp = static_cast<HTMLAnchorElement*>(impl());

        return jsString(imp->pathname());
    }
    case PortAttrNum: {
        HTMLAnchorElement* imp = static_cast<HTMLAnchorElement*>(impl());

        return jsString(imp->port());
    }
    case ProtocolAttrNum: {
        HTMLAnchorElement* imp = static_cast<HTMLAnchorElement*>(impl());

        return jsString(imp->protocol());
    }
    case SearchAttrNum: {
        HTMLAnchorElement* imp = static_cast<HTMLAnchorElement*>(impl());

        return jsString(imp->search());
    }
    case TextAttrNum: {
        HTMLAnchorElement* imp = static_cast<HTMLAnchorElement*>(impl());

        return jsString(imp->text());
    }
    case ConstructorAttrNum:
        return getConstructor(exec);
    }
    return 0;
}

void JSHTMLAnchorElement::put(ExecState* exec, const Identifier& propertyName, JSValue* value, int attr)
{
    lookupPut<JSHTMLAnchorElement, JSHTMLElement>(exec, propertyName, value, attr, &JSHTMLAnchorElementTable, this);
}

void JSHTMLAnchorElement::putValueProperty(ExecState* exec, int token, JSValue* value, int /*attr*/)
{
    switch (token) {
    case AccessKeyAttrNum: {
        HTMLAnchorElement* imp = static_cast<HTMLAnchorElement*>(impl());

        imp->setAccessKey(valueToStringWithNullCheck(exec, value));
        break;
    }
    case CharsetAttrNum: {
        HTMLAnchorElement* imp = static_cast<HTMLAnchorElement*>(impl());

        imp->setCharset(valueToStringWithNullCheck(exec, value));
        break;
    }
    case CoordsAttrNum: {
        HTMLAnchorElement* imp = static_cast<HTMLAnchorElement*>(impl());

        imp->setCoords(valueToStringWithNullCheck(exec, value));
        break;
    }
    case HrefAttrNum: {
        HTMLAnchorElement* imp = static_cast<HTMLAnchorElement*>(impl());

        imp->setHref(valueToStringWithNullCheck(exec, value));
        break;
    }
    case HreflangAttrNum: {
        HTMLAnchorElement* imp = static_cast<HTMLAnchorElement*>(impl());

        imp->setHreflang(valueToStringWithNullCheck(exec, value));
        break;
    }
    case NameAttrNum: {
        HTMLAnchorElement* imp = static_cast<HTMLAnchorElement*>(impl());

        imp->setName(valueToStringWithNullCheck(exec, value));
        break;
    }
    case RelAttrNum: {
        HTMLAnchorElement* imp = static_cast<HTMLAnchorElement*>(impl());

        imp->setRel(valueToStringWithNullCheck(exec, value));
        break;
    }
    case RevAttrNum: {
        HTMLAnchorElement* imp = static_cast<HTMLAnchorElement*>(impl());

        imp->setRev(valueToStringWithNullCheck(exec, value));
        break;
    }
    case ShapeAttrNum: {
        HTMLAnchorElement* imp = static_cast<HTMLAnchorElement*>(impl());

        imp->setShape(valueToStringWithNullCheck(exec, value));
        break;
    }
    case TabIndexAttrNum: {
        HTMLAnchorElement* imp = static_cast<HTMLAnchorElement*>(impl());

        imp->setTabIndex(value->toInt32(exec));
        break;
    }
    case TargetAttrNum: {
        HTMLAnchorElement* imp = static_cast<HTMLAnchorElement*>(impl());

        imp->setTarget(valueToStringWithNullCheck(exec, value));
        break;
    }
    case TypeAttrNum: {
        HTMLAnchorElement* imp = static_cast<HTMLAnchorElement*>(impl());

        imp->setType(valueToStringWithNullCheck(exec, value));
        break;
    }
    }
}

JSValue* JSHTMLAnchorElement::getConstructor(ExecState* exec)
{
    return KJS::cacheGlobalObject<JSHTMLAnchorElementConstructor>(exec, "[[HTMLAnchorElement.constructor]]");
}
JSValue* JSHTMLAnchorElementPrototypeFunction::callAsFunction(ExecState* exec, JSObject* thisObj, const List& args)
{
    if (!thisObj->inherits(&JSHTMLAnchorElement::info))
      return throwError(exec, TypeError);

    JSHTMLAnchorElement* castedThisObj = static_cast<JSHTMLAnchorElement*>(thisObj);
    HTMLAnchorElement* imp = static_cast<HTMLAnchorElement*>(castedThisObj->impl());

    switch (id) {
    case JSHTMLAnchorElement::BlurFuncNum: {

        imp->blur();
        return jsUndefined();
    }
    case JSHTMLAnchorElement::FocusFuncNum: {

        imp->focus();
        return jsUndefined();
    }
    case JSHTMLAnchorElement::ToStringFuncNum: {


        KJS::JSValue* result = jsString(imp->toString());
        return result;
    }
    }
    return 0;
}

}