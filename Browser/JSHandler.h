#ifndef __BROWSERV8HANDLER_H__
#define __BROWSERV8HANDLER_H__
#pragma once
#include "include/cef_base.h"
#include "include/cef_app.h"

namespace Browser
{
	class ClientJSHandler : public CefV8Handler
	{
	public:
		ClientJSHandler() : sParam("An initial string value.") {}
		virtual ~ClientJSHandler() {}

		virtual bool Execute(const CefString& name,
			CefRefPtr<CefV8Value> object,
			const CefV8ValueList& arguments,
			CefRefPtr<CefV8Value>& retval,
			CefString& exception);
	private:
		CefString sParam;
		IMPLEMENT_REFCOUNTING(ClientJSHandler);
	};
}

#endif
