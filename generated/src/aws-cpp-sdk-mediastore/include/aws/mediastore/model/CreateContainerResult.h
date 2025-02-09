﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediastore/MediaStore_EXPORTS.h>
#include <aws/mediastore/model/Container.h>
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
namespace MediaStore
{
namespace Model
{
  class CreateContainerResult
  {
  public:
    AWS_MEDIASTORE_API CreateContainerResult();
    AWS_MEDIASTORE_API CreateContainerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIASTORE_API CreateContainerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>ContainerARN: The Amazon Resource Name (ARN) of the newly created container.
     * The ARN has the following format: arn:aws:&lt;region&gt;:&lt;account that owns
     * this container&gt;:container/&lt;name of container&gt;. For example:
     * arn:aws:mediastore:us-west-2:111122223333:container/movies </p>
     * <p>ContainerName: The container name as specified in the request.</p>
     * <p>CreationTime: Unix time stamp.</p> <p>Status: The status of container
     * creation or deletion. The status is one of the following: <code>CREATING</code>,
     * <code>ACTIVE</code>, or <code>DELETING</code>. While the service is creating the
     * container, the status is <code>CREATING</code>. When an endpoint is available,
     * the status changes to <code>ACTIVE</code>.</p> <p>The return value does not
     * include the container's endpoint. To make downstream requests, you must obtain
     * this value by using <a>DescribeContainer</a> or <a>ListContainers</a>.</p>
     */
    inline const Container& GetContainer() const{ return m_container; }

    /**
     * <p>ContainerARN: The Amazon Resource Name (ARN) of the newly created container.
     * The ARN has the following format: arn:aws:&lt;region&gt;:&lt;account that owns
     * this container&gt;:container/&lt;name of container&gt;. For example:
     * arn:aws:mediastore:us-west-2:111122223333:container/movies </p>
     * <p>ContainerName: The container name as specified in the request.</p>
     * <p>CreationTime: Unix time stamp.</p> <p>Status: The status of container
     * creation or deletion. The status is one of the following: <code>CREATING</code>,
     * <code>ACTIVE</code>, or <code>DELETING</code>. While the service is creating the
     * container, the status is <code>CREATING</code>. When an endpoint is available,
     * the status changes to <code>ACTIVE</code>.</p> <p>The return value does not
     * include the container's endpoint. To make downstream requests, you must obtain
     * this value by using <a>DescribeContainer</a> or <a>ListContainers</a>.</p>
     */
    inline void SetContainer(const Container& value) { m_container = value; }

    /**
     * <p>ContainerARN: The Amazon Resource Name (ARN) of the newly created container.
     * The ARN has the following format: arn:aws:&lt;region&gt;:&lt;account that owns
     * this container&gt;:container/&lt;name of container&gt;. For example:
     * arn:aws:mediastore:us-west-2:111122223333:container/movies </p>
     * <p>ContainerName: The container name as specified in the request.</p>
     * <p>CreationTime: Unix time stamp.</p> <p>Status: The status of container
     * creation or deletion. The status is one of the following: <code>CREATING</code>,
     * <code>ACTIVE</code>, or <code>DELETING</code>. While the service is creating the
     * container, the status is <code>CREATING</code>. When an endpoint is available,
     * the status changes to <code>ACTIVE</code>.</p> <p>The return value does not
     * include the container's endpoint. To make downstream requests, you must obtain
     * this value by using <a>DescribeContainer</a> or <a>ListContainers</a>.</p>
     */
    inline void SetContainer(Container&& value) { m_container = std::move(value); }

    /**
     * <p>ContainerARN: The Amazon Resource Name (ARN) of the newly created container.
     * The ARN has the following format: arn:aws:&lt;region&gt;:&lt;account that owns
     * this container&gt;:container/&lt;name of container&gt;. For example:
     * arn:aws:mediastore:us-west-2:111122223333:container/movies </p>
     * <p>ContainerName: The container name as specified in the request.</p>
     * <p>CreationTime: Unix time stamp.</p> <p>Status: The status of container
     * creation or deletion. The status is one of the following: <code>CREATING</code>,
     * <code>ACTIVE</code>, or <code>DELETING</code>. While the service is creating the
     * container, the status is <code>CREATING</code>. When an endpoint is available,
     * the status changes to <code>ACTIVE</code>.</p> <p>The return value does not
     * include the container's endpoint. To make downstream requests, you must obtain
     * this value by using <a>DescribeContainer</a> or <a>ListContainers</a>.</p>
     */
    inline CreateContainerResult& WithContainer(const Container& value) { SetContainer(value); return *this;}

    /**
     * <p>ContainerARN: The Amazon Resource Name (ARN) of the newly created container.
     * The ARN has the following format: arn:aws:&lt;region&gt;:&lt;account that owns
     * this container&gt;:container/&lt;name of container&gt;. For example:
     * arn:aws:mediastore:us-west-2:111122223333:container/movies </p>
     * <p>ContainerName: The container name as specified in the request.</p>
     * <p>CreationTime: Unix time stamp.</p> <p>Status: The status of container
     * creation or deletion. The status is one of the following: <code>CREATING</code>,
     * <code>ACTIVE</code>, or <code>DELETING</code>. While the service is creating the
     * container, the status is <code>CREATING</code>. When an endpoint is available,
     * the status changes to <code>ACTIVE</code>.</p> <p>The return value does not
     * include the container's endpoint. To make downstream requests, you must obtain
     * this value by using <a>DescribeContainer</a> or <a>ListContainers</a>.</p>
     */
    inline CreateContainerResult& WithContainer(Container&& value) { SetContainer(std::move(value)); return *this;}

  private:

    Container m_container;
  };

} // namespace Model
} // namespace MediaStore
} // namespace Aws
