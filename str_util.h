/*****************************************************************************
*  @Name        : str_util.h
*  @Version     : 1.0
*  @Copyright   : alibaba-inc.com
*  @Created on  : 2016-12-29
*  @Author      : panpan.tpp
*  @Description : str_util
******************************************************************************/
#ifndef _STR_UTILITY_H_
#define _STR_UTILITY_H_

#include <vector>
#include <string>
#include <stdint.h>
#include <memory.h>
#if defined(_WIN32)
#include <Windows.h>
#else
#include <iconv.h>
#endif
namespace util {
	bool split(const std::string &src, const std::string &delimit, std::vector<std::string> &v);
	std::wstring Utf82Unicode(const std::string& utf8string);	//utf8 ת Unicode 
	std::string WideByte2Acsi(std::wstring& wstrcode);	//unicode תΪ ascii 
	std::string UTF_82ASCII(std::string& strUtf8Code);	//utf-8 ת ascii
	std::wstring Acsi2WideByte(std::string& strascii);	//ascii ת Unicode
	std::string Unicode2Utf8(const std::wstring& widestring);	//Unicode ת Utf8
	std::string ASCII2UTF_8(std::string& strAsciiCode);	//ascii ת Utf8  
}

#endif

