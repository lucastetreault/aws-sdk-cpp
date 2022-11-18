﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/chime-sdk-voice/model/Termination.h>
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
  class AWS_CHIMESDKVOICE_API GetVoiceConnectorTerminationResult
  {
  public:
    GetVoiceConnectorTerminationResult();
    GetVoiceConnectorTerminationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetVoiceConnectorTerminationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Termination& GetTermination() const{ return m_termination; }

    
    inline void SetTermination(const Termination& value) { m_termination = value; }

    
    inline void SetTermination(Termination&& value) { m_termination = std::move(value); }

    
    inline GetVoiceConnectorTerminationResult& WithTermination(const Termination& value) { SetTermination(value); return *this;}

    
    inline GetVoiceConnectorTerminationResult& WithTermination(Termination&& value) { SetTermination(std::move(value)); return *this;}

  private:

    Termination m_termination;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
