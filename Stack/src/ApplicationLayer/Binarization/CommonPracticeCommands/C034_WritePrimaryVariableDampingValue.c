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

#include "C034_WritePrimaryVariableDampingValue.h"


uint8_t Compose_C034_WritePrimaryVariableDampingValue_Req(C034_WritePrimaryVariableDampingValue_Req* request,
		ComposerContext* context, BinaryStream* toStream)
{
	context->cmdId = CMDID_C034_WritePrimaryVariableDampingValue;

	STREAM_WRITE_FLOAT(toStream, request->value);
	return RCS_N00_Success;
}

uint8_t Parse_C034_WritePrimaryVariableDampingValue_Req(C034_WritePrimaryVariableDampingValue_Req* request,
		ParserContext* context, BinaryStream* fromStream)
{
	STREAM_READ_FLOAT(fromStream, &request->value);
	return RCS_N00_Success;
}

uint8_t Compose_C034_WritePrimaryVariableDampingValue_Resp(C034_WritePrimaryVariableDampingValue_Resp* response,
		ComposerContext* context, BinaryStream* toStream)
{
	context->cmdId = CMDID_C034_WritePrimaryVariableDampingValue;

	STREAM_WRITE_FLOAT(toStream, response->value);
	return RCS_N00_Success;
}

uint8_t Parse_C034_WritePrimaryVariableDampingValue_Resp(C034_WritePrimaryVariableDampingValue_Resp* response,
		ParserContext* context, BinaryStream* fromStream)
{
	STREAM_READ_FLOAT(fromStream, &response->value);
	return RCS_N00_Success;
}
