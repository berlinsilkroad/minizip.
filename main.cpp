#include <iostream>
#include "MyMiniZip.h"
int main()
{
	MyMiniZip unZip;
	/*
	@��ѹ�� zip�ļ���
	*/
	unZip.unZipPackageToLoacal("D:\\boost_1_67_0.zip", "d:\\pdf\\");
	printf_s("������ʱ %d ��\r\n", unZip.GetCountTime());

	/*
	@ ѹ���ļ���Ŀ¼Ϊzip��
	*/
	unZip.CompressToPackageZip("D:\\PDF\\WPS2016ProPlus_normal.exe", "D:\\PDF\\WPS2016.zip");
	printf_s("������ʱ %d ��\r\n", unZip.GetCountTime());
	system("pause");
	return 0;
}