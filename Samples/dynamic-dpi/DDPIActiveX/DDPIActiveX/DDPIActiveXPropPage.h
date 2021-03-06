// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once

// DDPIActiveXPropPage.h : Declaration of the CDDPIActiveXPropPage property page class.


// CDDPIActiveXPropPage : See DDPIActiveXPropPage.cpp for implementation.

class CDDPIActiveXPropPage : public COlePropertyPage
{
	DECLARE_DYNCREATE(CDDPIActiveXPropPage)
	DECLARE_OLECREATE_EX(CDDPIActiveXPropPage)

// Constructor
public:
	CDDPIActiveXPropPage();

// Dialog Data
	enum { IDD = IDD_PROPPAGE_DDPIACTIVEX };

// Implementation
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Message maps
protected:
	DECLARE_MESSAGE_MAP()
};

