

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Tue Jan 19 06:14:07 2038
 */
/* Compiler settings for Lb34Task2ServerATLFN.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0628 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __Lb34Task2ServerATLFN_i_h__
#define __Lb34Task2ServerATLFN_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifndef DECLSPEC_XFGVIRT
#if defined(_CONTROL_FLOW_GUARD_XFG)
#define DECLSPEC_XFGVIRT(base, func) __declspec(xfg_virtual(base, func))
#else
#define DECLSPEC_XFGVIRT(base, func)
#endif
#endif

/* Forward Declarations */ 

#ifndef __IMyFn_FWD_DEFINED__
#define __IMyFn_FWD_DEFINED__
typedef interface IMyFn IMyFn;

#endif 	/* __IMyFn_FWD_DEFINED__ */


#ifndef __MyFn_FWD_DEFINED__
#define __MyFn_FWD_DEFINED__

#ifdef __cplusplus
typedef class MyFn MyFn;
#else
typedef struct MyFn MyFn;
#endif /* __cplusplus */

#endif 	/* __MyFn_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "shobjidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IMyFn_INTERFACE_DEFINED__
#define __IMyFn_INTERFACE_DEFINED__

/* interface IMyFn */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IMyFn;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("45027e73-eb34-4a88-9980-26dfff2c20b4")
    IMyFn : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Fun141( 
            /* [in] */ INT x,
            /* [in] */ INT y,
            /* [retval][out] */ DOUBLE *z) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Fun142( 
            /* [in] */ INT x,
            /* [in] */ INT y,
            /* [in] */ INT c,
            /* [retval][out] */ INT *z) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Fun143( 
            /* [in] */ DOUBLE in,
            /* [retval][out] */ DOUBLE *out) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMyFnVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMyFn * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMyFn * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMyFn * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMyFn * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMyFn * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMyFn * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMyFn * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IMyFn, Fun141)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Fun141 )( 
            IMyFn * This,
            /* [in] */ INT x,
            /* [in] */ INT y,
            /* [retval][out] */ DOUBLE *z);
        
        DECLSPEC_XFGVIRT(IMyFn, Fun142)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Fun142 )( 
            IMyFn * This,
            /* [in] */ INT x,
            /* [in] */ INT y,
            /* [in] */ INT c,
            /* [retval][out] */ INT *z);
        
        DECLSPEC_XFGVIRT(IMyFn, Fun143)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Fun143 )( 
            IMyFn * This,
            /* [in] */ DOUBLE in,
            /* [retval][out] */ DOUBLE *out);
        
        END_INTERFACE
    } IMyFnVtbl;

    interface IMyFn
    {
        CONST_VTBL struct IMyFnVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMyFn_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMyFn_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMyFn_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMyFn_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMyFn_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMyFn_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMyFn_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMyFn_Fun141(This,x,y,z)	\
    ( (This)->lpVtbl -> Fun141(This,x,y,z) ) 

#define IMyFn_Fun142(This,x,y,c,z)	\
    ( (This)->lpVtbl -> Fun142(This,x,y,c,z) ) 

#define IMyFn_Fun143(This,in,out)	\
    ( (This)->lpVtbl -> Fun143(This,in,out) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMyFn_INTERFACE_DEFINED__ */



#ifndef __Lb34Task2ServerATLFNLib_LIBRARY_DEFINED__
#define __Lb34Task2ServerATLFNLib_LIBRARY_DEFINED__

/* library Lb34Task2ServerATLFNLib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_Lb34Task2ServerATLFNLib;

EXTERN_C const CLSID CLSID_MyFn;

#ifdef __cplusplus

class DECLSPEC_UUID("0f1cdf4b-a1c1-4eea-9591-1603887420f5")
MyFn;
#endif
#endif /* __Lb34Task2ServerATLFNLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


