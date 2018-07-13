#include "stdafx.h"
#include "memMemoryAllocator.h"

memMemoryAllocator::memMemoryAllocator()
    : HeapData(nullptr)
    , TotalSize(0)
    , Locked(0)
    , Prev(memMemoryAllocator::First)
{
    memMemoryAllocator::First = this;

    datDisplayUsed = memMemoryAllocator::DisplayUsed;
}

memMemoryAllocator::~memMemoryAllocator()
{
    memMemoryAllocator::First = Prev;

    HeapData = 0;
}

void memMemoryAllocator::Init(void * heapData, unsigned int heapSize, BOOL a3, BOOL checkAlloc)
{
    HeapData = heapData;
    TotalSize = heapSize;
    Alignment = 0;
    field_15 = 1;
    field_14 = a3;
    CheckAlloc = checkAlloc;
    fieldD8 = 0.0f;

    if (a3)
    {
        memset(Array1, 0, sizeof(Array1));
    }

    memset(Array2, 0, sizeof(Array2));
}

void memMemoryAllocator::Kill(void)
{
    this->HeapData = 0;
    this->field_15 = 0;
}

void memMemoryAllocator::DisplayUsed(char const * status)
{
    return stub<cdecl_t<void, const char*>>(0x577170, status);
}

defnvar(0x6B46AC, memMemoryAllocator::First);
defnvar(0x6B46A8, memMemoryAllocator::Current);
defnvar(0x5CE81C, datDisplayUsed);