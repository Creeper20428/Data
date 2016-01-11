//	VMachine
//	Code segment register functions
//
//	Copyright (c) 2006, Paul Baker
//	Distributed under the New BSD Licence. (See accompanying file License.txt or copy at
//	http://www.paulsprojects.net/NewBSDLicense.txt)

#include "Root.h"
#include "../../x86Constants.h"
#include "../../Registers.h"
#include "../SegmentRegister.h"
#include "CodeSegmentRegister.h"

bool CodeSegmentRegister::VerifyByteRead(Dword offset, Dword & linAddr) const
{
	//TODO: Expand down segments
/*	if(offset > data.limit)
	{
		registers->exception = EXCEPTION_GENERAL_PROTECTION;
		registers->errorCode = 0;
		return false;
	}
*/
	linAddr = data.base + offset;

	return true;
}

bool CodeSegmentRegister::VerifyWordRead(Dword offset, Dword & linAddr) const
{
/*	if(offset > data.limit - 1)
	{
		registers->exception = EXCEPTION_GENERAL_PROTECTION;
		registers->errorCode = 0;
		return false;
	}
*/
	linAddr = data.base + offset;

	return true;
}

bool CodeSegmentRegister::VerifyDwordRead(Dword offset, Dword & linAddr) const
{
/*	if(offset > data.limit - 3)
	{
		registers->exception = EXCEPTION_GENERAL_PROTECTION;
		registers->errorCode = 0;
		return false;
	}
*/
	linAddr = data.base + offset;

	return true;
}

bool CodeSegmentRegister::VerifyByteWrite(Dword offset, Dword & linAddr) const
{
/*	if(offset > data.limit)
	{
		registers->exception = EXCEPTION_GENERAL_PROTECTION;
		registers->errorCode = 0;
		return false;
	}
*/
	linAddr = data.base + offset;

	return true;
}

bool CodeSegmentRegister::VerifyWordWrite(Dword offset, Dword & linAddr) const
{
/*	if(offset > data.limit - 1)
	{
		registers->exception = EXCEPTION_GENERAL_PROTECTION;
		registers->errorCode = 0;
		return false;
	}
*/
	linAddr = data.base + offset;

	return true;
}

bool CodeSegmentRegister::VerifyDwordWrite(Dword offset, Dword & linAddr) const
{
/*	if(offset > data.limit - 3)
	{
		registers->exception = EXCEPTION_GENERAL_PROTECTION;
		registers->errorCode = 0;
		return false;
	}
*/
	linAddr = data.base + offset;

	return true;
}
