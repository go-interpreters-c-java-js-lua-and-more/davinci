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

#include "JSRect.h"

#include <wtf/GetPtr.h>

#include "CSSPrimitiveValue.h"
#include "JSCSSPrimitiveValue.h"
#include "Rect.h"

using namespace KJS;

namespace WebCore {

/* Hash table */

static const HashEntry JSRectTableEntries[] =
{
    { 0, 0, 0, 0, 0 },
    { "right", JSRect::RightAttrNum, DontDelete|ReadOnly, 0, 0 },
    { "top", JSRect::TopAttrNum, DontDelete|ReadOnly, 0, &JSRectTableEntries[5] },
    { "left", JSRect::LeftAttrNum, DontDelete|ReadOnly, 0, 0 },
    { "bottom", JSRect::BottomAttrNum, DontDelete|ReadOnly, 0, 0 },
    { "constructor", JSRect::ConstructorAttrNum, DontDelete|DontEnum|ReadOnly, 0, 0 }
};

static const HashTable JSRectTable = 
{
    2, 6, JSRectTableEntries, 5
};

/* Hash table for constructor */

static const HashEntry JSRectConstructorTableEntries[] =
{
    { 0, 0, 0, 0, 0 }
};

static const HashTable JSRectConstructorTable = 
{
    2, 1, JSRectConstructorTableEntries, 1
};

class JSRectConstructor : public DOMObject {
public:
    JSRectConstructor(ExecState* exec)
    {
        setPrototype(exec->lexicalInterpreter()->builtinObjectPrototype());
        putDirect(exec->propertyNames().prototype, JSRectPrototype::self(exec), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    JSValue* getValueProperty(ExecState*, int token) const;
    virtual const ClassInfo* classInfo() const { return &info; }
    static const ClassInfo info;

    virtual bool implementsHasInstance() const { return true; }
};

const ClassInfo JSRectConstructor::info = { "RectConstructor", 0, &JSRectConstructorTable, 0 };

bool JSRectConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSRectConstructor, DOMObject>(exec, &JSRectConstructorTable, this, propertyName, slot);
}

JSValue* JSRectConstructor::getValueProperty(ExecState*, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(token);
}

/* Hash table for prototype */

static const HashEntry JSRectPrototypeTableEntries[] =
{
    { 0, 0, 0, 0, 0 }
};

static const HashTable JSRectPrototypeTable = 
{
    2, 1, JSRectPrototypeTableEntries, 1
};

const ClassInfo JSRectPrototype::info = { "RectPrototype", 0, &JSRectPrototypeTable, 0 };

JSObject* JSRectPrototype::self(ExecState* exec)
{
    return KJS::cacheGlobalObject<JSRectPrototype>(exec, "[[JSRect.prototype]]");
}

const ClassInfo JSRect::info = { "Rect", 0, &JSRectTable, 0 };

JSRect::JSRect(ExecState* exec, Rect* impl)
    : m_impl(impl)
{
    setPrototype(JSRectPrototype::self(exec));
}

JSRect::~JSRect()
{
    ScriptInterpreter::forgetDOMObject(m_impl.get());

}

bool JSRect::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSRect, KJS::DOMObject>(exec, &JSRectTable, this, propertyName, slot);
}

JSValue* JSRect::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case TopAttrNum: {
        Rect* imp = static_cast<Rect*>(impl());

        return toJS(exec, WTF::getPtr(imp->top()));
    }
    case RightAttrNum: {
        Rect* imp = static_cast<Rect*>(impl());

        return toJS(exec, WTF::getPtr(imp->right()));
    }
    case BottomAttrNum: {
        Rect* imp = static_cast<Rect*>(impl());

        return toJS(exec, WTF::getPtr(imp->bottom()));
    }
    case LeftAttrNum: {
        Rect* imp = static_cast<Rect*>(impl());

        return toJS(exec, WTF::getPtr(imp->left()));
    }
    case ConstructorAttrNum:
        return getConstructor(exec);
    }
    return 0;
}

JSValue* JSRect::getConstructor(ExecState* exec)
{
    return KJS::cacheGlobalObject<JSRectConstructor>(exec, "[[Rect.constructor]]");
}
KJS::JSValue* toJS(KJS::ExecState* exec, Rect* obj)
{
    return KJS::cacheDOMObject<Rect, JSRect>(exec, obj);
}
Rect* toRect(KJS::JSValue* val)
{
    return val->isObject(&JSRect::info) ? static_cast<JSRect*>(val)->impl() : 0;
}

}
