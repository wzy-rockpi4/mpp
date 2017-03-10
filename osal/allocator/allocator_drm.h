/*
 * Copyright 2010 Rockchip Electronics S.LSI Co. LTD
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _ALLOCATOR_DRM_H_
#define _ALLOCATOR_DRM_H_

#include "os_allocator.h"

extern os_allocator allocator_drm;

MPP_RET os_allocator_drm_open(void **ctx, size_t alignment);
MPP_RET os_allocator_drm_alloc(void *ctx, MppBufferInfo *info);
MPP_RET os_allocator_drm_import(void *ctx, MppBufferInfo *data);
MPP_RET os_allocator_drm_release(void *ctx, MppBufferInfo *data);
MPP_RET os_allocator_drm_free(void *ctx, MppBufferInfo *data);
MPP_RET os_allocator_drm_close(void *ctx);

#endif
