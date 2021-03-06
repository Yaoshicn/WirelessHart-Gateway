/*
* Copyright (C) 2013 Nivis LLC.
* Email:   opensource@nivis.com
* Website: http://www.nivis.com
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, version 3 of the License.
* 
* Redistribution and use in source and binary forms must retain this
* copyright notice.

* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program.  If not, see <http://www.gnu.org/licenses/>.
*
*/

#include "C076_ReadLockDeviceState.h"

uint8_t Compose_C076_ReadLockDeviceState_Req(C076_ReadLockDeviceState_Req* request, ComposerContext* context,
		BinaryStream* toStream)
{
	context->cmdId = CMDID_C076_ReadLockDeviceState;

	return RCS_N00_Success;
}

uint8_t Parse_C076_ReadLockDeviceState_Req(C076_ReadLockDeviceState_Req* request, ParserContext* context,
		BinaryStream* fromStream)
{
	return RCS_N00_Success;
}

uint8_t Compose_C076_ReadLockDeviceState_Resp(C076_ReadLockDeviceState_Resp* response, ComposerContext* context,
		BinaryStream* toStream)
{
	context->cmdId = CMDID_C076_ReadLockDeviceState;
	STREAM_WRITE_UINT8(toStream, response->lockStatus);
	return RCS_N00_Success;
}

uint8_t Parse_C076_ReadLockDeviceState_Resp(C076_ReadLockDeviceState_Resp* response, ParserContext* context,
		BinaryStream* fromStream)
{
	STREAM_READ_UINT8(fromStream, &response->lockStatus);
	return RCS_N00_Success;
}
