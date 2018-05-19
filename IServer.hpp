/*
 * Copyright (c) 2018 Guo Xiang
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, version 3.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __ISERVER_HPP__
#define __ISERVER_HPP__

#include <IIo/IIo.hpp>

DEFINE_INTERFACE(Server);

DEFINE_FUNC(OnConnect, void(const IIoPtr &));
DEFINE_FUNC(OnServerDie, void(void));

class IServer
{
public:
	IServer(void) {}
	virtual ~IServer(void) {}

	virtual void Start(const OnConnectFn &onConnect,
					   const OnServerDieFn &onDie) = 0;
	virtual void Stop(void) = 0;
};

#endif /* __ISERVER_HPP__ */

