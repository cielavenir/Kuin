#pragma once

#include "..\common.h"

EXPORT_CPP SClass* _makeBigInt(SClass* me_);
EXPORT_CPP void _bigIntDtor(SClass* me_);
EXPORT_CPP S64 _bigIntCmp(SClass* me_, SClass* t);
EXPORT_CPP Bool _bigIntFromStr(SClass* me_, const void* value);
EXPORT_CPP void* _bigIntToStr(SClass* me_);
EXPORT_CPP void _bigIntFromInt(SClass* me_, S64 value);
EXPORT_CPP S64 _bigIntToInt(SClass* me_);
EXPORT_CPP SClass* _bigIntAdd(SClass* me_, SClass* value);
EXPORT_CPP SClass* _bigIntAddInt(SClass* me_, S64 value);
EXPORT_CPP SClass* _bigIntSub(SClass* me_, SClass* value);
EXPORT_CPP SClass* _bigIntSubInt(SClass* me_, S64 value);
EXPORT_CPP SClass* _bigIntMul(SClass* me_, SClass* value);
EXPORT_CPP SClass* _bigIntMulInt(SClass* me_, S64 value);
EXPORT_CPP SClass* _bigIntDiv(SClass* me_, SClass* value);
EXPORT_CPP SClass* _bigIntDivInt(SClass* me_, S64 value);
EXPORT_CPP SClass* _makeBigFloat(SClass* me_);
EXPORT_CPP void _bigFloatDtor(SClass* me_);
EXPORT_CPP S64 _bigFloatCmp(SClass* me_, SClass* t);
EXPORT_CPP Bool _bigFloatFromStr(SClass* me_, const void* value);
EXPORT_CPP void* _bigFloatToStr(SClass* me_);
EXPORT_CPP void _bigFloatFromFloat(SClass* me_, double value);
EXPORT_CPP double _bigFloatToFloat(SClass* me_);
EXPORT_CPP SClass* _bigFloatAdd(SClass* me_, SClass* value);
EXPORT_CPP SClass* _bigFloatAddFloat(SClass* me_, double value);
EXPORT_CPP SClass* _bigFloatSub(SClass* me_, SClass* value);
EXPORT_CPP SClass* _bigFloatSubFloat(SClass* me_, double value);
EXPORT_CPP SClass* _bigFloatMul(SClass* me_, SClass* value);
EXPORT_CPP SClass* _bigFloatMulFloat(SClass* me_, double value);
EXPORT_CPP SClass* _bigFloatDiv(SClass* me_, SClass* value);
EXPORT_CPP SClass* _bigFloatDivFloat(SClass* me_, double value);