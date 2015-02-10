//
// IRotaryEncoder.h
//
// Library: IoT/Devices
// Package: Generated
// Module:  IRotaryEncoder
//
// This file has been generated.
// Warning: All changes to this will be lost when the file is re-generated.
//
// Copyright (c) 2014-2015, Applied Informatics Software Engineering GmbH.
// All rights reserved.
// 
// SPDX-License-Identifier: Apache-2.0
//


#ifndef IoT_Devices_IRotaryEncoder_INCLUDED
#define IoT_Devices_IRotaryEncoder_INCLUDED


#include "IoT/Devices/IDevice.h"
#include "IoT/Devices/RotaryEncoder.h"
#include "Poco/RemotingNG/Listener.h"


namespace IoT {
namespace Devices {


class IRotaryEncoder: public IoT::Devices::IDevice
	/// A rotary encoder with an optional push button.
{
public:
	typedef Poco::AutoPtr<IRotaryEncoder> Ptr;

	IRotaryEncoder();
		/// Creates a IRotaryEncoder.

	virtual ~IRotaryEncoder();
		/// Destroys the IRotaryEncoder.

	virtual bool buttonState() const = 0;
		/// Returns the current state of the button.

	virtual Poco::Int32 count() const = 0;
		/// Returns the current value of the counter.

	bool isA(const std::type_info& otherType) const;
		/// Returns true if the class is a subclass of the class given by otherType.

	virtual void remoting__enableEvents(Poco::RemotingNG::Listener::Ptr pListener, bool enable = bool(true)) = 0;
		/// Enable or disable delivery of remote events.
		///
		/// The given Listener instance must implement the Poco::RemotingNG::EventListener
		/// interface, otherwise this method will fail with a RemotingException.
		///
		/// This method is only used with Proxy objects; calling this method on a
		/// RemoteObject will do nothing.

	static const Poco::RemotingNG::Identifiable::TypeId& remoting__typeId();
		/// Returns the TypeId of the class.

	virtual Poco::Int32 reset() = 0;
		/// Returns the current value of the counter and
		/// sets the counter to 0.

	const std::type_info& type() const;
		/// Returns the type information for the object's class.

	Poco::BasicEvent < const bool > buttonStateChanged;
	Poco::BasicEvent < const Poco::Int32 > countChanged;
};


} // namespace Devices
} // namespace IoT


#endif // IoT_Devices_IRotaryEncoder_INCLUDED

