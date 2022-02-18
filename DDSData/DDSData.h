// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/*!
 * @file DDSData.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifndef _DDSDATA_H_
#define _DDSDATA_H_


#include <stdint.h>
#include <array>
#include <string>
#include <vector>
#include <map>
#include <bitset>

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#define eProsima_user_DllExport __declspec( dllexport )
#else
#define eProsima_user_DllExport
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define eProsima_user_DllExport
#endif  // _WIN32

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#if defined(DDSData_SOURCE)
#define DDSData_DllAPI __declspec( dllexport )
#else
#define DDSData_DllAPI __declspec( dllimport )
#endif // DDSData_SOURCE
#else
#define DDSData_DllAPI
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define DDSData_DllAPI
#endif // _WIN32

namespace eprosima {
namespace fastcdr {
class Cdr;
} // namespace fastcdr
} // namespace eprosima

namespace scada_ate
{
    namespace typetopics
    {
        void SetMaxSizeDataCollectionInt(size_t size);
        void SetMaxSizeDataCollectionFloat(size_t size);
        void SetMaxSizeDataCollectionDouble(size_t size);
        void SetMaxSizeDataCollectionChar(size_t size);
        void SetMaxSizeDataChar(size_t size);

        size_t GetMaxSizeDataCollectionInt();
        size_t GetMaxDataCollectionFloat();
        size_t GetMaxSizeDataCollectionDouble();
        size_t GetMaxSizeDataCollectionChar();
        size_t SetMaxSizeDataChar();

    }
}

/*!
 * @brief This class represents the structure DataCollectionInt defined by the user in the IDL file.
 * @ingroup DDSDATA
 */
class DataCollectionInt
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport DataCollectionInt();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~DataCollectionInt();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object DataCollectionInt that will be copied.
     */
    eProsima_user_DllExport DataCollectionInt(
            const DataCollectionInt& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object DataCollectionInt that will be copied.
     */
    eProsima_user_DllExport DataCollectionInt(
            DataCollectionInt&& x);

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object DataCollectionInt that will be copied.
     */
    eProsima_user_DllExport DataCollectionInt& operator =(
            const DataCollectionInt& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object DataCollectionInt that will be copied.
     */
    eProsima_user_DllExport DataCollectionInt& operator =(
            DataCollectionInt&& x);

    /*!
     * @brief This function copies the value in member value
     * @param _value New value to be copied in member value
     */
    eProsima_user_DllExport void value(
            const std::vector<int32_t>& _value);

    /*!
     * @brief This function moves the value in member value
     * @param _value New value to be moved in member value
     */
    eProsima_user_DllExport void value(
            std::vector<int32_t>&& _value);

    /*!
     * @brief This function returns a constant reference to member value
     * @return Constant reference to member value
     */
    eProsima_user_DllExport const std::vector<int32_t>& value() const;

    /*!
     * @brief This function returns a reference to member value
     * @return Reference to member value
     */
    eProsima_user_DllExport std::vector<int32_t>& value();
    /*!
     * @brief This function copies the value in member quality
     * @param _quality New value to be copied in member quality
     */
    eProsima_user_DllExport void quality(
            const std::vector<char>& _quality);

    /*!
     * @brief This function moves the value in member quality
     * @param _quality New value to be moved in member quality
     */
    eProsima_user_DllExport void quality(
            std::vector<char>&& _quality);

    /*!
     * @brief This function returns a constant reference to member quality
     * @return Constant reference to member quality
     */
    eProsima_user_DllExport const std::vector<char>& quality() const;

    /*!
     * @brief This function returns a reference to member quality
     * @return Reference to member quality
     */
    eProsima_user_DllExport std::vector<char>& quality();

    /*!
     * @brief This function returns the maximum serialized size of an object
     * depending on the buffer alignment.
     * @param current_alignment Buffer alignment.
     * @return Maximum serialized size.
     */
    eProsima_user_DllExport static size_t getMaxCdrSerializedSize(
            size_t current_alignment = 0);

    /*!
     * @brief This function returns the serialized size of a data depending on the buffer alignment.
     * @param data Data which is calculated its serialized size.
     * @param current_alignment Buffer alignment.
     * @return Serialized size.
     */
    eProsima_user_DllExport static size_t getCdrSerializedSize(
            const DataCollectionInt& data,
            size_t current_alignment = 0);


    /*!
     * @brief This function serializes an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    eProsima_user_DllExport void serialize(
            eprosima::fastcdr::Cdr& cdr) const;

    /*!
     * @brief This function deserializes an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    eProsima_user_DllExport void deserialize(
            eprosima::fastcdr::Cdr& cdr);



    /*!
     * @brief This function returns the maximum serialized size of the Key of an object
     * depending on the buffer alignment.
     * @param current_alignment Buffer alignment.
     * @return Maximum serialized size.
     */
    eProsima_user_DllExport static size_t getKeyMaxCdrSerializedSize(
            size_t current_alignment = 0);

    /*!
     * @brief This function tells you if the Key has been defined for this type
     */
    eProsima_user_DllExport static bool isKeyDefined();

    /*!
     * @brief This function serializes the key members of an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    eProsima_user_DllExport void serializeKey(
            eprosima::fastcdr::Cdr& cdr) const;

private:

    std::vector<int32_t> m_value;
    std::vector<char> m_quality;
};
/*!
 * @brief This class represents the structure DataCollectionFloat defined by the user in the IDL file.
 * @ingroup DDSDATA
 */
class DataCollectionFloat
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport DataCollectionFloat();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~DataCollectionFloat();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object DataCollectionFloat that will be copied.
     */
    eProsima_user_DllExport DataCollectionFloat(
            const DataCollectionFloat& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object DataCollectionFloat that will be copied.
     */
    eProsima_user_DllExport DataCollectionFloat(
            DataCollectionFloat&& x);

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object DataCollectionFloat that will be copied.
     */
    eProsima_user_DllExport DataCollectionFloat& operator =(
            const DataCollectionFloat& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object DataCollectionFloat that will be copied.
     */
    eProsima_user_DllExport DataCollectionFloat& operator =(
            DataCollectionFloat&& x);

    /*!
     * @brief This function copies the value in member value
     * @param _value New value to be copied in member value
     */
    eProsima_user_DllExport void value(
            const std::vector<float>& _value);

    /*!
     * @brief This function moves the value in member value
     * @param _value New value to be moved in member value
     */
    eProsima_user_DllExport void value(
            std::vector<float>&& _value);

    /*!
     * @brief This function returns a constant reference to member value
     * @return Constant reference to member value
     */
    eProsima_user_DllExport const std::vector<float>& value() const;

    /*!
     * @brief This function returns a reference to member value
     * @return Reference to member value
     */
    eProsima_user_DllExport std::vector<float>& value();
    /*!
     * @brief This function copies the value in member quality
     * @param _quality New value to be copied in member quality
     */
    eProsima_user_DllExport void quality(
            const std::vector<char>& _quality);

    /*!
     * @brief This function moves the value in member quality
     * @param _quality New value to be moved in member quality
     */
    eProsima_user_DllExport void quality(
            std::vector<char>&& _quality);

    /*!
     * @brief This function returns a constant reference to member quality
     * @return Constant reference to member quality
     */
    eProsima_user_DllExport const std::vector<char>& quality() const;

    /*!
     * @brief This function returns a reference to member quality
     * @return Reference to member quality
     */
    eProsima_user_DllExport std::vector<char>& quality();

    /*!
     * @brief This function returns the maximum serialized size of an object
     * depending on the buffer alignment.
     * @param current_alignment Buffer alignment.
     * @return Maximum serialized size.
     */
    eProsima_user_DllExport static size_t getMaxCdrSerializedSize(
            size_t current_alignment = 0);

    /*!
     * @brief This function returns the serialized size of a data depending on the buffer alignment.
     * @param data Data which is calculated its serialized size.
     * @param current_alignment Buffer alignment.
     * @return Serialized size.
     */
    eProsima_user_DllExport static size_t getCdrSerializedSize(
            const DataCollectionFloat& data,
            size_t current_alignment = 0);


    /*!
     * @brief This function serializes an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    eProsima_user_DllExport void serialize(
            eprosima::fastcdr::Cdr& cdr) const;

    /*!
     * @brief This function deserializes an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    eProsima_user_DllExport void deserialize(
            eprosima::fastcdr::Cdr& cdr);



    /*!
     * @brief This function returns the maximum serialized size of the Key of an object
     * depending on the buffer alignment.
     * @param current_alignment Buffer alignment.
     * @return Maximum serialized size.
     */
    eProsima_user_DllExport static size_t getKeyMaxCdrSerializedSize(
            size_t current_alignment = 0);

    /*!
     * @brief This function tells you if the Key has been defined for this type
     */
    eProsima_user_DllExport static bool isKeyDefined();

    /*!
     * @brief This function serializes the key members of an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    eProsima_user_DllExport void serializeKey(
            eprosima::fastcdr::Cdr& cdr) const;

private:

    std::vector<float> m_value;
    std::vector<char> m_quality;
};
/*!
 * @brief This class represents the structure DataCollectionDouble defined by the user in the IDL file.
 * @ingroup DDSDATA
 */
class DataCollectionDouble
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport DataCollectionDouble();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~DataCollectionDouble();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object DataCollectionDouble that will be copied.
     */
    eProsima_user_DllExport DataCollectionDouble(
            const DataCollectionDouble& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object DataCollectionDouble that will be copied.
     */
    eProsima_user_DllExport DataCollectionDouble(
            DataCollectionDouble&& x);

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object DataCollectionDouble that will be copied.
     */
    eProsima_user_DllExport DataCollectionDouble& operator =(
            const DataCollectionDouble& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object DataCollectionDouble that will be copied.
     */
    eProsima_user_DllExport DataCollectionDouble& operator =(
            DataCollectionDouble&& x);

    /*!
     * @brief This function copies the value in member value
     * @param _value New value to be copied in member value
     */
    eProsima_user_DllExport void value(
            const std::vector<double>& _value);

    /*!
     * @brief This function moves the value in member value
     * @param _value New value to be moved in member value
     */
    eProsima_user_DllExport void value(
            std::vector<double>&& _value);

    /*!
     * @brief This function returns a constant reference to member value
     * @return Constant reference to member value
     */
    eProsima_user_DllExport const std::vector<double>& value() const;

    /*!
     * @brief This function returns a reference to member value
     * @return Reference to member value
     */
    eProsima_user_DllExport std::vector<double>& value();
    /*!
     * @brief This function copies the value in member quality
     * @param _quality New value to be copied in member quality
     */
    eProsima_user_DllExport void quality(
            const std::vector<char>& _quality);

    /*!
     * @brief This function moves the value in member quality
     * @param _quality New value to be moved in member quality
     */
    eProsima_user_DllExport void quality(
            std::vector<char>&& _quality);

    /*!
     * @brief This function returns a constant reference to member quality
     * @return Constant reference to member quality
     */
    eProsima_user_DllExport const std::vector<char>& quality() const;

    /*!
     * @brief This function returns a reference to member quality
     * @return Reference to member quality
     */
    eProsima_user_DllExport std::vector<char>& quality();

    /*!
     * @brief This function returns the maximum serialized size of an object
     * depending on the buffer alignment.
     * @param current_alignment Buffer alignment.
     * @return Maximum serialized size.
     */
    eProsima_user_DllExport static size_t getMaxCdrSerializedSize(
            size_t current_alignment = 0);

    /*!
     * @brief This function returns the serialized size of a data depending on the buffer alignment.
     * @param data Data which is calculated its serialized size.
     * @param current_alignment Buffer alignment.
     * @return Serialized size.
     */
    eProsima_user_DllExport static size_t getCdrSerializedSize(
            const DataCollectionDouble& data,
            size_t current_alignment = 0);


    /*!
     * @brief This function serializes an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    eProsima_user_DllExport void serialize(
            eprosima::fastcdr::Cdr& cdr) const;

    /*!
     * @brief This function deserializes an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    eProsima_user_DllExport void deserialize(
            eprosima::fastcdr::Cdr& cdr);



    /*!
     * @brief This function returns the maximum serialized size of the Key of an object
     * depending on the buffer alignment.
     * @param current_alignment Buffer alignment.
     * @return Maximum serialized size.
     */
    eProsima_user_DllExport static size_t getKeyMaxCdrSerializedSize(
            size_t current_alignment = 0);

    /*!
     * @brief This function tells you if the Key has been defined for this type
     */
    eProsima_user_DllExport static bool isKeyDefined();

    /*!
     * @brief This function serializes the key members of an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    eProsima_user_DllExport void serializeKey(
            eprosima::fastcdr::Cdr& cdr) const;

private:

    std::vector<double> m_value;
    std::vector<char> m_quality;
};
/*!
 * @brief This class represents the structure DataChar defined by the user in the IDL file.
 * @ingroup DDSDATA
 */
class DataChar
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport DataChar();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~DataChar();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object DataChar that will be copied.
     */
    eProsima_user_DllExport DataChar(
            const DataChar& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object DataChar that will be copied.
     */
    eProsima_user_DllExport DataChar(
            DataChar&& x);

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object DataChar that will be copied.
     */
    eProsima_user_DllExport DataChar& operator =(
            const DataChar& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object DataChar that will be copied.
     */
    eProsima_user_DllExport DataChar& operator =(
            DataChar&& x);

    /*!
     * @brief This function copies the value in member value
     * @param _value New value to be copied in member value
     */
    eProsima_user_DllExport void value(
            const std::vector<char>& _value);

    /*!
     * @brief This function moves the value in member value
     * @param _value New value to be moved in member value
     */
    eProsima_user_DllExport void value(
            std::vector<char>&& _value);

    /*!
     * @brief This function returns a constant reference to member value
     * @return Constant reference to member value
     */
    eProsima_user_DllExport const std::vector<char>& value() const;

    /*!
     * @brief This function returns a reference to member value
     * @return Reference to member value
     */
    eProsima_user_DllExport std::vector<char>& value();

    /*!
     * @brief This function returns the maximum serialized size of an object
     * depending on the buffer alignment.
     * @param current_alignment Buffer alignment.
     * @return Maximum serialized size.
     */
    eProsima_user_DllExport static size_t getMaxCdrSerializedSize(
            size_t current_alignment = 0);

    /*!
     * @brief This function returns the serialized size of a data depending on the buffer alignment.
     * @param data Data which is calculated its serialized size.
     * @param current_alignment Buffer alignment.
     * @return Serialized size.
     */
    eProsima_user_DllExport static size_t getCdrSerializedSize(
            const DataChar& data,
            size_t current_alignment = 0);


    /*!
     * @brief This function serializes an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    eProsima_user_DllExport void serialize(
            eprosima::fastcdr::Cdr& cdr) const;

    /*!
     * @brief This function deserializes an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    eProsima_user_DllExport void deserialize(
            eprosima::fastcdr::Cdr& cdr);



    /*!
     * @brief This function returns the maximum serialized size of the Key of an object
     * depending on the buffer alignment.
     * @param current_alignment Buffer alignment.
     * @return Maximum serialized size.
     */
    eProsima_user_DllExport static size_t getKeyMaxCdrSerializedSize(
            size_t current_alignment = 0);

    /*!
     * @brief This function tells you if the Key has been defined for this type
     */
    eProsima_user_DllExport static bool isKeyDefined();

    /*!
     * @brief This function serializes the key members of an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    eProsima_user_DllExport void serializeKey(
            eprosima::fastcdr::Cdr& cdr) const;

private:

    std::vector<char> m_value;
};
/*!
 * @brief This class represents the structure DataCollectionChar defined by the user in the IDL file.
 * @ingroup DDSDATA
 */
class DataCollectionChar
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport DataCollectionChar();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~DataCollectionChar();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object DataCollectionChar that will be copied.
     */
    eProsima_user_DllExport DataCollectionChar(
            const DataCollectionChar& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object DataCollectionChar that will be copied.
     */
    eProsima_user_DllExport DataCollectionChar(
            DataCollectionChar&& x);

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object DataCollectionChar that will be copied.
     */
    eProsima_user_DllExport DataCollectionChar& operator =(
            const DataCollectionChar& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object DataCollectionChar that will be copied.
     */
    eProsima_user_DllExport DataCollectionChar& operator =(
            DataCollectionChar&& x);

    /*!
     * @brief This function copies the value in member value
     * @param _value New value to be copied in member value
     */
    eProsima_user_DllExport void value(
            const std::vector<DataChar>& _value);

    /*!
     * @brief This function moves the value in member value
     * @param _value New value to be moved in member value
     */
    eProsima_user_DllExport void value(
            std::vector<DataChar>&& _value);

    /*!
     * @brief This function returns a constant reference to member value
     * @return Constant reference to member value
     */
    eProsima_user_DllExport const std::vector<DataChar>& value() const;

    /*!
     * @brief This function returns a reference to member value
     * @return Reference to member value
     */
    eProsima_user_DllExport std::vector<DataChar>& value();
    /*!
     * @brief This function copies the value in member quality
     * @param _quality New value to be copied in member quality
     */
    eProsima_user_DllExport void quality(
            const std::vector<char>& _quality);

    /*!
     * @brief This function moves the value in member quality
     * @param _quality New value to be moved in member quality
     */
    eProsima_user_DllExport void quality(
            std::vector<char>&& _quality);

    /*!
     * @brief This function returns a constant reference to member quality
     * @return Constant reference to member quality
     */
    eProsima_user_DllExport const std::vector<char>& quality() const;

    /*!
     * @brief This function returns a reference to member quality
     * @return Reference to member quality
     */
    eProsima_user_DllExport std::vector<char>& quality();

    /*!
     * @brief This function returns the maximum serialized size of an object
     * depending on the buffer alignment.
     * @param current_alignment Buffer alignment.
     * @return Maximum serialized size.
     */
    eProsima_user_DllExport static size_t getMaxCdrSerializedSize(
            size_t current_alignment = 0);

    /*!
     * @brief This function returns the serialized size of a data depending on the buffer alignment.
     * @param data Data which is calculated its serialized size.
     * @param current_alignment Buffer alignment.
     * @return Serialized size.
     */
    eProsima_user_DllExport static size_t getCdrSerializedSize(
            const DataCollectionChar& data,
            size_t current_alignment = 0);


    /*!
     * @brief This function serializes an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    eProsima_user_DllExport void serialize(
            eprosima::fastcdr::Cdr& cdr) const;

    /*!
     * @brief This function deserializes an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    eProsima_user_DllExport void deserialize(
            eprosima::fastcdr::Cdr& cdr);



    /*!
     * @brief This function returns the maximum serialized size of the Key of an object
     * depending on the buffer alignment.
     * @param current_alignment Buffer alignment.
     * @return Maximum serialized size.
     */
    eProsima_user_DllExport static size_t getKeyMaxCdrSerializedSize(
            size_t current_alignment = 0);

    /*!
     * @brief This function tells you if the Key has been defined for this type
     */
    eProsima_user_DllExport static bool isKeyDefined();

    /*!
     * @brief This function serializes the key members of an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    eProsima_user_DllExport void serializeKey(
            eprosima::fastcdr::Cdr& cdr) const;

private:

    std::vector<DataChar> m_value;
    std::vector<char> m_quality;
};
/*!
 * @brief This class represents the structure DDSData defined by the user in the IDL file.
 * @ingroup DDSDATA
 */
class DDSData
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport DDSData();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~DDSData();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object DDSData that will be copied.
     */
    eProsima_user_DllExport DDSData(
            const DDSData& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object DDSData that will be copied.
     */
    eProsima_user_DllExport DDSData(
            DDSData&& x);

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object DDSData that will be copied.
     */
    eProsima_user_DllExport DDSData& operator =(
            const DDSData& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object DDSData that will be copied.
     */
    eProsima_user_DllExport DDSData& operator =(
            DDSData&& x);

    /*!
     * @brief This function sets a value in member time_source
     * @param _time_source New value for member time_source
     */
    eProsima_user_DllExport void time_source(
            int64_t _time_source);

    /*!
     * @brief This function returns the value of member time_source
     * @return Value of member time_source
     */
    eProsima_user_DllExport int64_t time_source() const;

    /*!
     * @brief This function returns a reference to member time_source
     * @return Reference to member time_source
     */
    eProsima_user_DllExport int64_t& time_source();

    /*!
     * @brief This function sets a value in member time_service
     * @param _time_service New value for member time_service
     */
    eProsima_user_DllExport void time_service(
            int64_t _time_service);

    /*!
     * @brief This function returns the value of member time_service
     * @return Value of member time_service
     */
    eProsima_user_DllExport int64_t time_service() const;

    /*!
     * @brief This function returns a reference to member time_service
     * @return Reference to member time_service
     */
    eProsima_user_DllExport int64_t& time_service();

    /*!
     * @brief This function copies the value in member data_int
     * @param _data_int New value to be copied in member data_int
     */
    eProsima_user_DllExport void data_int(
            const DataCollectionInt& _data_int);

    /*!
     * @brief This function moves the value in member data_int
     * @param _data_int New value to be moved in member data_int
     */
    eProsima_user_DllExport void data_int(
            DataCollectionInt&& _data_int);

    /*!
     * @brief This function returns a constant reference to member data_int
     * @return Constant reference to member data_int
     */
    eProsima_user_DllExport const DataCollectionInt& data_int() const;

    /*!
     * @brief This function returns a reference to member data_int
     * @return Reference to member data_int
     */
    eProsima_user_DllExport DataCollectionInt& data_int();
    /*!
     * @brief This function copies the value in member data_float
     * @param _data_float New value to be copied in member data_float
     */
    eProsima_user_DllExport void data_float(
            const DataCollectionFloat& _data_float);

    /*!
     * @brief This function moves the value in member data_float
     * @param _data_float New value to be moved in member data_float
     */
    eProsima_user_DllExport void data_float(
            DataCollectionFloat&& _data_float);

    /*!
     * @brief This function returns a constant reference to member data_float
     * @return Constant reference to member data_float
     */
    eProsima_user_DllExport const DataCollectionFloat& data_float() const;

    /*!
     * @brief This function returns a reference to member data_float
     * @return Reference to member data_float
     */
    eProsima_user_DllExport DataCollectionFloat& data_float();
    /*!
     * @brief This function copies the value in member data_double
     * @param _data_double New value to be copied in member data_double
     */
    eProsima_user_DllExport void data_double(
            const DataCollectionDouble& _data_double);

    /*!
     * @brief This function moves the value in member data_double
     * @param _data_double New value to be moved in member data_double
     */
    eProsima_user_DllExport void data_double(
            DataCollectionDouble&& _data_double);

    /*!
     * @brief This function returns a constant reference to member data_double
     * @return Constant reference to member data_double
     */
    eProsima_user_DllExport const DataCollectionDouble& data_double() const;

    /*!
     * @brief This function returns a reference to member data_double
     * @return Reference to member data_double
     */
    eProsima_user_DllExport DataCollectionDouble& data_double();
    /*!
     * @brief This function copies the value in member data_char
     * @param _data_char New value to be copied in member data_char
     */
    eProsima_user_DllExport void data_char(
            const DataCollectionChar& _data_char);

    /*!
     * @brief This function moves the value in member data_char
     * @param _data_char New value to be moved in member data_char
     */
    eProsima_user_DllExport void data_char(
            DataCollectionChar&& _data_char);

    /*!
     * @brief This function returns a constant reference to member data_char
     * @return Constant reference to member data_char
     */
    eProsima_user_DllExport const DataCollectionChar& data_char() const;

    /*!
     * @brief This function returns a reference to member data_char
     * @return Reference to member data_char
     */
    eProsima_user_DllExport DataCollectionChar& data_char();

    /*!
     * @brief This function returns the maximum serialized size of an object
     * depending on the buffer alignment.
     * @param current_alignment Buffer alignment.
     * @return Maximum serialized size.
     */
    eProsima_user_DllExport static size_t getMaxCdrSerializedSize(
            size_t current_alignment = 0);

    /*!
     * @brief This function returns the serialized size of a data depending on the buffer alignment.
     * @param data Data which is calculated its serialized size.
     * @param current_alignment Buffer alignment.
     * @return Serialized size.
     */
    eProsima_user_DllExport static size_t getCdrSerializedSize(
            const DDSData& data,
            size_t current_alignment = 0);


    /*!
     * @brief This function serializes an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    eProsima_user_DllExport void serialize(
            eprosima::fastcdr::Cdr& cdr) const;

    /*!
     * @brief This function deserializes an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    eProsima_user_DllExport void deserialize(
            eprosima::fastcdr::Cdr& cdr);



    /*!
     * @brief This function returns the maximum serialized size of the Key of an object
     * depending on the buffer alignment.
     * @param current_alignment Buffer alignment.
     * @return Maximum serialized size.
     */
    eProsima_user_DllExport static size_t getKeyMaxCdrSerializedSize(
            size_t current_alignment = 0);

    /*!
     * @brief This function tells you if the Key has been defined for this type
     */
    eProsima_user_DllExport static bool isKeyDefined();

    /*!
     * @brief This function serializes the key members of an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    eProsima_user_DllExport void serializeKey(
            eprosima::fastcdr::Cdr& cdr) const;

private:

    int64_t m_time_source;
    int64_t m_time_service;
    DataCollectionInt m_data_int;
    DataCollectionFloat m_data_float;
    DataCollectionDouble m_data_double;
    DataCollectionChar m_data_char;
};

#endif // _DDSDATA_H_