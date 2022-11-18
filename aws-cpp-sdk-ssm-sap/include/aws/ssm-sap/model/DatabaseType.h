﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-sap/SsmSap_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SsmSap
{
namespace Model
{
  enum class DatabaseType
  {
    NOT_SET,
    SYSTEM,
    TENANT
  };

namespace DatabaseTypeMapper
{
AWS_SSMSAP_API DatabaseType GetDatabaseTypeForName(const Aws::String& name);

AWS_SSMSAP_API Aws::String GetNameForDatabaseType(DatabaseType value);
} // namespace DatabaseTypeMapper
} // namespace Model
} // namespace SsmSap
} // namespace Aws
