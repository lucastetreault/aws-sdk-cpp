﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace QuickSight
{
namespace Model
{
  enum class DataSetFilterAttribute
  {
    NOT_SET,
    QUICKSIGHT_VIEWER_OR_OWNER,
    QUICKSIGHT_OWNER,
    DIRECT_QUICKSIGHT_VIEWER_OR_OWNER,
    DIRECT_QUICKSIGHT_OWNER,
    DIRECT_QUICKSIGHT_SOLE_OWNER,
    DATASET_NAME
  };

namespace DataSetFilterAttributeMapper
{
AWS_QUICKSIGHT_API DataSetFilterAttribute GetDataSetFilterAttributeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForDataSetFilterAttribute(DataSetFilterAttribute value);
} // namespace DataSetFilterAttributeMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
