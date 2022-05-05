#include "kernelUtil.h"
#include "memory/heap.h"
#include "scheduling/pit.h"
#include "shell.h"

extern "C" void _start(BootInfo *bootInfo)
{

    KernelInfo kernelInfo = InitializeKernel(bootInfo);

    GlobalRenderer->Print("\n\nWelcome to SeshOS!\n");

    newShell->PrintPrompt();

    while (true)
    {
        asm("hlt");
    }
}