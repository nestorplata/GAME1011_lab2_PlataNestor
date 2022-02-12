#include "Eskeleton.h"
#include "DarkOrc.h"
#include "Troll.h"

int main()
{
	Enemy* pSkeleton = new Eskeleton();
	Enemy* pTroll = new Troll();
	Enemy* pOrc = new Orc();
	Enemy* pDarkOrc = new DarkOrc();

	pSkeleton->Attack();
	pTroll->Attack();
	pOrc->Attack();
	pDarkOrc->Attack();

	system("pause");
	return 0;

}