/*===========================================================================
*
*                            PUBLIC DOMAIN NOTICE
*               National Center for Biotechnology Information
*
*  This software/database is a "United States Government Work" under the
*  terms of the United States Copyright Act.  It was written as part of
*  the author's official duties as a United States Government employee and
*  thus cannot be copyrighted.  This software/database is freely available
*  to the public for use. The National Library of Medicine and the U.S.
*  Government have not placed any restriction on its use or reproduction.
*
*  Although all reasonable efforts have been taken to ensure the accuracy
*  and reliability of the software and data, the NLM and the U.S.
*  Government do not and cannot warrant the performance or results that
*  may be obtained by using this software or data. The NLM and the U.S.
*  Government disclaim all warranties, express or implied, including
*  warranties of performance, merchantability or fitness for any particular
*  purpose.
*
*  Please cite the author in any work or product based on this material.
*
* ===========================================================================
*
*/

#include "py_StatisticsItf.h"
#include "py_ErrorMsg.hpp"

#include <ngs/itf/StatisticsItf.hpp>

GEN_PY_FUNC_GET_BY_PARAMS_1                ( Statistics, ValueType, uint32_t, char const*, path )
GEN_PY_FUNC_GET_STRING_BY_PARAMS_1         ( Statistics, AsString, char const*, path )
GEN_PY_FUNC_GET_BY_PARAMS_1                ( Statistics, AsI64,     int64_t, char const*, path )
GEN_PY_FUNC_GET_BY_PARAMS_1                ( Statistics, AsU64,     uint64_t, char const*, path )
GEN_PY_FUNC_GET_BY_PARAMS_1                ( Statistics, AsDouble,  double, char const*, path )
GEN_PY_FUNC_GET_BY_PARAMS_1_EXPLICIT_NAMES ( Statistics, ngs::StringItf*, char const*, path, PY_NGS_StatisticsGetNextPath, nextPath )
