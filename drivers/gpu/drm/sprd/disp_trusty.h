/*
 * Copyright (C) 2018 Spreadtrum Communications Inc.
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef _DISP_TRUSTY_H_
#define _DISP_TRUSTY_H_

enum {
	DPU_LITE_R1P0 = 0,
	DPU_LITE_R2P0,
	DPU_LITE_R3P0,
	DPU_R2P0,
	DPU_R3P0,
	DPU_R4P0,
	DPU_R5P0,
	DPU_R6P0
};

enum disp_command {
	TA_REG_SET = 1,
	TA_REG_CLR,
	TA_FIREWALL_SET,
	TA_FIREWALL_CLR
};

struct disp_message {
	u16 version;
	u16 cmd;
};

int disp_ca_connect(void);
void disp_ca_disconnect(void);
ssize_t disp_ca_read(void *buf, size_t max_len);
ssize_t disp_ca_write(void *buf, size_t len);
int disp_ca_wait_response(void);
/*HS03 code for P220125-07187 by wenghailong at 20220217 start*/
void disp_ca_set_disconnect_state(void);
/*HS03 code for P220125-07187 by wenghailong at 20220217 end*/
#endif