#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>
unsigned my_strlen(const char* arr);//Çó×Ö·û´®¸öÊý
char* my_strcpy(char* arr,const char* arr1);
int my_strncmp(const char* arr, const char* arr1, size_t len);
int my_strcmp(const char* arr, const char* arr1);
char* my_strcat(char* arr, const char* arr1);
char* my_strncat(char* arr, const char* arr1, size_t len);
char* my_strstr(const char* arr,const char* arr1);
char* my_strncpy(char* arr, const char* arr1,size_t len);
char* my_strtok(char* arr, const char* sep);