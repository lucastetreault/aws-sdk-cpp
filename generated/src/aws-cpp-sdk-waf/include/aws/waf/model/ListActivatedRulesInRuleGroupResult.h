﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf/WAF_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/waf/model/ActivatedRule.h>
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
namespace WAF
{
namespace Model
{
  class ListActivatedRulesInRuleGroupResult
  {
  public:
    AWS_WAF_API ListActivatedRulesInRuleGroupResult();
    AWS_WAF_API ListActivatedRulesInRuleGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAF_API ListActivatedRulesInRuleGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>If you have more <code>ActivatedRules</code> than the number that you
     * specified for <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more <code>ActivatedRules</code>, submit
     * another <code>ListActivatedRulesInRuleGroup</code> request, and specify the
     * <code>NextMarker</code> value from the response in the <code>NextMarker</code>
     * value in the next request.</p>
     */
    inline const Aws::String& GetNextMarker() const{ return m_nextMarker; }

    /**
     * <p>If you have more <code>ActivatedRules</code> than the number that you
     * specified for <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more <code>ActivatedRules</code>, submit
     * another <code>ListActivatedRulesInRuleGroup</code> request, and specify the
     * <code>NextMarker</code> value from the response in the <code>NextMarker</code>
     * value in the next request.</p>
     */
    inline void SetNextMarker(const Aws::String& value) { m_nextMarker = value; }

    /**
     * <p>If you have more <code>ActivatedRules</code> than the number that you
     * specified for <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more <code>ActivatedRules</code>, submit
     * another <code>ListActivatedRulesInRuleGroup</code> request, and specify the
     * <code>NextMarker</code> value from the response in the <code>NextMarker</code>
     * value in the next request.</p>
     */
    inline void SetNextMarker(Aws::String&& value) { m_nextMarker = std::move(value); }

    /**
     * <p>If you have more <code>ActivatedRules</code> than the number that you
     * specified for <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more <code>ActivatedRules</code>, submit
     * another <code>ListActivatedRulesInRuleGroup</code> request, and specify the
     * <code>NextMarker</code> value from the response in the <code>NextMarker</code>
     * value in the next request.</p>
     */
    inline void SetNextMarker(const char* value) { m_nextMarker.assign(value); }

    /**
     * <p>If you have more <code>ActivatedRules</code> than the number that you
     * specified for <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more <code>ActivatedRules</code>, submit
     * another <code>ListActivatedRulesInRuleGroup</code> request, and specify the
     * <code>NextMarker</code> value from the response in the <code>NextMarker</code>
     * value in the next request.</p>
     */
    inline ListActivatedRulesInRuleGroupResult& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}

    /**
     * <p>If you have more <code>ActivatedRules</code> than the number that you
     * specified for <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more <code>ActivatedRules</code>, submit
     * another <code>ListActivatedRulesInRuleGroup</code> request, and specify the
     * <code>NextMarker</code> value from the response in the <code>NextMarker</code>
     * value in the next request.</p>
     */
    inline ListActivatedRulesInRuleGroupResult& WithNextMarker(Aws::String&& value) { SetNextMarker(std::move(value)); return *this;}

    /**
     * <p>If you have more <code>ActivatedRules</code> than the number that you
     * specified for <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more <code>ActivatedRules</code>, submit
     * another <code>ListActivatedRulesInRuleGroup</code> request, and specify the
     * <code>NextMarker</code> value from the response in the <code>NextMarker</code>
     * value in the next request.</p>
     */
    inline ListActivatedRulesInRuleGroupResult& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}


    /**
     * <p>An array of <code>ActivatedRules</code> objects.</p>
     */
    inline const Aws::Vector<ActivatedRule>& GetActivatedRules() const{ return m_activatedRules; }

    /**
     * <p>An array of <code>ActivatedRules</code> objects.</p>
     */
    inline void SetActivatedRules(const Aws::Vector<ActivatedRule>& value) { m_activatedRules = value; }

    /**
     * <p>An array of <code>ActivatedRules</code> objects.</p>
     */
    inline void SetActivatedRules(Aws::Vector<ActivatedRule>&& value) { m_activatedRules = std::move(value); }

    /**
     * <p>An array of <code>ActivatedRules</code> objects.</p>
     */
    inline ListActivatedRulesInRuleGroupResult& WithActivatedRules(const Aws::Vector<ActivatedRule>& value) { SetActivatedRules(value); return *this;}

    /**
     * <p>An array of <code>ActivatedRules</code> objects.</p>
     */
    inline ListActivatedRulesInRuleGroupResult& WithActivatedRules(Aws::Vector<ActivatedRule>&& value) { SetActivatedRules(std::move(value)); return *this;}

    /**
     * <p>An array of <code>ActivatedRules</code> objects.</p>
     */
    inline ListActivatedRulesInRuleGroupResult& AddActivatedRules(const ActivatedRule& value) { m_activatedRules.push_back(value); return *this; }

    /**
     * <p>An array of <code>ActivatedRules</code> objects.</p>
     */
    inline ListActivatedRulesInRuleGroupResult& AddActivatedRules(ActivatedRule&& value) { m_activatedRules.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextMarker;

    Aws::Vector<ActivatedRule> m_activatedRules;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
