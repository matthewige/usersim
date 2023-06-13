// Copyright (c) Microsoft Corporation
// SPDX-License-Identifier: MIT

#pragma once
#include "platform.h"

#if defined(__cplusplus)
extern "C"
{
#endif

	HANDLE
    PsGetCurrentProcessId();

    _IRQL_requires_max_(DISPATCH_LEVEL) NTKERNELAPI HANDLE PsGetCurrentThreadId();

#if defined(__cplusplus)
}
#endif