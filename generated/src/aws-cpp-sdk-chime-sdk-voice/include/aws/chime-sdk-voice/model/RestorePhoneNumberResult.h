﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/chime-sdk-voice/model/PhoneNumber.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ChimeSDKVoice
{
namespace Model
{
  class RestorePhoneNumberResult
  {
  public:
    AWS_CHIMESDKVOICE_API RestorePhoneNumberResult();
    AWS_CHIMESDKVOICE_API RestorePhoneNumberResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKVOICE_API RestorePhoneNumberResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const PhoneNumber& GetPhoneNumber() const{ return m_phoneNumber; }

    
    inline void SetPhoneNumber(const PhoneNumber& value) { m_phoneNumber = value; }

    
    inline void SetPhoneNumber(PhoneNumber&& value) { m_phoneNumber = std::move(value); }

    
    inline RestorePhoneNumberResult& WithPhoneNumber(const PhoneNumber& value) { SetPhoneNumber(value); return *this;}

    
    inline RestorePhoneNumberResult& WithPhoneNumber(PhoneNumber&& value) { SetPhoneNumber(std::move(value)); return *this;}

  private:

    PhoneNumber m_phoneNumber;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
