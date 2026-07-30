#pragma once

#ifdef ANDROID

#include <vulkan/vulkan.h>

#elif defined(__linux__)

#ifndef NEON_NO_VULKAN

#include <vulkan/vulkan.h>

#else

// Vulkan disabled fallback

typedef void* VkInstance;
typedef void* VkDevice;

#endif

#elif defined(_WIN32)

#include <vulkan/vulkan.h>

#endif
