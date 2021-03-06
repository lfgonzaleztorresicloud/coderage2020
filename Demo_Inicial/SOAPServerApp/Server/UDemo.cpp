// ************************************************************************ //
// Implementation class for interface ICodeRage2020
// ************************************************************************ //
#include <stdio.h>
#include <vcl.h>
#pragma hdrstop

#if !defined(__CodeRage2020_h__)
#include "UDemo.h"
#endif

// ************************************************************************ //
//  TCodeRage2020Impl implements interface ICodeRage2020
// ************************************************************************ //
class TCodeRage2020Impl : public TInvokableClass, public ICodeRage2020
{
public:
    /* Sample methods of ICodeRage2020 */
  SampleEnum           echoEnum(SampleEnum eValue);
  TDoubleArray         echoDoubleArray(const TDoubleArray daValue);
  TSampleStruct*       echoStruct(const TSampleStruct* pStruct);
  double               echoDouble(double dValue);
  TEmployeeStructArray getEmployees(void);

  /* IUnknown */
  HRESULT STDMETHODCALLTYPE QueryInterface(const GUID& IID, void **Obj)
                        { return GetInterface(IID, Obj) ? S_OK : E_NOINTERFACE; }
  ULONG STDMETHODCALLTYPE AddRef() { return TInvokableClass::_AddRef();  }
  ULONG STDMETHODCALLTYPE Release() { return TInvokableClass::_Release();  }
};


TEmployeeStructArray TCodeRage2020Impl::getEmployees(void)
{
    //return DmMain->GetEmployees();
}


SampleEnum TCodeRage2020Impl::echoEnum(SampleEnum eValue)
{
  /* TODO : Implement method echoEnum */
  return eValue;
}

TDoubleArray TCodeRage2020Impl::echoDoubleArray(TDoubleArray daValue)
{
  /* TODO : Implement method echoDoubleArray */
  return daValue;
}

TSampleStruct* TCodeRage2020Impl::echoStruct(const TSampleStruct* pEmployee)
{
  /* TODO : Implement method echoMyEmployee */
  return new TSampleStruct();
}

double TCodeRage2020Impl::echoDouble(const double dValue)
{
  /* TODO : Implement method echoDouble */
  return dValue;
}


static void __fastcall CodeRage2020Factory(System::TObject* &obj)
{
  static _di_ICodeRage2020 iInstance;
  static TCodeRage2020Impl *instance = 0;
  if (!instance)
  {
    instance = new TCodeRage2020Impl();
    instance->GetInterface(iInstance);
  }
  obj = instance;
}

// ************************************************************************ //
//  The following routine registers the interface and implementation class
//  as well as the type used by the methods of the interface
// ************************************************************************ //
static void RegTypes()
{
  InvRegistry()->RegisterInterface(__delphirtti(ICodeRage2020));
  InvRegistry()->RegisterInvokableClass(__classid(TCodeRage2020Impl), CodeRage2020Factory);
}
#pragma startup RegTypes 32

