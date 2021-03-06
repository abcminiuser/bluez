/* SPDX-License-Identifier: LGPL-2.1-or-later */
/*
 *
 *  BlueZ - Bluetooth protocol stack for Linux
 *
 *  Copyright (C) 2014  Intel Corporation. All rights reserved.
 *
 *
 */

bool bt_map_client_register(struct ipc *ipc, const bdaddr_t *addr,
								uint8_t mode);
void bt_map_client_unregister(void);
