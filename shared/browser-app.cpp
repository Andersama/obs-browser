/******************************************************************************
 Copyright (C) 2014 by John R. Bradley <jrb@turrettech.com>

 This program is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 2 of the License, or
 (at your option) any later version.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this program.  If not, see <http://www.gnu.org/licenses/>.
 ******************************************************************************/

#include "browser-app.hpp"

#include <string>

#include "cefsimple/simple_handler.h"
#include "include/cef_browser.h"
#include "include/cef_command_line.h"
#include "include/wrapper/cef_helpers.h"

BrowserApp::BrowserApp()
{}

void BrowserApp::OnRegisterCustomSchemes(
		CefRefPtr<CefSchemeRegistrar> registrar)
{
	registrar->AddCustomScheme("http", true, true, false);
}

	//command_line->AppendSwitchWithValue("ppapi-flash-path", "C:\Program Files (x86)\Google\Chrome\Application\47.0.2526.106\PepperFlash\pepflashplayer.dll");
	//command_line->AppendSwitchWithValue("ppapi-flash-version", "20.0.0.228");
	
}

	command_line->AppendSwitch("enable-gpu");
	command_line->AppendSwitchWithValue("remote-debugging-port", "12345");
	//command_line->AppendSwitchWithValue("ppapi-flash-path", "C:\Program Files (x86)\Google\Chrome\Application\47.0.2526.106\PepperFlash\pepflashplayer.dll");
	//command_line->AppendSwitchWithValue("ppapi-flash-version", "20.0.0.228");
	
}

