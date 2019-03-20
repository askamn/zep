#pragma once
#include "utils/file/file.h"

#include "opus_asset_base.h"
#include "compile.h"

namespace Mgfx
{

class ShaderFileAsset : public OpusAsset
{
public:
    ShaderFileAsset(const fs::path& path)
        : OpusAsset(path)
    {
        compile_queue(this);
    }
    
    // Compile a path to an OpusAsset data
    virtual std::future<std::shared_ptr<CompileResult>> Compile() override;
};

}
