// MyFn.cpp: реализация CMyFn

#include "pch.h"
#include "MyFn.h"


// CMyFn

STDMETHODIMP CMyFn::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* const arr[] = 
	{
		&IID_IMyFn
	};

	for (int i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i],riid))
			return S_OK;
	}
	return S_FALSE;
}

STDMETHODIMP CMyFn::Fun141(INT x, INT y, DOUBLE* z)
{
	*z = x + y + 0.01;

	return S_OK;
}

STDMETHODIMP CMyFn::Fun142(INT x, INT y, INT c, INT* z)
{
	*z = x + y + c;

	return S_OK;
}

STDMETHODIMP CMyFn::Fun143(DOUBLE in, DOUBLE* out)
{
	*out = in + 0.01;

	return S_OK;
}
