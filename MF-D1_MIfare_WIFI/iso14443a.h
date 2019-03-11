/*
 * File Name: iso14443.h
 *
 * Description: Header file for all functions for iso14443.c
 *
 * Copyright (C) 2014 Texas Instruments Incorporated - http://www.ti.com/
 *
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions
 *  are met:
 *
 *    Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 *    Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the
 *    distribution.
 *
 *    Neither the name of Texas Instruments Incorporated nor the names of
 *    its contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 *  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 *  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 *  A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 *  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 *  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 *  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 *  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 *  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 *  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 *  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
*/

#ifndef _ISO14443A_H_
#define _ISO14443A_H_
//================================================================
#include "types.h"
//================================================================

#ifndef STATUS_SUCCESS
#define STATUS_SUCCESS		0x01
#endif

#ifndef STATUS_FAIL
#define	STATUS_FAIL		0x00
#endif


#define CID 			0x00

//RATS Defines
#define RATS_CMD		0xE0
#define RATS_PARAM		0x70

//ATS Defines
#define ATS_Length		0x06
#define ATS_T0			0x75
#define ATS_TA1			0x77
#define ATS_TB1			0x81
#define ATS_TC1			0x02

//PPS Defines
#define PPSS			0xD0
#define PPS0			0x11
#define PPS1_106		0x00
#define PPS1_212 		0x05
#define PPS1_424		0x0A
#define PPS1_848		0x0F

u08_t Iso14443aDFEV1GetAppId(u08_t ui8IpduBlockNumber);
u08_t Iso14443aDFEV1SelectApp(u08_t ui8IpduBlockNumber,  u08_t * puiAIDnum);
u08_t Iso14443aDFEV1GetFileId(u08_t ui8IpduBlockNumber);
u08_t Iso14443aDFEV1GetFileSetting(u08_t ui8IpduBlockNumber, u08_t ui8FileNumber);
u08_t Iso14443aDFEV1ReadData(u08_t ui8FileNumber, u08_t * pui8Offset, u08_t ui8Length, u08_t ui8IpduBlockNumber);
u08_t Iso14443aDFEV1WriteData(u08_t ui8FileNumber, u08_t * pui8Offset, u08_t ui8Length, u08_t ui8IpduBlockNumber, u08_t * puiTempAID);
//================================================================
#endif
