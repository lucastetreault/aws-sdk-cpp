﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/opensearchserverless/model/SecurityPolicyDetail.h>
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
namespace OpenSearchServerless
{
namespace Model
{
  class CreateSecurityPolicyResult
  {
  public:
    AWS_OPENSEARCHSERVERLESS_API CreateSecurityPolicyResult();
    AWS_OPENSEARCHSERVERLESS_API CreateSecurityPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVERLESS_API CreateSecurityPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Details about the created security policy.</p>
     */
    inline const SecurityPolicyDetail& GetSecurityPolicyDetail() const{ return m_securityPolicyDetail; }

    /**
     * <p>Details about the created security policy.</p>
     */
    inline void SetSecurityPolicyDetail(const SecurityPolicyDetail& value) { m_securityPolicyDetail = value; }

    /**
     * <p>Details about the created security policy.</p>
     */
    inline void SetSecurityPolicyDetail(SecurityPolicyDetail&& value) { m_securityPolicyDetail = std::move(value); }

    /**
     * <p>Details about the created security policy.</p>
     */
    inline CreateSecurityPolicyResult& WithSecurityPolicyDetail(const SecurityPolicyDetail& value) { SetSecurityPolicyDetail(value); return *this;}

    /**
     * <p>Details about the created security policy.</p>
     */
    inline CreateSecurityPolicyResult& WithSecurityPolicyDetail(SecurityPolicyDetail&& value) { SetSecurityPolicyDetail(std::move(value)); return *this;}

  private:

    SecurityPolicyDetail m_securityPolicyDetail;
  };

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
