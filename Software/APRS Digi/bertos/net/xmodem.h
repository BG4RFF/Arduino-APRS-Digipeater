/**
 * \file
 * <!--
 * This file is part of BeRTOS.
 *
 * Bertos is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 *
 * As a special exception, you may use this file as part of a free software
 * library without restriction.  Specifically, if other files instantiate
 * templates or use macros or inline functions from this file, or you compile
 * this file and link it with other files to produce an executable, this
 * file does not by itself cause the resulting executable to be covered by
 * the GNU General Public License.  This exception does not however
 * invalidate any other reasons why the executable file might be covered by
 * the GNU General Public License.
 *
 * Copyright 2004 Develer S.r.l. (http://www.develer.com/)
 * Copyright 1999, 2001 Bernie Innocenti <bernie@codewiz.org>
 *
 * -->
 * \brief X-Modem serial transmission protocol.
 *
 * \author Bernie Innocenti <bernie@codewiz.org>
 * \author Francesco Sacchi <batt@develer.com>
 *
 * $WIZ$ module_name = "xmodem"
 * $WIZ$ module_depends = "kfile", "crc16"
 * $WIZ$ module_configuration = "bertos/cfg/cfg_xmodem.h"
 */


#ifndef NET_XMODEM_H
#define NET_XMODEM_H

#include <cfg/compiler.h>
#include <io/kfile.h>

/**
 * Called to know if we want to abort data tranfer.
 * Redefine to whatever you need.
 * \{
 */
#ifndef XMODEM_CHECK_ABORT
#define XMODEM_CHECK_ABORT (false)
#endif
/*\}*/

bool xmodem_recv(KFile *ch, KFile *fd);
bool xmodem_send(KFile *ch, KFile *fd);

#endif /* NET_XMODEM_H */
