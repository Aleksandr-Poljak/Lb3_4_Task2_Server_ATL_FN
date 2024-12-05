// MyFn.h: объявление CMyFn

#pragma once
#include "resource.h"       // основные символы



#include "Lb34Task2ServerATLFN_i.h"



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Однопотоковые COM-объекты не поддерживаются должным образом платформой Windows CE, например платформами Windows Mobile, в которых не предусмотрена полная поддержка DCOM. Определите _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA, чтобы принудить ATL поддерживать создание однопотоковых COM-объектов и разрешить использование его реализаций однопотоковых COM-объектов. Для потоковой модели в вашем rgs-файле задано значение 'Free', поскольку это единственная потоковая модель, поддерживаемая не-DCOM платформами Windows CE."
#endif

using namespace ATL;


// CMyFn

class ATL_NO_VTABLE CMyFn :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CMyFn, &CLSID_MyFn>,
	public ISupportErrorInfo,
	public IDispatchImpl<IMyFn, &IID_IMyFn, &LIBID_Lb34Task2ServerATLFNLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CMyFn()
	{
	}

DECLARE_REGISTRY_RESOURCEID(106)


BEGIN_COM_MAP(CMyFn)
	COM_INTERFACE_ENTRY(IMyFn)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
END_COM_MAP()

// ISupportsErrorInfo
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);


	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		return S_OK;
	}

	void FinalRelease()
	{
	}

public:
	STDMETHOD(Fun141)(INT x, INT y, DOUBLE* z);
	STDMETHOD(Fun142)(INT x, INT y, INT c, INT* z);
	STDMETHOD(Fun143)(DOUBLE in, DOUBLE* out);



};

OBJECT_ENTRY_AUTO(__uuidof(MyFn), CMyFn)
