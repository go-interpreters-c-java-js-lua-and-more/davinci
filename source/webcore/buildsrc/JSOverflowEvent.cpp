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

#include "JSOverflowEvent.h"

#include <wtf/GetPtr.h>

#include "OverflowEvent.h"

using namespace KJS;

namespace WebCore {

/* Hash table */

static const HashEntry JSOverflowEventTableEntries[] =
{
    { "orient", JSOverflowEvent::OrientAttrNum, DontDelete|ReadOnly, 0, &JSOverflowEventTableEntries[3] },
    { "verticalOverflow", JSOverflowEvent::VerticalOverflowAttrNum, DontDelete|ReadOnly, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "horizontalOverflow", JSOverflowEvent::HorizontalOverflowAttrNum, DontDelete|ReadOnly, 0, 0 }
};

static const HashTable JSOverflowEventTable = 
{
    2, 4, JSOverflowEventTableEntries, 3
};

/* Hash table for prototype */

static const HashEntry JSOverflowEventPrototypeTableEntries[] =
{
    { "HORIZONTAL", OverflowEvent::HORIZONTAL, DontDelete|ReadOnly, 0, &JSOverflowEventPrototypeTableEntries[4] },
    { 0, 0, 0, 0, 0 },
    { "VERTICAL", OverflowEvent::VERTICAL, DontDelete|ReadOnly, 0, 0 },
    { "initOverflowEvent", JSOverflowEvent::InitOverflowEventFuncNum, DontDelete|Function, 3, 0 },
    { "BOTH", OverflowEvent::BOTH, DontDelete|ReadOnly, 0, 0 }
};

static const HashTable JSOverflowEventPrototypeTable = 
{
    2, 5, JSOverflowEventPrototypeTableEntries, 4
};

const ClassInfo JSOverflowEventPrototype::info = { "OverflowEventPrototype", 0, &JSOverflowEventPrototypeTable, 0 };

JSObject* JSOverflowEventPrototype::self(ExecState* exec)
{
    return KJS::cacheGlobalObject<JSOverflowEventPrototype>(exec, "[[JSOverflowEvent.prototype]]");
}

bool JSOverflowEventPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticPropertySlot<JSOverflowEventPrototypeFunction, JSOverflowEventPrototype, JSObject>(exec, &JSOverflowEventPrototypeTable, this, propertyName, slot);
}

JSValue* JSOverflowEventPrototype::getValueProperty(ExecState*, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(token);
}

const ClassInfo JSOverflowEvent::info = { "OverflowEvent", &JSEvent::info, &JSOverflowEventTable, 0 };

JSOverflowEvent::JSOverflowEvent(ExecState* exec, OverflowEvent* impl)
    : JSEvent(exec, impl)
{
    setPrototype(JSOverflowEventPrototype::self(exec));
}

bool JSOverflowEvent::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSOverflowEvent, JSEvent>(exec, &JSOverflowEventTable, this, propertyName, slot);
}

JSValue* JSOverflowEvent::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case OrientAttrNum: {
        OverflowEvent* imp = static_cast<OverflowEvent*>(impl());

        return jsNumber(imp->orient());
    }
    case HorizontalOverflowAttrNum: {
        OverflowEvent* imp = static_cast<OverflowEvent*>(impl());

        return jsBoolean(imp->horizontalOverflow());
    }
    case VerticalOverflowAttrNum: {
        OverflowEvent* imp = static_cast<OverflowEvent*>(impl());

        return jsBoolean(imp->verticalOverflow());
    }
    }
    return 0;
}

JSValue* JSOverflowEventPrototypeFunction::callAsFunction(ExecState* exec, JSObject* thisObj, const List& args)
{
    if (!thisObj->inherits(&JSOverflowEvent::info))
      return throwError(exec, TypeError);

    JSOverflowEvent* castedThisObj = static_cast<JSOverflowEvent*>(thisObj);
    OverflowEvent* imp = static_cast<OverflowEvent*>(castedThisObj->impl());

    switch (id) {
    case JSOverflowEvent::InitOverflowEventFuncNum: {
        unsigned short orient = args[0]->toInt32(exec);
        bool horizontalOverflow = args[1]->toBoolean(exec);
        bool verticalOverflow = args[2]->toBoolean(exec);

        imp->initOverflowEvent(orient, horizontalOverflow, verticalOverflow);
        return jsUndefined();
    }
    }
    return 0;
}

}
