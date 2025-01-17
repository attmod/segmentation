/*
 * SPDX-FileCopyrightText: 2006-2021 Istituto Italiano di Tecnologia (IIT)
 * SPDX-License-Identifier: BSD-3-Clause
 */

// Autogenerated by Thrift Compiler (0.14.1-yarped)
//
// This is an automatically generated file.
// It could get re-generated if the ALLOW_IDL_GENERATION flag is on.

#ifndef YARP_THRIFT_GENERATOR_STRUCT_PIXEL_H
#define YARP_THRIFT_GENERATOR_STRUCT_PIXEL_H

#include <yarp/os/Wire.h>
#include <yarp/os/idl/WireTypes.h>

namespace yarp::sig {

/**
 * Pixel position in the image frame
 */
class Pixel :
        public yarp::os::idl::WirePortable
{
public:
    // Fields
    /**
     * Index of pixel along horizontal axis
     */
    std::int32_t x{0};
    /**
     * Index of pixel along vertical axis
     */
    std::int32_t y{0};

    // Default constructor
    Pixel() = default;

    // Constructor with field values
    Pixel(const std::int32_t x,
          const std::int32_t y);

    // Read structure on a Wire
    bool read(yarp::os::idl::WireReader& reader) override;

    // Read structure on a Connection
    bool read(yarp::os::ConnectionReader& connection) override;

    // Write structure on a Wire
    bool write(const yarp::os::idl::WireWriter& writer) const override;

    // Write structure on a Connection
    bool write(yarp::os::ConnectionWriter& connection) const override;

    // Convert to a printable string
    std::string toString() const;

    // If you want to serialize this class without nesting, use this helper
    typedef yarp::os::idl::Unwrapped<Pixel> unwrapped;

private:
    // read/write x field
    bool read_x(yarp::os::idl::WireReader& reader);
    bool write_x(const yarp::os::idl::WireWriter& writer) const;
    bool nested_read_x(yarp::os::idl::WireReader& reader);
    bool nested_write_x(const yarp::os::idl::WireWriter& writer) const;

    // read/write y field
    bool read_y(yarp::os::idl::WireReader& reader);
    bool write_y(const yarp::os::idl::WireWriter& writer) const;
    bool nested_read_y(yarp::os::idl::WireReader& reader);
    bool nested_write_y(const yarp::os::idl::WireWriter& writer) const;
};

} // namespace yarp::sig

#endif // YARP_THRIFT_GENERATOR_STRUCT_PIXEL_H
