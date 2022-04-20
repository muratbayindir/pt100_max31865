#include <gui/screenmain_screen/ScreenMainView.hpp>

ScreenMainView::ScreenMainView()
{

}

void ScreenMainView::setupScreen()
{
    ScreenMainViewBase::setupScreen();
}

void ScreenMainView::tearDownScreen()
{
    ScreenMainViewBase::tearDownScreen();
}

void ScreenMainView::UpdateTemp(double temp)
{
//	int min, max;

	data[++dataCounter % 100] = temp;

//	min = data[0];
//	max = data[0];
//
//	for(int i = 0; i < 100; ++i)
//	{
//		if(data[i] > max)
//			max = data[i];
//		if(data[i] < min)
//			min = data[i];
//	}
//
//	while(min % 10 != 0) min--;
//	while(max % 10 != 0) max++;
//
//	while(max - min < 60) max += 10;
//	while(max - min < 120) min -= 10;
//
//	dynamicGraph.setGraphRangeY(min, max);

	dynamicGraph.addDataPoint((float) temp);

	dynamicGraph.invalidate();
}
