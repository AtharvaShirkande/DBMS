#include<jni.h>
#include<stdio.h>
#include"B1.h"
JNIEXPORT jint JNICALL Java_B1_add(JNIEnv*env,jobject obj,jint a,jint b){
  printf("\n%d+%d\n",a,b,(a+b));
  return a+b;}
JNIEXPORT jint JNICALL Java_B1_sub(JNIEnv*env,jobject obj,jint a,jint b){
    printf("\n%d+%d\n",a,b,(a-b));
    return a-b;}
JNIEXPORT jint JNICALL Java_B1_mult(JNIEnv*env,jobject obj,jint a,jint b){
      printf("\n%d+%d\n",a,b,(a*b));
      return a*b;}
JNIEXPORT jint JNICALL Java_B1_div(JNIEnv*env,jobject obj,jint a,jint b){
      if(b!=0){
      printf("\n%d+%d\n",a,b,(a/b));
      return a/b;}
      else {
      printf("Division By zero is not allowed.\n");
      return 0;}}
