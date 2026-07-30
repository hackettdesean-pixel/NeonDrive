#include "CommandBuffer.h"
#include "../../../Engine/Core/Logger.h"

namespace Neon {

bool CommandBuffer::Create()
{
    Logger::Info("Creating Command Buffers");
    return true;
}


void CommandBuffer::Begin()
{
    Logger::Info("Command Buffer Begin");
}


void CommandBuffer::End()
{
    Logger::Info("Command Buffer End");
}

}
