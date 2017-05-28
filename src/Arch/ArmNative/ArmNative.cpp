// ArmNative.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "reko.h"
#include "ArmRewriter.h"

extern "C" {
	
	INativeRewriter * DLLEXPORT 
		CreateNativeRewriter(
			const uint8_t * rawBytes,
			uint32_t length,	
			uint32_t offset, 
			uint64_t address, 
			IRtlNativeEmitter * m,
			INativeRewriterHost * host)
	{
		return new ArmRewriter(rawBytes + offset, length - offset, address, m, host);
	}
}