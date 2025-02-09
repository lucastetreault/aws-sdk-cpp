﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iot/model/ReportType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace IoT
{
namespace Model
{
  class ListThingRegistrationTaskReportsResult
  {
  public:
    AWS_IOT_API ListThingRegistrationTaskReportsResult();
    AWS_IOT_API ListThingRegistrationTaskReportsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API ListThingRegistrationTaskReportsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Links to the task resources.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceLinks() const{ return m_resourceLinks; }

    /**
     * <p>Links to the task resources.</p>
     */
    inline void SetResourceLinks(const Aws::Vector<Aws::String>& value) { m_resourceLinks = value; }

    /**
     * <p>Links to the task resources.</p>
     */
    inline void SetResourceLinks(Aws::Vector<Aws::String>&& value) { m_resourceLinks = std::move(value); }

    /**
     * <p>Links to the task resources.</p>
     */
    inline ListThingRegistrationTaskReportsResult& WithResourceLinks(const Aws::Vector<Aws::String>& value) { SetResourceLinks(value); return *this;}

    /**
     * <p>Links to the task resources.</p>
     */
    inline ListThingRegistrationTaskReportsResult& WithResourceLinks(Aws::Vector<Aws::String>&& value) { SetResourceLinks(std::move(value)); return *this;}

    /**
     * <p>Links to the task resources.</p>
     */
    inline ListThingRegistrationTaskReportsResult& AddResourceLinks(const Aws::String& value) { m_resourceLinks.push_back(value); return *this; }

    /**
     * <p>Links to the task resources.</p>
     */
    inline ListThingRegistrationTaskReportsResult& AddResourceLinks(Aws::String&& value) { m_resourceLinks.push_back(std::move(value)); return *this; }

    /**
     * <p>Links to the task resources.</p>
     */
    inline ListThingRegistrationTaskReportsResult& AddResourceLinks(const char* value) { m_resourceLinks.push_back(value); return *this; }


    /**
     * <p>The type of task report.</p>
     */
    inline const ReportType& GetReportType() const{ return m_reportType; }

    /**
     * <p>The type of task report.</p>
     */
    inline void SetReportType(const ReportType& value) { m_reportType = value; }

    /**
     * <p>The type of task report.</p>
     */
    inline void SetReportType(ReportType&& value) { m_reportType = std::move(value); }

    /**
     * <p>The type of task report.</p>
     */
    inline ListThingRegistrationTaskReportsResult& WithReportType(const ReportType& value) { SetReportType(value); return *this;}

    /**
     * <p>The type of task report.</p>
     */
    inline ListThingRegistrationTaskReportsResult& WithReportType(ReportType&& value) { SetReportType(std::move(value)); return *this;}


    /**
     * <p>The token to use to get the next set of results, or <b>null</b> if there are
     * no additional results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to get the next set of results, or <b>null</b> if there are
     * no additional results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use to get the next set of results, or <b>null</b> if there are
     * no additional results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use to get the next set of results, or <b>null</b> if there are
     * no additional results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use to get the next set of results, or <b>null</b> if there are
     * no additional results.</p>
     */
    inline ListThingRegistrationTaskReportsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to get the next set of results, or <b>null</b> if there are
     * no additional results.</p>
     */
    inline ListThingRegistrationTaskReportsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to get the next set of results, or <b>null</b> if there are
     * no additional results.</p>
     */
    inline ListThingRegistrationTaskReportsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_resourceLinks;

    ReportType m_reportType;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
