#include <rtthread.h>
#include <stdio.h>
#include "main.h"
#include "AI.h"

#define DBG_TAG "main"
#define DBG_LVL DBG_LOG
#include <rtdbg.h>

int main(void)
{
    AI_Reponse();

    while (1)
    {

//        LOG_D("Hello");
        rt_thread_mdelay(1000);

    }

    return RT_EOK;
}

