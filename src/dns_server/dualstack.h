/*************************************************************************
 *
 * Copyright (C) 2018-2025 Ruilin Peng (Nick) <pymumu@gmail.com>.
 *
 * smartdns is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * smartdns is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _DNS_SERVER_DUALSTACK_
#define _DNS_SERVER_DUALSTACK_

#include "dns_server.h"

#ifdef __cplusplus
extern "C" {
#endif /*__cplusplus */

extern int is_ipv6_ready;

int _dns_server_force_dualstack(struct dns_request *request);

void _dns_server_set_dualstack_selection(struct dns_request *request);

int _dns_server_query_dualstack(struct dns_request *request);

#ifdef __cplusplus
}
#endif /*__cplusplus */
#endif
