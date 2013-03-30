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
#include "JSSVGPreserveAspectRatio.h"

#include <wtf/GetPtr.h>

#include "SVGPreserveAspectRatio.h"

using namespace KJS;

namespace WebCore {

/* Hash table */

static const HashEntry JSSVGPreserveAspectRatioTableEntries[] =
{
    { "meetOrSlice", JSSVGPreserveAspectRatio::MeetOrSliceAttrNum, DontDelete, 0, &JSSVGPreserveAspectRatioTableEntries[3] },
    { 0, 0, 0, 0, 0 },
    { "align", JSSVGPreserveAspectRatio::AlignAttrNum, DontDelete, 0, 0 },
    { "constructor", JSSVGPreserveAspectRatio::ConstructorAttrNum, DontDelete|DontEnum|ReadOnly, 0, 0 }
};

static const HashTable JSSVGPreserveAspectRatioTable = 
{
    2, 4, JSSVGPreserveAspectRatioTableEntries, 3
};

/* Hash table for constructor */

static const HashEntry JSSVGPreserveAspectRatioConstructorTableEntries[] =
{
    { "SVG_PRESERVEASPECTRATIO_XMAXYMAX", SVGPreserveAspectRatio::SVG_PRESERVEASPECTRATIO_XMAXYMAX, DontDelete|ReadOnly, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "SVG_PRESERVEASPECTRATIO_XMINYMAX", SVGPreserveAspectRatio::SVG_PRESERVEASPECTRATIO_XMINYMAX, DontDelete|ReadOnly, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "SVG_PRESERVEASPECTRATIO_NONE", SVGPreserveAspectRatio::SVG_PRESERVEASPECTRATIO_NONE, DontDelete|ReadOnly, 0, &JSSVGPreserveAspectRatioConstructorTableEntries[17] },
    { "SVG_PRESERVEASPECTRATIO_UNKNOWN", SVGPreserveAspectRatio::SVG_PRESERVEASPECTRATIO_UNKNOWN, DontDelete|ReadOnly, 0, &JSSVGPreserveAspectRatioConstructorTableEntries[14] },
    { "SVG_PRESERVEASPECTRATIO_XMIDYMIN", SVGPreserveAspectRatio::SVG_PRESERVEASPECTRATIO_XMIDYMIN, DontDelete|ReadOnly, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "SVG_MEETORSLICE_UNKNOWN", SVGPreserveAspectRatio::SVG_MEETORSLICE_UNKNOWN, DontDelete|ReadOnly, 0, 0 },
    { "SVG_MEETORSLICE_SLICE", SVGPreserveAspectRatio::SVG_MEETORSLICE_SLICE, DontDelete|ReadOnly, 0, 0 },
    { "SVG_PRESERVEASPECTRATIO_XMINYMIN", SVGPreserveAspectRatio::SVG_PRESERVEASPECTRATIO_XMINYMIN, DontDelete|ReadOnly, 0, 0 },
    { "SVG_PRESERVEASPECTRATIO_XMAXYMID", SVGPreserveAspectRatio::SVG_PRESERVEASPECTRATIO_XMAXYMID, DontDelete|ReadOnly, 0, &JSSVGPreserveAspectRatioConstructorTableEntries[16] },
    { "SVG_PRESERVEASPECTRATIO_XMAXYMIN", SVGPreserveAspectRatio::SVG_PRESERVEASPECTRATIO_XMAXYMIN, DontDelete|ReadOnly, 0, 0 },
    { "SVG_PRESERVEASPECTRATIO_XMINYMID", SVGPreserveAspectRatio::SVG_PRESERVEASPECTRATIO_XMINYMID, DontDelete|ReadOnly, 0, &JSSVGPreserveAspectRatioConstructorTableEntries[15] },
    { "SVG_PRESERVEASPECTRATIO_XMIDYMID", SVGPreserveAspectRatio::SVG_PRESERVEASPECTRATIO_XMIDYMID, DontDelete|ReadOnly, 0, 0 },
    { "SVG_PRESERVEASPECTRATIO_XMIDYMAX", SVGPreserveAspectRatio::SVG_PRESERVEASPECTRATIO_XMIDYMAX, DontDelete|ReadOnly, 0, 0 },
    { "SVG_MEETORSLICE_MEET", SVGPreserveAspectRatio::SVG_MEETORSLICE_MEET, DontDelete|ReadOnly, 0, 0 }
};

static const HashTable JSSVGPreserveAspectRatioConstructorTable = 
{
    2, 18, JSSVGPreserveAspectRatioConstructorTableEntries, 14
};

class JSSVGPreserveAspectRatioConstructor : public DOMObject {
public:
    JSSVGPreserveAspectRatioConstructor(ExecState* exec)
    {
        setPrototype(exec->lexicalInterpreter()->builtinObjectPrototype());
        putDirect(exec->propertyNames().prototype, JSSVGPreserveAspectRatioPrototype::self(exec), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    JSValue* getValueProperty(ExecState*, int token) const;
    virtual const ClassInfo* classInfo() const { return &info; }
    static const ClassInfo info;

    virtual bool implementsHasInstance() const { return true; }
};

const ClassInfo JSSVGPreserveAspectRatioConstructor::info = { "SVGPreserveAspectRatioConstructor", 0, &JSSVGPreserveAspectRatioConstructorTable, 0 };

bool JSSVGPreserveAspectRatioConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGPreserveAspectRatioConstructor, DOMObject>(exec, &JSSVGPreserveAspectRatioConstructorTable, this, propertyName, slot);
}

JSValue* JSSVGPreserveAspectRatioConstructor::getValueProperty(ExecState*, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(token);
}

/* Hash table for prototype */

static const HashEntry JSSVGPreserveAspectRatioPrototypeTableEntries[] =
{
    { "SVG_PRESERVEASPECTRATIO_XMAXYMAX", SVGPreserveAspectRatio::SVG_PRESERVEASPECTRATIO_XMAXYMAX, DontDelete|ReadOnly, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "SVG_PRESERVEASPECTRATIO_XMINYMAX", SVGPreserveAspectRatio::SVG_PRESERVEASPECTRATIO_XMINYMAX, DontDelete|ReadOnly, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "SVG_PRESERVEASPECTRATIO_NONE", SVGPreserveAspectRatio::SVG_PRESERVEASPECTRATIO_NONE, DontDelete|ReadOnly, 0, &JSSVGPreserveAspectRatioPrototypeTableEntries[17] },
    { "SVG_PRESERVEASPECTRATIO_UNKNOWN", SVGPreserveAspectRatio::SVG_PRESERVEASPECTRATIO_UNKNOWN, DontDelete|ReadOnly, 0, &JSSVGPreserveAspectRatioPrototypeTableEntries[14] },
    { "SVG_PRESERVEASPECTRATIO_XMIDYMIN", SVGPreserveAspectRatio::SVG_PRESERVEASPECTRATIO_XMIDYMIN, DontDelete|ReadOnly, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "SVG_MEETORSLICE_UNKNOWN", SVGPreserveAspectRatio::SVG_MEETORSLICE_UNKNOWN, DontDelete|ReadOnly, 0, 0 },
    { "SVG_MEETORSLICE_SLICE", SVGPreserveAspectRatio::SVG_MEETORSLICE_SLICE, DontDelete|ReadOnly, 0, 0 },
    { "SVG_PRESERVEASPECTRATIO_XMINYMIN", SVGPreserveAspectRatio::SVG_PRESERVEASPECTRATIO_XMINYMIN, DontDelete|ReadOnly, 0, 0 },
    { "SVG_PRESERVEASPECTRATIO_XMAXYMID", SVGPreserveAspectRatio::SVG_PRESERVEASPECTRATIO_XMAXYMID, DontDelete|ReadOnly, 0, &JSSVGPreserveAspectRatioPrototypeTableEntries[16] },
    { "SVG_PRESERVEASPECTRATIO_XMAXYMIN", SVGPreserveAspectRatio::SVG_PRESERVEASPECTRATIO_XMAXYMIN, DontDelete|ReadOnly, 0, 0 },
    { "SVG_PRESERVEASPECTRATIO_XMINYMID", SVGPreserveAspectRatio::SVG_PRESERVEASPECTRATIO_XMINYMID, DontDelete|ReadOnly, 0, &JSSVGPreserveAspectRatioPrototypeTableEntries[15] },
    { "SVG_PRESERVEASPECTRATIO_XMIDYMID", SVGPreserveAspectRatio::SVG_PRESERVEASPECTRATIO_XMIDYMID, DontDelete|ReadOnly, 0, 0 },
    { "SVG_PRESERVEASPECTRATIO_XMIDYMAX", SVGPreserveAspectRatio::SVG_PRESERVEASPECTRATIO_XMIDYMAX, DontDelete|ReadOnly, 0, 0 },
    { "SVG_MEETORSLICE_MEET", SVGPreserveAspectRatio::SVG_MEETORSLICE_MEET, DontDelete|ReadOnly, 0, 0 }
};

static const HashTable JSSVGPreserveAspectRatioPrototypeTable = 
{
    2, 18, JSSVGPreserveAspectRatioPrototypeTableEntries, 14
};

const ClassInfo JSSVGPreserveAspectRatioPrototype::info = { "SVGPreserveAspectRatioPrototype", 0, &JSSVGPreserveAspectRatioPrototypeTable, 0 };

JSObject* JSSVGPreserveAspectRatioPrototype::self(ExecState* exec)
{
    return KJS::cacheGlobalObject<JSSVGPreserveAspectRatioPrototype>(exec, "[[JSSVGPreserveAspectRatio.prototype]]");
}

bool JSSVGPreserveAspectRatioPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGPreserveAspectRatioPrototype, JSObject>(exec, &JSSVGPreserveAspectRatioPrototypeTable, this, propertyName, slot);
}

JSValue* JSSVGPreserveAspectRatioPrototype::getValueProperty(ExecState*, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(token);
}

const ClassInfo JSSVGPreserveAspectRatio::info = { "SVGPreserveAspectRatio", 0, &JSSVGPreserveAspectRatioTable, 0 };

JSSVGPreserveAspectRatio::JSSVGPreserveAspectRatio(ExecState* exec, SVGPreserveAspectRatio* impl, SVGElement* context)
    : m_context(context)
    , m_impl(impl)
{
    setPrototype(JSSVGPreserveAspectRatioPrototype::self(exec));
}

JSSVGPreserveAspectRatio::~JSSVGPreserveAspectRatio()
{
    ScriptInterpreter::forgetDOMObject(m_impl.get());

}

bool JSSVGPreserveAspectRatio::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGPreserveAspectRatio, KJS::DOMObject>(exec, &JSSVGPreserveAspectRatioTable, this, propertyName, slot);
}

JSValue* JSSVGPreserveAspectRatio::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case AlignAttrNum: {
        SVGPreserveAspectRatio* imp = static_cast<SVGPreserveAspectRatio*>(impl());

        return jsNumber(imp->align());
    }
    case MeetOrSliceAttrNum: {
        SVGPreserveAspectRatio* imp = static_cast<SVGPreserveAspectRatio*>(impl());

        return jsNumber(imp->meetOrSlice());
    }
    case ConstructorAttrNum:
        return getConstructor(exec);
    }
    return 0;
}

void JSSVGPreserveAspectRatio::put(ExecState* exec, const Identifier& propertyName, JSValue* value, int attr)
{
    lookupPut<JSSVGPreserveAspectRatio, KJS::DOMObject>(exec, propertyName, value, attr, &JSSVGPreserveAspectRatioTable, this);
}

void JSSVGPreserveAspectRatio::putValueProperty(ExecState* exec, int token, JSValue* value, int /*attr*/)
{
    switch (token) {
    case AlignAttrNum: {
        SVGPreserveAspectRatio* imp = static_cast<SVGPreserveAspectRatio*>(impl());

        imp->setAlign(value->toInt32(exec));
        break;
    }
    case MeetOrSliceAttrNum: {
        SVGPreserveAspectRatio* imp = static_cast<SVGPreserveAspectRatio*>(impl());

        imp->setMeetOrSlice(value->toInt32(exec));
        break;
    }
    }
    if (context())
        context()->notifyAttributeChange();
}

JSValue* JSSVGPreserveAspectRatio::getConstructor(ExecState* exec)
{
    return KJS::cacheGlobalObject<JSSVGPreserveAspectRatioConstructor>(exec, "[[SVGPreserveAspectRatio.constructor]]");
}
KJS::JSValue* toJS(KJS::ExecState* exec, SVGPreserveAspectRatio* obj, SVGElement* context)
{
    return KJS::cacheSVGDOMObject<SVGPreserveAspectRatio, JSSVGPreserveAspectRatio>(exec, obj, context);
}
SVGPreserveAspectRatio* toSVGPreserveAspectRatio(KJS::JSValue* val)
{
    return val->isObject(&JSSVGPreserveAspectRatio::info) ? static_cast<JSSVGPreserveAspectRatio*>(val)->impl() : 0;
}

}

#endif // ENABLE(SVG)
