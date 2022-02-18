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
 * @file DDSAlarm.cpp
 * This source file contains the definition of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifdef _WIN32
// Remove linker warning LNK4221 on Visual Studio
namespace {
char dummy;
}  // namespace
#endif  // _WIN32

#include "DDSAlarm.h"
#include "DDSAlarmTypeObject.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

namespace scada_ate
{
    namespace typetopics
    {
        size_t MaxSizeDDSAlarmVectorAlarms = 0;

        void SetMaxSizeDDSAlarmVectorAlarms(size_t size) { MaxSizeDDSAlarmVectorAlarms = size; };
        size_t GetMaxSizeDDSAlarmVectorAlarms() { return MaxSizeDDSAlarmVectorAlarms; };

    }
}

DDSAlarm::DDSAlarm()
{
    // m_time_source com.eprosima.idl.parser.typecode.PrimitiveTypeCode@1068e947
    m_time_source = 0;
    // m_time_service com.eprosima.idl.parser.typecode.PrimitiveTypeCode@7dc222ae
    m_time_service = 0;
    // m_alarms com.eprosima.idl.parser.typecode.SequenceTypeCode@aecb35a

    // m_quality com.eprosima.idl.parser.typecode.SequenceTypeCode@5fcd892a


    // Just to register all known types
    registerDDSAlarmTypes();
}

DDSAlarm::~DDSAlarm()
{




}

DDSAlarm::DDSAlarm(
        const DDSAlarm& x)
{
    m_time_source = x.m_time_source;
    m_time_service = x.m_time_service;
    m_alarms = x.m_alarms;
    m_quality = x.m_quality;
}

DDSAlarm::DDSAlarm(
        DDSAlarm&& x)
{
    m_time_source = x.m_time_source;
    m_time_service = x.m_time_service;
    m_alarms = std::move(x.m_alarms);
    m_quality = std::move(x.m_quality);
}

DDSAlarm& DDSAlarm::operator =(
        const DDSAlarm& x)
{

    m_time_source = x.m_time_source;
    m_time_service = x.m_time_service;
    m_alarms = x.m_alarms;
    m_quality = x.m_quality;

    return *this;
}

DDSAlarm& DDSAlarm::operator =(
        DDSAlarm&& x)
{

    m_time_source = x.m_time_source;
    m_time_service = x.m_time_service;
    m_alarms = std::move(x.m_alarms);
    m_quality = std::move(x.m_quality);

    return *this;
}

size_t DDSAlarm::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    current_alignment += (scada_ate::typetopics::GetMaxSizeDDSAlarmVectorAlarms() * 4) + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);



    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    current_alignment += (scada_ate::typetopics::GetMaxSizeDDSAlarmVectorAlarms() * 4) + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);




    return current_alignment - initial_alignment;
}

size_t DDSAlarm::getCdrSerializedSize(
        const DDSAlarm& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    if (data.alarms().size() > 0)
    {
        current_alignment += (data.alarms().size() * 4) + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);
    }



    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    if (data.quality().size() > 0)
    {
        current_alignment += (data.quality().size() * 4) + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);
    }




    return current_alignment - initial_alignment;
}

void DDSAlarm::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_time_source;
    scdr << m_time_service;
    scdr << m_alarms;
    scdr << m_quality;

}

void DDSAlarm::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_time_source;
    dcdr >> m_time_service;
    dcdr >> m_alarms;
    dcdr >> m_quality;
}

/*!
 * @brief This function sets a value in member time_source
 * @param _time_source New value for member time_source
 */
void DDSAlarm::time_source(
        int64_t _time_source)
{
    m_time_source = _time_source;
}

/*!
 * @brief This function returns the value of member time_source
 * @return Value of member time_source
 */
int64_t DDSAlarm::time_source() const
{
    return m_time_source;
}

/*!
 * @brief This function returns a reference to member time_source
 * @return Reference to member time_source
 */
int64_t& DDSAlarm::time_source()
{
    return m_time_source;
}

/*!
 * @brief This function sets a value in member time_service
 * @param _time_service New value for member time_service
 */
void DDSAlarm::time_service(
        int64_t _time_service)
{
    m_time_service = _time_service;
}

/*!
 * @brief This function returns the value of member time_service
 * @return Value of member time_service
 */
int64_t DDSAlarm::time_service() const
{
    return m_time_service;
}

/*!
 * @brief This function returns a reference to member time_service
 * @return Reference to member time_service
 */
int64_t& DDSAlarm::time_service()
{
    return m_time_service;
}

/*!
 * @brief This function copies the value in member alarms
 * @param _alarms New value to be copied in member alarms
 */
void DDSAlarm::alarms(
        const std::vector<uint32_t>& _alarms)
{
    m_alarms = _alarms;
}

/*!
 * @brief This function moves the value in member alarms
 * @param _alarms New value to be moved in member alarms
 */
void DDSAlarm::alarms(
        std::vector<uint32_t>&& _alarms)
{
    m_alarms = std::move(_alarms);
}

/*!
 * @brief This function returns a constant reference to member alarms
 * @return Constant reference to member alarms
 */
const std::vector<uint32_t>& DDSAlarm::alarms() const
{
    return m_alarms;
}

/*!
 * @brief This function returns a reference to member alarms
 * @return Reference to member alarms
 */
std::vector<uint32_t>& DDSAlarm::alarms()
{
    return m_alarms;
}
/*!
 * @brief This function copies the value in member quality
 * @param _quality New value to be copied in member quality
 */
void DDSAlarm::quality(
        const std::vector<uint32_t>& _quality)
{
    m_quality = _quality;
}

/*!
 * @brief This function moves the value in member quality
 * @param _quality New value to be moved in member quality
 */
void DDSAlarm::quality(
        std::vector<uint32_t>&& _quality)
{
    m_quality = std::move(_quality);
}

/*!
 * @brief This function returns a constant reference to member quality
 * @return Constant reference to member quality
 */
const std::vector<uint32_t>& DDSAlarm::quality() const
{
    return m_quality;
}

/*!
 * @brief This function returns a reference to member quality
 * @return Reference to member quality
 */
std::vector<uint32_t>& DDSAlarm::quality()
{
    return m_quality;
}

size_t DDSAlarm::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;







    return current_align;
}

bool DDSAlarm::isKeyDefined()
{
    return false;
}

void DDSAlarm::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
        
}