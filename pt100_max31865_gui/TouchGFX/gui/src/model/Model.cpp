#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>
#include <cstdint>
#include "FreeRTOS.h"
#include "queue.h"

extern "C" xQueueHandle tempMsgQueue;

Model::Model() : modelListener(0)
{
}

void Model::tick()
{
	double temp;

	while(xQueueReceive(tempMsgQueue, &temp, 0) == pdTRUE)
	{
		modelListener->UpdateTemp(temp);
	}
}
